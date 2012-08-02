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

FileLogger::FileLogger(const String& filename, Bool append, const std::string& name) : LogSink(name) {
	init(filename,append);	
}

FileLogger::~FileLogger() {
	_stream.close();
}

Bool FileLogger::init(const String& filename, Bool append) {
	_filename = filename;
	_append = append;
	_stream.open(filename.c_str(), append ? (std::ofstream::out | std::ofstream::app) : std::ofstream::out);
	return true;
}

} /* namespace scLog */
