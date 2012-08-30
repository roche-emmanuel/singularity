#ifndef VARIANT_H_
#define VARIANT_H_

#include "Object.h"
#include <osgDB/InputStream>
#include <osgDB/OutputStream>

namespace sgt {

class VariantTypeVisitor; // forward declaration, see implementation below.
class VariantEqualityVisitor; // forward declaration, see implementation below.

/** Class used internally to represent an empty variant value.*/
class EmptyType {
public:
	EmptyType() {};
	EmptyType(const EmptyType& rhs) {};
	~EmptyType() {};

	bool operator==(const EmptyType& rhs) const { return true; }
	bool operator<(const EmptyType& rhs) const { return false; }
};

/** Enumeration describing the available data types in this container. */
enum VariantType {
	VARIANT_EMPTY, //!< Empty data value.
	VARIANT_INT32, //!< The data is an integer value
	VARIANT_DOUBLE, //!< The data is a double value
	VARIANT_BOOL, //!< The data is a boolean value
	VARIANT_STRING, //!< The data is a string value
	VARIANT_OBJECT, //!< The data is an object value
	VARIANT_UNKNOWN //!< The data type is unknown.
};

/** Class to hold heterogenous piece of data.
This class is based on the boost::variant container to hold various kind of base data.
*/
template < typename T = boost::variant<EmptyType,Int32,Double,Bool,String,RefPtr> >
class SGTCORE_EXPORT Variant : public T {
public:
	/** variant type used for that class*/
	typedef T variant_type;
	
public:
	/** Default constructor. */
	Variant() : variant_type() {};
	
	/** Copy constructor.*/
	Variant(const Variant& rhs) : variant_type((const variant_type&)rhs) {};
	
	/** Construction from variant type.*/
	template <typename U>
	Variant(const U & rhs) : variant_type(rhs) {};
	
	/** Assignment operator.*/
	Variant& operator=(const Variant& rhs) {
		variant_type::operator=((const variant_type&)rhs);
		return *this;
	};
	
	/** assignment operator from variant types.*/
	template <typename U>
	Variant& operator=(const U & rhs) {
		return variant_type::operator=(rhs);
	};
	
	/** Default destructor.*/
	virtual ~Variant() {};
	
	/** accept a variant visitor on this object. 
	The visitor is applied on that object and the function returns
	the visitor result.*/
	template<typename ResultType>
	ResultType accept(const boost::static_visitor<ResultType>& visitor ) {
		return boost::apply_visitor( visitor, *this );
	};
	
	/** Const versioon of the unary accept. */
	template<typename ResultType>
	ResultType accept(const boost::static_visitor<ResultType>& visitor ) const {
		return boost::apply_visitor( visitor, *this );
	};
	
	/** Accept a binary variant visitor.
	This visitor can be used to perform operations on 
	two variants at the same time.*/
	/*template<typename ResultType>
	ResultType accept(boost::static_visitor<ResultType>& visitor, const Variant& rhs ) const {
		return boost::apply_visitor( visitor, const_cast<Variant&>(*this), const_cast<Variant&>(rhs) );
	};*/
	
	/** Const version of the binary accept.*/
	/*template<typename ResultType>
	ResultType accept(boost::static_visitor<ResultType>& visitor, const Variant& rhs ) const {
		return boost::apply_visitor( visitor, const_cast<Variant&>(*this), const_cast<Variant&>(rhs) );
	};*/

	/** Retrieve the type of data contained in this object. */
	Int32 getType() const {
		//return which();
		return boost::apply_visitor(VariantTypeVisitor(), const_cast<Variant&>(*this));
		//return accept(VariantTypeVisitor());
	};
	
	/** Check if two variant objects are equals.*/
	Bool operator==(const Variant& rhs) const {
		return boost::apply_visitor(VariantEqualityVisitor(), const_cast<Variant&>(*this), const_cast<Variant&>(rhs));
		//return accept<Bool>(VariantEqualityVisitor(),rhs);
	};
	
	/** Check if two variant objects are different.*/
	Bool operator!=(const Variant& rhs) const {
		return !((*this)==rhs);
	}
	
	/** Retrieve a value type from this container
	with a default value in case the type is incorrect.*/
	template <typename ValueType>
	inline ValueType& get(const ValueType& defVal) const {
		ValueType* ptr = boost::get<ValueType>( this );
		return ptr ? *ptr : defVal;
	}

	template <typename ValueType>
	inline ValueType get() const {
		const ValueType* ptr = boost::get<const ValueType>( this );
		return ptr ? *ptr : ValueType();
	}

	/** Retrieve double value from this container. */
	template <>
	inline Double& get<Double>(const Double& defVal) const {
		Int32* ptr = boost::get<Int32>( this );
		Double* ptr2 = boost::get<Double>( this );
		return ptr ? (Double)(*ptr) : ptr2 ? *ptr2 : const_cast<Double&>(defVal);
	}
	
	template <>
	inline Double get<Double>() const {
		const Int32* ptr = boost::get<const Int32>( this );
		const Double* ptr2 = boost::get<const Double>( this );
		return ptr ? (Double)(*ptr) : ptr2 ? *ptr2 : 0.0;
	}

	/** Retrieve referenced value from this container. */
	//template <>
	inline sgtReferenced* get(const sgtReferenced* defVal = NULL) const { //<sgtReferenced*>
		RefPtr* ptr = boost::get<RefPtr>( this );
		return ptr ? ptr->get() : NULL;
	}

	/** Check if this variant contains a value of a given type. */
	template <typename ValueType>
	inline Bool contains() {
		ValueType* ptr = boost::get<ValueType>( this );
		return ptr ? true : false;
	}
	
	/** Check if this variant contains a double value. */
	template <>
	inline Bool contains<Double>() {
		Int32* ptr = boost::get<Int32>( this );
		Double* ptr2 = boost::get<Double>( this );
		return (ptr || ptr2) ? true : false;
	}
	
	/** Check if this variant contains a referenced value. */
	template <>
	inline Bool contains<sgtReferenced*>() {
		RefPtr* ptr = boost::get<RefPtr>( this );
		return ptr  ? true : false;
	}	
	
	/** Check if this variant container is empty. */
	inline Bool empty() {
		return which()==0; // EmptyType object.
	}
	
};

/** Class used to retrieve the type of a given variant container. */
class SGTCORE_EXPORT VariantTypeVisitor : public boost::static_visitor<Int32> {
public:
    Int32 operator()(const EmptyType & i) const { return VARIANT_EMPTY; }
    Int32 operator()(const Int32 & i) const { return VARIANT_INT32; }
    Int32 operator()(const Double & d) const { return VARIANT_DOUBLE; }
    Int32 operator()(const Bool & b) const { return VARIANT_BOOL; }
    Int32 operator()(const String & str) const { return VARIANT_STRING; }
    Int32 operator()(const RefPtr & ref) const { return VARIANT_OBJECT; }

    template <typename T>
    Int32 operator()( const T & operand ) const
    {
        return VARIANT_UNKNOWN; // return unknown type in generic case.
    }	
};

/** Class used to check if two variant objects are equal. eg if
they contain the same value. */
class SGTCORE_EXPORT VariantEqualityVisitor : public boost::static_visitor<Bool> {
public:
    template <typename T, typename U>
    Bool operator()( const T &, const U & ) const
    {
        return false; // cannot compare different types
    }

    template <typename T>
    Bool operator()( const T & lhs, const T & rhs ) const
    {
		return lhs == rhs;
    }
};

/** Class used to write variant to a stream. */
class SGTCORE_EXPORT WriteVariantVisitor : public boost::static_visitor<Void> {
public:
	WriteVariantVisitor(osgDB::OutputStream& os) : _os(os) {};

	Void operator()(const EmptyType & i) const { 
		if(_os.isBinary()) {
			_os << VARIANT_EMPTY;
		}
		else {
			_os << osgDB::PROPERTY("Type") << VARIANT_EMPTY << std::endl; 
		}
	}

	Void operator()(const Int32 & i) const { 
		if(_os.isBinary()) {
			_os << VARIANT_INT32 << i;
		}
		else {
			_os << osgDB::PROPERTY("Type") << VARIANT_INT32; // << std::endl;  
			_os << osgDB::PROPERTY("Value") << i << std::endl;
		}
	}

	Void operator()(const Double & d) const { 
		if(_os.isBinary()) {
			_os << VARIANT_DOUBLE << d;
		}
		else {
			_os << osgDB::PROPERTY("Type") << VARIANT_DOUBLE; // << std::endl; 
			_os << osgDB::PROPERTY("Value") << d << std::endl;
		}
	}

	Void operator()(const Bool & b) const { 
		if(_os.isBinary()) {
			_os << VARIANT_BOOL << b;
		}
		else {
			_os << osgDB::PROPERTY("Type") << VARIANT_BOOL; // << std::endl; 
			_os << osgDB::PROPERTY("Value") << b << std::endl;
		}
	}

	Void operator()(const String & str) const {
		if(_os.isBinary()) {
			_os << VARIANT_STRING << str;
		}
		else {
			_os << osgDB::PROPERTY("Type") << VARIANT_STRING; // << std::endl; 
			_os << osgDB::PROPERTY("Value") << str << std::endl;
		}
	}

	Void operator()(const RefPtr & ref) const {
		sgt::Object* obj = dynamic_cast<sgt::Object*>(ref.get());
		if(!obj) {
			return;
		}

		if(_os.isBinary()) {
			_os << VARIANT_OBJECT << obj;
		}
		else {
			_os << osgDB::PROPERTY("Type") << VARIANT_OBJECT; // << std::endl; 
			_os << osgDB::PROPERTY("Value") << obj << std::endl;
		}

	}

	template <typename T>
	Void operator()( const T & operand ) const
	{
		return; // return unknown type in generic case.
	}

protected:
	mutable osgDB::OutputStream& _os;
};


typedef Variant<> Any;

} /* namespace sgt */


#endif /* VARIANT_H_ */
