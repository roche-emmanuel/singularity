#ifndef SGTCORE_SERIALIZER_
#define SGTCORE_SERIALIZER_

namespace osgDB {
class InputStream;
class OutputStream;
};

enum ExtendedTypes {
	RW_TIME = 100
};

// This file contains helper to perform basic serializations.
#define ADD_TIME_SERIALIZER(PROP, DEF) \
	wrapper->addSerializer( new osgDB::PropByRefSerializer< MyClass, sgt::Time >( \
#PROP, DEF, &MyClass::get##PROP, &MyClass::set##PROP), (osgDB::BaseSerializer::Type)RW_TIME )

osgDB::InputStream& operator>>(osgDB::InputStream& is, sgt::Time & pt);
osgDB::OutputStream& operator<<(osgDB::OutputStream& os, const sgt::Time & pt);

#endif
