#ifndef SGTCORE_SERIALIZER_
#define SGTCORE_SERIALIZER_

#include "base/Variant.h"

#include <osgDB/InputStream>
#include <osgDB/OutputStream>

enum ExtendedTypes {
	RW_TIME = 100,
	RW_VECTOR,
};

// This file contains helper to perform basic serializations.
#define ADD_TIME_SERIALIZER(PROP, DEF) \
	wrapper->addSerializer( new osgDB::PropByRefSerializer< MyClass, sgt::Time >( \
#PROP, DEF, &MyClass::get##PROP, &MyClass::set##PROP), (osgDB::BaseSerializer::Type)RW_TIME )

#define ADD_VECTOR_SERIALIZER(PROP, TYPE) \
	wrapper->addSerializer( new osgDB::PropByRefSerializer< MyClass, TYPE >( \
#PROP, TYPE(), &MyClass::get##PROP, &MyClass::set##PROP), (osgDB::BaseSerializer::Type)RW_VECTOR )


osgDB::InputStream& operator>>(osgDB::InputStream& is, sgt::Time & pt);
osgDB::OutputStream& operator<<(osgDB::OutputStream& os, const sgt::Time & pt);

template <class ValueType>
osgDB::InputStream& operator>>(osgDB::InputStream& is, sgt::Variant<ValueType> & var) {
	return is;
};

template <class ValueType>
osgDB::OutputStream& operator<<(osgDB::OutputStream& os, const sgt::Variant<ValueType> & var) {
	return os;
};

template <class ValueType>
osgDB::InputStream& operator>>(osgDB::InputStream& is, std::vector<ValueType> & vec) {
	unsigned int size = 0;
	if ( is.isBinary() )
	{
		is >> size;
		if(size>0)
			vec.reserve(size);

		for ( unsigned int i=0; i<size; ++i )
		{
			ValueType value;
			is >> value;
			vec.push_back( value );
		}
	}
	else if ( is.matchString("Vector") )
	{
		is >> size;
		if ( size>0 ) is >> osgDB::BEGIN_BRACKET;
		for ( unsigned int i=0; i<size; ++i )
		{
			ValueType value;
			is >> value;
			vec.push_back( value );
		}
		if ( size>0 )
		{
			is >> osgDB::END_BRACKET;
		}
	}

	return is;
};

template <class ValueType>
osgDB::OutputStream& operator<<(osgDB::OutputStream& os, const std::vector<ValueType> & vec) {
	unsigned int size = (unsigned int)vec.size();
	if ( os.isBinary() )
	{
		os << size;
		for ( std::vector<ValueType>::const_iterator itr=vec.begin(); itr!=vec.end(); ++itr )
		{
			os << (*itr);
		}
	}
	else if ( size>0 )
	{
		os << osgDB::PROPERTY("Vector") << size << osgDB::BEGIN_BRACKET << std::endl;
		for ( std::vector<ValueType>::const_iterator itr=vec.begin(); itr!=vec.end(); ++itr )
		{
			os << (*itr);
		}
		os << std::endl;
		os << osgDB::END_BRACKET << std::endl;
	}
	return os;
};


#endif
