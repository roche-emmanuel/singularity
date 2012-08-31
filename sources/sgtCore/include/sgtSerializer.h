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


namespace osgDB {
using namespace sgt;

osgDB::InputStream& operator>>(osgDB::InputStream& is, sgt::Time & pt);
osgDB::OutputStream& operator<<(osgDB::OutputStream& os, const sgt::Time & pt);

template <class ValueType, class VariantType>
void readValue(osgDB::InputStream& is, sgt::Variant<VariantType> & var) {
	ValueType val;
	is >> val;
	var = val;
}

template <class VariantType>
void readStringValue(osgDB::InputStream& is, sgt::Variant<VariantType> & var) {
	sgt::String val;
	is.readWrappedString(val);
	var = val;
}

template <class VariantType>
osgDB::InputStream& operator>>(osgDB::InputStream& is, sgt::Variant<VariantType> & var) {
	if(is.isBinary()) {
		unsigned int type = 0;
		is >> type;
		
		switch(type) {
		case sgt::VARIANT_BOOL:
			readValue<Bool>(is,var); break;
		case sgt::VARIANT_DOUBLE:
			readValue<Double>(is,var); break;
		case sgt::VARIANT_INT32:
			readValue<Int32>(is,var); break;
		case sgt::VARIANT_STRING:
			readStringValue(is,var); break;
		default:
			trERROR("Variant serializer","Cannotread unknown variant type="<<type);
			break;
		}
	}
	else {
		if(is.matchString("Bool")) {
			readValue<Bool>(is,var);
		}
		else if(is.matchString("Double")) {
			readValue<Double>(is,var);
		}
		else if(is.matchString("Int32")) {
			readValue<Int32>(is,var);
		}
		else if(is.matchString("String")) {
			readStringValue(is,var);
		}
		else {
			trERROR("Variant serializer","Cannot read unknown variant type");
		}
	}

	return is;
};

template <class ValueType>
osgDB::OutputStream& operator<<(osgDB::OutputStream& os, const sgt::Variant<ValueType> & var) {
	unsigned int type = var.getType();

	if(os.isBinary()) {
		os << type;

		switch(type) {
		case sgt::VARIANT_BOOL:
			os << var.get<sgt::Bool>(); break;
		case sgt::VARIANT_DOUBLE:
			os << var.get<sgt::Double>(); break;
		case sgt::VARIANT_INT32:
			os << var.get<sgt::Int32>(); break;
		case sgt::VARIANT_STRING:
			os.writeWrappedString(var.get<sgt::String>()); break;
		default:
			trERROR("Variant serializer","Cannot serialize unknown variant type="<<type);
			break;
		}
	}
	else {
		switch(type) {
		case sgt::VARIANT_BOOL:
			os << osgDB::PROPERTY("Bool") << var.get<sgt::Bool>() << std::endl; break;
		case sgt::VARIANT_DOUBLE:
			os << osgDB::PROPERTY("Double") << var.get<sgt::Double>() << std::endl; break;
		case sgt::VARIANT_INT32:
			os << osgDB::PROPERTY("Int32") <<var.get<sgt::Int32>() << std::endl; break;
		case sgt::VARIANT_STRING:
			os << osgDB::PROPERTY("String");
			os.writeWrappedString(var.get<sgt::String>());
			os << std::endl; break;
		default:
			trERROR("Variant serializer","Cannot serialize unknown variant type="<<type);
			break;
		}
	}

	//boost::apply_visitor(sgt::WriteVariantVisitor(os), var);
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
		os << osgDB::END_BRACKET << std::endl;
	}
	return os;
};

};

#endif
