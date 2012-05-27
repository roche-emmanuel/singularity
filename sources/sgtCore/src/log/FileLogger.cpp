/*
 * FileLogger.cpp
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */
#include "sgtCommon.h"

#include "log/FileLogger.h"

namespace sgt {

void FileLogger::output(int level, std::string trace, std::string msg) {
	_stream << msg;
	_stream.flush();
}

FileLogger::FileLogger(const std::string& filename, bool append, const std::string& name) : LogSink(name) {
	_stream.open(filename.c_str(), append ? (std::ofstream::out | std::ofstream::app) : std::ofstream::out);
}

FileLogger::~FileLogger() {
	_stream.close();
}

} /* namespace scLog */
