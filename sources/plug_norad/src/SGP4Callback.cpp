#include "sgtCommon.h"
#include "SGP4Callback.h"
#include "base/TimeProvider.h"

#include <osg/PositionAttitudeTransform>

using namespace std;
#include <cTle.h>
#include <cOrbit.h>
#include <cEci.h>
#include <SGP4unit.h>
#include <SGP4io.h>
#include <SGP4ext.h>

namespace sgt {

SGP4Callback::SGP4Callback() {
	// Default constructor used for debug purposed with hardcoded TLE data:
	std::string line1 = "1 00005U 58002B   00179.78495062  .00000023  00000-0  28098-4 0  4753";
	std::string line2 = "2 00005  34.2682 348.7242 1859667 331.7664  19.3264 10.82419157413667";

	_tle = NULL;
	_orbit = NULL;
	_eci = new cEci();
	_ellipsoid = new osg::EllipsoidModel;
	_useSpeed = true;
	_defaultForward = osg::Vec3d(0.0,0.0,1.0);
	_active = true;
	_prevTime = 0.0;
	_speedThreshold = 1000.0;
	_forcedDefaultForward = false;
	_prevPos = osg::Vec3d(0.0,0.0,0.0); // initialize prevPos
	_targetFrame = "";
	setTLE(line1,line2);
}

SGP4Callback::~SGP4Callback() {
	if(_tle)
		delete _tle;
	if(_orbit)
		delete _orbit;
	delete _eci;
}

SGP4Callback::SGP4Callback(std::string line1, std::string line2) {
	_tle = NULL;
	_orbit = NULL;
	_eci = new cEci();
	_ellipsoid = new osg::EllipsoidModel;
	_useSpeed = true;
	_defaultForward = osg::Vec3d(0.0,0.0,1.0);
	_active = true;
	_prevTime = 0.0;
	_speedThreshold = 1000.0;
	_forcedDefaultForward = false;
	_prevPos = osg::Vec3d(0.0,0.0,0.0); // initialize prevPos
	_targetFrame = "";
	setTLE(line1,line2);
}

void SGP4Callback::operator()(osg::Node * node, osg::NodeVisitor * nv) {
	if(!_active)
		return traverse(node,nv);

	osg::Transform* trans = node->asTransform();
	osg::PositionAttitudeTransform* pat = trans ? trans->asPositionAttitudeTransform() : NULL;

	if(!pat) {
		trERROR("SGP4Callback","Cannot apply SGP4Callback on non-PAT node.");
		return traverse(node,nv);
	}

	// We generate the position:
	osg::Vec3d pos;
	osg::Vec3d speed;

	double time; // = nv->getFrameStamp()->getReferenceTime()+timeOffset;

	// get the real current time:
	boost::posix_time::ptime currentTime = sgtTimeManager::getTime(NULL,true); // Use UTC time here.

	osg::Quat rot;
	if(!_targetFrame.empty()) {
		// Get the transformation quaternion:
		// All the positions in iau_earth should be transformed with this rotation:
		//rot = giScene::SceneTools::getSpiceTransform("iau_earth",_targetFrame,currentTime);
	}

	Duration delta = currentTime-_epoch;

	time = (double)delta.total_milliseconds()/60000.0; // this time value must be given in minutes.

	//wxLogVerbose("[SGP4] Elapsed minutes: %f",time);

	*_eci = _orbit->GetPosition(time);

	cCoordGeo coords = _eci->ToGeo();

	double x,y,z,x2,y2,z2;
	_ellipsoid->convertLatLongHeightToXYZ(coords.m_Lat,coords.m_Lon,coords.m_Alt*1000.0,x,y,z);
	pos = rot*osg::Vec3d(x,y,z);

	// if the object didn't move then no need to update anything:
	if(pos == _prevPos)
		return traverse(node,nv);

	// Compure the real speed vector taking into account the elapsed time:
	double curTime = nv->getFrameStamp()->getReferenceTime();
	if(_prevTime == 0.0) {
		_prevTime = curTime;
		_prevPos = pos;
		return traverse(node,nv);
	}

	if(curTime==_prevTime) {
		return traverse(node,nv);
	}

	double elapsed = (curTime-_prevTime);
	
	// Compute the current speed vector:
	speed = (pos-_prevPos)/elapsed;
	_prevTime = curTime;

	// Compute the local up vector:
	_ellipsoid->convertLatLongHeightToXYZ(coords.m_Lat,coords.m_Lon,coords.m_Alt*1000.0+1000.0,x2,y2,z2);

	osg::Vec3d newup = (rot*osg::Vec3d(x2,y2,z2))-pos;
	newup.normalize();

	// Only consider the projection of the speed on the perpendicular plane to the local up vector:
	speed -= newup*(speed*newup);

	if(speed.length() < _speedThreshold) { // if the speed is smaller than the given speed threshold then consider the satellite as geostationary.
		// Consider the speed is too low and use the default forward vector:
		if(!_forcedDefaultForward) {
			trWARN("SPG4Callback","Forced using default forward instead of speed (projected norm="<<speed.length()<<").");
			_forcedDefaultForward = true;
		}
		speed = _defaultForward;
	}
	else if (_forcedDefaultForward) {
		trINFO("SPG4Callback","Restored speed usage for SGP4 position callback.");
		_forcedDefaultForward = false;
	}

	speed.normalize();
	_prevPos = pos;

	// We update the object position and speed:
	// We use meter units instead of km:
	pat->setPosition(pos); //*1000.0);

	// Now we update the orientation:

	// use the speed or the provided "defaultForward" to compute the satellite attitude:
	osg::Vec3d newleft = newup^(_useSpeed ? speed : _defaultForward);
	if(newleft.length() < 10e-10) {
		// force using default forward direction:
		speed = _defaultForward;
		newleft = newup^speed;
	}
	newleft.normalize();

	osg::Vec3d newforward = newleft^newup;
	newforward.normalize();
	
	// The convention used in this computation is : Forward = X axis, Up = Z axis
	osg::Matrixd mat(newforward.x(),newforward.y(),newforward.z(),0.0,
		newleft.x(),newleft.y(),newleft.z(),0.0,
		newup.x(),newup.y(),newup.z(),0.0,
		0.0,0.0,0.0,1.0);
	pat->setAttitude(_attitudeOffset*mat.getRotate());

	traverse(node,nv);
}

void SGP4Callback::setTLE(std::string line1, std::string line2) {
	// Reset this object if needed:
	if(_tle) {
		delete _tle;
		_tle = NULL;
	}
	if(_orbit) {
		delete _orbit;
		_orbit = NULL;
	}

	// We need to convert the TLE into satellite data:
	if(line1.length() > 130 || line2.length() > 130) {
		trERROR("SPG4Callback","Invalid TLE lines: \n"<<line1<<"\n"<<line2);
		return;
	}

	// Save the tle lines:
	_tleline1 = line1;
	_tleline2 = line2;

	trINFO_V("SGP4Callback","TLE line1: '"<<line1<<"'");
	trINFO_V("SGP4Callback","TLE line2: '"<<line2<<"'");

	// create the TLE set:
	std::string algo = "SxP4";
	_tle = new cTle(algo,_tleline1,_tleline2);

	// create the orbit:
	_orbit = new cOrbit(*_tle);

	// prepaer the epoch value:
	// We update the start date:
	int year; int mon; int day; int hr; int min;
	double sec;
	invjday( _orbit->Epoch().GetDate(), year,mon,day,hr,min, sec );

	int secs = floor(sec);
	int millisecs = floor((sec-secs)*1000);
	int microsecs = floor((sec-secs-millisecs*0.001)*1000000);
	trINFO_V("SGP4Callback","TLE details: date="<<_orbit->Epoch().GetDate());
	trINFO_V("SGP4Callback","year="<<year<<", month="<<mon<<", day="<<day<<", hours="<<hr<<", mins="<<min);
	trINFO_V("SGP4Callback","sec="<<sec<<" = "<<secs<<" - "<<millisecs<<" - "<<microsecs);

	using namespace boost::posix_time;
	_epoch = Time(boost::gregorian::date(year,mon,day),hours(hr)+minutes(min)+seconds(secs)+milliseconds(millisecs)+microseconds(microsecs));

	// re-initialize the previous position:
	_prevPos = osg::Vec3d(0.0,0.0,0.0);
	_prevTime = 0.0;
}

osg::Vec3d SGP4Callback::getLocation(Time pt) {
	boost::posix_time::time_duration delta = pt-_epoch;

	double time = (double)delta.total_milliseconds()/60000.0; // this time value must be given in minutes.

	*_eci = _orbit->GetPosition(time);

	cCoordGeo coords = _eci->ToGeo();

	return osg::Vec3d(coords.m_Lat,coords.m_Lon,coords.m_Alt);
}

double SGP4Callback::getArgumentOfLatitude(Time pt) {
	// AOL = true anomaly + arg. of Perigee:
	double argperigee = _orbit->ArgPerigee(); // in radians.

	// True anomaly:
	Duration delta = pt-_epoch;

	double time = (double)delta.total_milliseconds()/60000.0; // this time value must be given in minutes.

	*_eci = _orbit->GetPosition(time);
	osg::Vec3d r,v;
	_eci->Ae2Km(); // ensure we have kilometers.
	r.set(_eci->GetPos().m_x,_eci->GetPos().m_y,_eci->GetPos().m_z);
	v.set(_eci->GetVel().m_x,_eci->GetVel().m_y,_eci->GetVel().m_z);

#if 0
	// eccentricity vector
	double mu = 398600.441; // [km^3 s^-2]
	osg::Vec3d evec = r*v.length2()/mu-v*(r*v)/mu-r/r.length();

	//wxLogMessage("evec=(%lf,%lf,%lf)",evec.x(),evec.y(),evec.z());

	double nu = acos((evec*r)/(evec.length()*r.length()));
	if (r*v<0.0) {
		nu = osg::PI*2-nu;
	}

	double aol = nu+argperigee;

	// Eccentric anomaly:
	double e = orbit->Eccentricity();

	double E = atan(sqrt(1-e*e)*sin(nu)/(e+cos(nu)));
	
	// Mean anomaly:
	cJulian jt = cJulian((unsigned int)pt.date().year(),(unsigned int)pt.date().month(),(unsigned int)pt.date().day(),(unsigned int)pt.time_of_day().hours(),(unsigned int)pt.time_of_day().minutes(),(double)pt.time_of_day().seconds());
	wxLogMessage("Julian date is: %d-%d-%d at %d:%d:%lf",(unsigned int)pt.date().year(),(unsigned int)pt.date().month(),(unsigned int)pt.date().day(),(unsigned int)pt.time_of_day().hours(),(unsigned int)pt.time_of_day().minutes(),(double)pt.time_of_day().seconds());
	double M = orbit->mnAnomaly(jt);

	// check if the mean anomaly is the same as what can be computed from Eccentric anomaly:
	double MM = E - e*sin(E);
	wxLogMessage("Mean Anomaly %lf == %lf",M,MM);
#else
	// Workaround implementation to fix the ticket #371
	// Compute Argument of latitude for Circular orbit:
	// cf. http://en.wikipedia.org/wiki/True_anomaly

	osg::Vec3d h = r^v;
	osg::Vec3d n = osg::Vec3d(-h.y(),h.x(),0.0);

	//wxLogMessage("N vector=(%lf,%lf,%lf)",n.x(),n.y(),n.z());

	double aol = acos(n*r/(n.length()*r.length()));
	if(n*v>0.0) {
		aol = osg::PI*2-aol;
	}

#endif

	return aol; // in radians;
}

} // namespace sgt
