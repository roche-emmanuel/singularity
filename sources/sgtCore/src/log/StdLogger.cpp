#include "sgtCommon.h"

#include "log/StdLogger.h"

namespace sgt {

/**
Output a given message on the LogSink object.
*/
	void StdLogger::output(int level, std::string trace, std::string msg) {
  // Bouml preserved body begin 00030E0B
	std::cout << msg;
  // Bouml preserved body end 00030E0B
}

} // namespace scLog
