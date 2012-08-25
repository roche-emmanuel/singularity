#ifndef _SGP4CALLBACK_H
#define _SGP4CALLBACK_H

#include "sgtCommon.h"
#include <osg/NodeCallback>

#include <osg/ref_ptr>
#include <osg/CoordinateSystemNode>

#include <osg/Quat>
#include <osg/Node>

#include <osg/NodeVisitor>

namespace Zeptomoby 
{
namespace OrbitTools
{
class cTle;
class cOrbit;
class cEci;
};
};

using namespace Zeptomoby::OrbitTools;

namespace sgt {

class PLUG_EXPORT SGP4Callback : public osg::NodeCallback {
protected:
    osg::ref_ptr<osg::EllipsoidModel> _ellipsoid;
    Time _epoch;
    osg::Quat _attitudeOffset;

    String _tleline1;
    String _tleline2;

    cOrbit* _orbit;
    cTle* _tle;
    cEci* _eci;

    osg::Vec3d _prevPos;
    osg::Vec3d _defaultForward;

    bool _useSpeed;
    bool _active;
    double _prevTime;
	
    bool _forcedDefaultForward;
    double _speedThreshold;

    String _targetFrame;
	
public:
    SGP4Callback();

    ~SGP4Callback();

    SGP4Callback(String line1, String line2);

    void operator()(osg::Node * node, osg::NodeVisitor * nv);

    void setTLE(String line1, String line2);

    inline void setAttitudeOffset(const osg::Quat& value) { _attitudeOffset = value; }
    inline const osg::Quat& getAttitudeOffset() const { return _attitudeOffset; }

    inline void setDefaultForward(const osg::Vec3d& value) {_defaultForward = value; }
	inline const osg::Vec3d& getDefaultForward() const { return _defaultForward; }

	inline void setUseSpeed(bool value) { _useSpeed = value; }
	inline bool getUseSpeed() const { return _useSpeed; }

	String getTLELine1() const { return _tleline1; }
	String getTLELine2() const { return _tleline2; }

	inline void setActive(bool enabled) { _active = enabled; }
	inline bool getActive() const { return _active; }

	inline void setSpeedThreshold(double threshold) { _speedThreshold = threshold; }
	inline double getSpeedThreshold() const { return _speedThreshold; }

	inline void setTargetFrame(const String& val) { _targetFrame = val; }
	inline const String& getTargetFrame() const { return _targetFrame; }

    osg::Vec3d getLocation(Time pt);
    double getArgumentOfLatitude(Time pt);
};

} // namespace sgt
#endif
