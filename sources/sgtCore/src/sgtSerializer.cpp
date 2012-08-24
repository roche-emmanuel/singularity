#include "sgtCommon.h"

#include <osgDB/Registry>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

osgDB::InputStream& operator>>(osgDB::InputStream& is, sgt::Time & pt) {
	std::string str;
	is >> str;
	pt = boost::posix_time::from_iso_string(str);
	return is;
}

osgDB::OutputStream& operator<<(osgDB::OutputStream& os, const sgt::Time & pt) {
	std::string str = boost::posix_time::to_iso_string(pt);
	os << str;
	return os;
}
