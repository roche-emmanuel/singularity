#include "sgtCommon.h"
#include "base/TimeProvider.h"

namespace sgt {

IMPLEMENT_SINGLETON(TimeManager);

Time TimeProvider::getCurrentTime() {
	//! Return the current simulation time in the time manager object.
	Time currentTime = getRealTime();
	boost::posix_time::time_duration elapsed = currentTime-_lastUpdateTime;
	_lastUpdateTime = currentTime;

	// Add the elapsed duration to the simulation time with the proper coeff:
	long double subs = 0.0;
	if(_timeSpeed == 1.0) {
		_simulationTime += elapsed; // full precision addition.
	}
	else if(_microPrecision) {
		subs = ((long double)elapsed.total_microseconds())*(long double)_timeSpeed;
		// extract seconds:
		long double secs = floorl(subs/1000000.0);
		subs = subs - secs*1000000.0;
		_simulationTime += boost::posix_time::seconds((unsigned long)secs)+boost::posix_time::microseconds((unsigned long)subs);
	}
	else {
		//subs = ((double)elapsed.total_milliseconds())*_timeSpeed;
		subs = ((long double)elapsed.total_nanoseconds())*(long double)_timeSpeed;
		// extract seconds:
		long double secs = floorl(subs/1000000000.0);
		subs = subs - secs*1000000000.0;
		_simulationTime += boost::posix_time::seconds((unsigned long)secs)+boost::posix_time::nanoseconds((unsigned long)subs);
	}

	return _simulationTime;
}

void TimeProvider::setCurrentTime(const Time& value, bool utc) {
	//! override the current simulation time, not changing the time speed.
	_lastUpdateTime = getRealTime();
	_simulationTime = value;
	if(utc) {
		_simulationTime += (boost::posix_time::microsec_clock::local_time()-boost::posix_time::microsec_clock::universal_time());
	}
}

Time TimeProvider::getRealTime(bool utc)
{
	//! Return the real current time
	//! \param utc if true then the UTC time is returned, otherwise, using local computer time.
 	return utc ? boost::posix_time::microsec_clock::universal_time() : boost::posix_time::microsec_clock::local_time();
}

Time TimeProvider::getTime(TimeProvider * provider, bool utc)
{
//! Default static function to retrieve the simulation time from the provider object if valid or from the global time manager otherwise.
	Time result = provider ? provider->getCurrentTime() : sgtTimeManager::instance().getCurrentTime();
	return utc ? result+(boost::posix_time::microsec_clock::universal_time()-boost::posix_time::microsec_clock::local_time()) : result;
}

double TimeProvider::getElapsedSeconds(TimeProvider * provider)
{
 	if(!provider) {
		provider = &sgtTimeManager::instance();
	}

	boost::posix_time::time_duration td = provider->getCurrentTime()-provider->getStartTime();
	return ((double)td.total_microseconds()/1000000.0);
}


} // namespace giCommon
