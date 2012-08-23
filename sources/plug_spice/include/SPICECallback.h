#ifndef _SPICECALLBACK_H
#define _SPICECALLBACK_H

#include "sgtCommon.h"

#include <osg/NodeCallback>
#include <osg/Node>
#include <osg/NodeVisitor>

namespace sgt {

class PLUG_EXPORT SPICECallback : public osg::NodeCallback {
protected:
    String _target;
    String _observer;
    String _frame;
    String _srcFrame;
    String _mode;
	bool _updatePosition;
	bool _updateAttitude;

  public:
    SPICECallback() : _updatePosition(false), _updateAttitude(false) {};

    SPICECallback(String target, String observer, String frame, String mode = String("lt+s"), String srcFrame = String("")) :
		_target(target),
		_observer(observer),
		_frame(frame),
		_mode(mode),
		_srcFrame(srcFrame.empty() ? "iau_"+target : srcFrame),
		_updatePosition(true),
		_updateAttitude(true) {};

	SPICECallback(const SPICECallback& sc,const osg::CopyOp& co = osg::CopyOp::SHALLOW_COPY):
		NodeCallback(sc,co),
		_target(sc._target),
		_observer(sc._observer),
		_frame(sc._frame),
		_mode(sc._mode),
		_srcFrame(sc._srcFrame.empty() ? "iau_"+sc._target : sc._srcFrame),
		_updatePosition(sc._updatePosition),
		_updateAttitude(sc._updateAttitude) {};

    ~SPICECallback() {};
	
	Object_META(sgt,SPICECallback);
		
    inline void setTarget(const String& value) { _target = value; }
    inline void setObserver(const String& value) { _observer = value; }
    inline void setFrame(const String& value) { _frame = value; }
    inline void setMode(const String& value) { _mode = value; }
    inline void setSrcFrame(const String& value) { _srcFrame = value; };
    inline void setUpdatePosition(bool value) { _updatePosition = value; }
    inline void setUpdateAttitude(bool value) { _updateAttitude = value; }
	
    inline String getTarget() const { return _target; }
    inline String getObserver() const { return _observer; }
    inline String getFrame() const { return _frame; }
    inline String getSrcFrame() const { return _srcFrame; }
    inline String getMode() const { return _mode; }
    inline bool getUpdatePosition() const { return _updatePosition; }
    inline bool getUpdateAttitude() const { return _updateAttitude; }
	
    void operator()(osg::Node * node, osg::NodeVisitor * nv);
};

} // namespace sgt
#endif
