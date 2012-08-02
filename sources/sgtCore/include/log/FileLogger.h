/*
 * FileLogger.h
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */

#ifndef FILELOGGER_H_
#define FILELOGGER_H_

#include <sgtCommon.h>

namespace sgt {

/**
 * Send log messages into a file.
 * This class is used to send the log messages into a file.
 */
class SGTCORE_EXPORT FileLogger : public LogSink {
public:
	//Object_META_DEF(sgt,FileLogger);

	/** Default constructor. */
	FileLogger() {};

	/**
	 * Create a new FileLogger object and open the corresponding file.
	 * @param filename The file to open
	 * @param append If true, append the log messages to the existing file content.
	 * @param name Optional name for this LogSink.
	 */
	FileLogger(const std::string& filename, bool append = false, const std::string& name = "");

	virtual ~FileLogger();

    /**
    Output a given message on the LogSink object.
    */
	virtual void output(int level, std::string trace, std::string msg);

	/** Initialization function.
	Called in the non default constructor. */
	bool init(const String& filename, bool append = false);

	/** Retrieve the name of the file used. */
	inline String getFilename() { return _filename ; }

	/** Retrieving the appending status. */
	inline Bool getAppending() { return _append; }

private:
	/** File output stream object.*/
    std::ofstream _stream;

	/** The name of the file used.*/
	String _filename;

	/** The current appending status. */
	Bool _append;
};

} /* namespace scLog */
// Automatic global typedef
typedef sgt::FileLogger sgtFileLogger;

#endif /* FILELOGGER_H_ */
