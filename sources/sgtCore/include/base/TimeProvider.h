#ifndef _TIMEMANAGER_H
#define _TIMEMANAGER_H

#include "sgtCommon.h"
#include "base/Object.h"
#include "base/Singleton.h"

namespace sgt {

class SGTCORE_EXPORT TimeProvider : public sgtObject {
protected:
    //! The time flow speed coefficient, this can be zero or have a negative value for time reversal.
    double _timeSpeed;

    //! Enable/Disable the micro second precision for this timer, default is OFF.
    bool _microPrecision;

	//! Save the real time an update was done, this time is always flowing at normal speed in normal direction. (it is the actual real time flow)
    Time _lastUpdateTime;

    //! This is the simulation time returned by this object. This is used as an "accumulator", where additional
    //! time "chunks" are added/removed.
    Time _simulationTime;

    //! This is the simulation time returned by this object. This is used as an "accumulator", where additional
    //! time "chunks" are added/removed.
    Time _startTime;

public:
    TimeProvider() : 
		_timeSpeed(1.0),
		_microPrecision(false)
	{	
		_lastUpdateTime = getRealTime();
		_simulationTime = _lastUpdateTime;
		_startTime = _lastUpdateTime;
	};

    ~TimeProvider() {};

	TimeProvider(const TimeProvider& tm, const sgtCopyOp& co = sgtCopyOp::SHALLOW_COPY):
		sgtObject(tm,co),
		_timeSpeed(tm._timeSpeed),
		_microPrecision(tm._microPrecision),
		_lastUpdateTime(tm._lastUpdateTime),
		_simulationTime(tm._simulationTime),
		_startTime(tm._startTime) {};
	
	Object_META(sgt, TimeProvider);
	
    //! Return the current simulation time in the time manager object.
    Time getCurrentTime();

    //! override the current simulation time, not changing the time speed.
    void setCurrentTime(const Time & value, bool utc = false);

    //! Set the time speed coefficient, without changing the current time (only adjusting with previous speed first).
    inline void setTimeSpeed(double value) {	
		// Before updating the time speed ensure the simulation time is up-to-date:
		getCurrentTime();
		_timeSpeed = value;
	}

    //! Return the time speed value stored in this time manager object.
    inline double getTimeSpeed() { return _timeSpeed; }

    //! Return the real current time
    //! \param utc if true then the UTC time is returned, otherwise, using local computer time.
    static Time getRealTime(bool utc = false);

    //! Enable/Disable the micro precision support for this timemanager object.
    inline void setMicroPrecision(bool enabled) { _microPrecision = enabled; }

    inline bool getMicroPrecision() const { return _microPrecision; }

    //! Default static function to retrieve the simulation time from the provider object if valid or from the global time manager otherwise.
    static Time getTime(TimeProvider * provider = NULL, bool utc = false);

    //! Return the assigned start time value
    inline Time getStartTime() const { return _startTime; }

    //! Assign a start time value (used when computing the elapsed seconds)
    inline void setStartTime(Time & val) { _startTime = val; } 

    static double getElapsedSeconds(TimeProvider * provider);

};

typedef SingletonHolder<TimeProvider> TimeManager;

} // namespace sgt

typedef sgt::TimeProvider sgtTimeProvider;
typedef sgt::TimeManager sgtTimeManager;

// force template export:
template class SGTCORE_EXPORT sgt::SingletonHolder<sgt::TimeProvider>;

#endif
