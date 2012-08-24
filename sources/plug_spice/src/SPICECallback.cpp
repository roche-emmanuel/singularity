#include "sgtCommon.h"

#include "base/TimeProvider.h"

#include "SPICECallback.h"
#include <osg/PositionAttitudeTransform>

#include "SpiceUsr.h"

#undef OBJECT_CAST
#define OBJECT_CAST dynamic_cast

#include <osgDB/Registry>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>
#include <osgDB/ObjectWrapper>

// write the wrapper:
REGISTER_OBJECT_WRAPPER( sgtSPICECallback_Wrapper,
						new sgt::SPICECallback, sgt::SPICECallback,
						"osg::Object osg::NodeCallback sgt::SPICECallback" )
{
	ADD_STRING_SERIALIZER( Target, "" ); 
	ADD_STRING_SERIALIZER( Observer, "" ); 
	ADD_STRING_SERIALIZER( Frame, "" ); 
	ADD_STRING_SERIALIZER( SrcFrame, "" ); 
	ADD_STRING_SERIALIZER( Mode, "" ); 
	ADD_BOOL_SERIALIZER( UpdatePosition, false ); 
	ADD_BOOL_SERIALIZER( UpdateAttitude, false ); 
}

#undef OBJECT_CAST
#define OBJECT_CAST static_cast

namespace sgt {

void SPICECallback::operator()(osg::Node * node, osg::NodeVisitor * nv) {
	osg::Transform* trans = node->asTransform();
	osg::PositionAttitudeTransform* pat = trans ? trans->asPositionAttitudeTransform() : NULL;

	if(!pat) {
		trERROR("SPICECallback","Cannot apply SPICECallback on non-PAT node.");
		return traverse(node,nv);
	}

	// get the real current time:
	boost::posix_time::ptime currentTime = sgtTimeManager::getTime(NULL,true);
	std::string timestr = boost::posix_time::to_iso_extended_string(currentTime);

	double et;
	str2et_c( timestr.c_str(), &et );

	double ltime;
	double pos[3];
	double rotation[3][3];

	if(_updatePosition)
		spkpos_c ( _target.c_str(), et, _frame.c_str(), _mode.c_str(), _observer.c_str(),  pos, &ltime );
	if(_updateAttitude)
		pxform_c ( _srcFrame.c_str(), _frame.c_str(), et, rotation );

	if ( failed_c() ) {
		char msg[200];
		memset(msg,0,200);

		//getmsg_c ("SHORT",199,(char*)msg);
		getmsg_c ( "LONG", 199, (char*)msg);

		// Get explanation:
		//expln_( "SPICE(ZERORADIUS)", expln, 17L, expln_len);

		trERROR("SPICECallback","SPICE error occurred: "<<msg);

		reset_c();
	}

	if(_updatePosition) {
		// SPICE functions always return km as units, since we are now using meters, we need to manually convert:
		pos[0] *= 1000.0;
		pos[1] *= 1000.0;
		pos[2] *= 1000.0;

		pat->setPosition(osg::Vec3d(pos[0],pos[1],pos[2]));
	}

	if(_updateAttitude) {
		// Also need to set the attitude from the rotation matrix:
		// the rotate matrix is so that : X' = Rotate * X 
		// To comform to the OSG mechanism we should use: tX' = tX * tRotate  (t = transposition) 
		//(but the rotation matrix is colum major, so no need to do this apparently)
		// And then, convert tRotate to a quaternion.
		osg::Matrixd mat = osg::Matrixd(rotation[0][0],rotation[1][0],rotation[2][0],0.0,
										rotation[0][1],rotation[1][1],rotation[2][1],0.0,
										rotation[0][2],rotation[1][2],rotation[2][2],0.0,
										0.0,0.0,0.0,1.0);
		osg::Quat q = mat.getRotate();

		pat->setAttitude(q);
	}

	traverse(node,nv);
}

} // namespace sgt
