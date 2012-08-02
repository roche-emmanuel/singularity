#ifndef VARIANT_H_
#define VARIANT_H_

#include "Object.h"

namespace sgt {

class VariantTypeVisitor; // forward declaration, see implementation below.
class VariantEqualityVisitor; // forward declaration, see implementation below.

/** Class used internally to represent an empty variant value.*/
class EmptyType {};

/** Class to hold heterogenous piece of data.
This class is based on the boost::variant container to hold various kind of base data.
*/
template < typename T = boost::variant<EmptyType,Int32,Double,Bool,String,RefPtr> >
class SGTCORE_EXPORT Variant : public T {
public:
	/** variant type used for that class*/
	typedef T variant_type;

	/** Enumeration describing the available data types in this container. */
	enum DataType {
		EMPTY, //!< Empty data value.
		INT32, //!< The data is an integer value
		DOUBLE, //!< The data is a double value
		BOOLEAN, //!< The data is a boolean value
		STRING, //!< The data is a string value
		OBJECT, //!< The data is an object value
		UNKNOWN //!< The data type is unknown.
	};
	
public:
	/** Default constructor. */
	Variant() : variant_type() {};
	
	/** Copy constructor.*/
	Variant(const Variant& rhs) : variant_type(rhs) {};
	
	/** Construction from variant type.*/
	template <typename U>
	Variant(const U & rhs) : variant_type(rhs) {};
	
	/** Assignment operator.*/
	Variant& operator=(const Variant& rhs) {
		return variant_type::operator=(rhs);
	};
	
	/** assignment operator from variant types.*/
	templace <typename U>
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
	template<typename ResultType>
	ResultType accept(const boost::static_visitor<ResultType>& visitor, Variant& rhs ) {
		return boost::apply_visitor( visitor, *this, rhs );
	};
	
	/** Const version of the binary accept.*/
	template<typename ResultType>
	ResultType accept(const boost::static_visitor<ResultType>& visitor, const Variant& rhs ) const {
		return boost::apply_visitor( visitor, *this, rhs );
	};

	/** Retrieve the type of data contained in this object. */
	Int32 getType() const {
		//return which();
		return accept(VariantTypeVisitor());
	};
	
	/** Check if two variant objects are equals.*/
	Bool operator==(const Variant& rhs) const {
		return accept(VariantEqualityVisitor(),rhs);
	};
	
	/** Check if two variant objects are different.*/
	Bool operator!=(const Variant& rhs) const {
		return !((*this)==rhs);
	}
	
	/** Retrieve a value type from this container
	with a default value in case the type is incorrect.*/
	template <typename ValueType>
	inline ValueType get(const ValueType& defVal = ValueType()) {
		ValueType* ptr = boost::get<ValueType>( this );
		return ptr ? *ptr : defVal;
	}

	/** Retrieve double value from this container. */
	template <>
	inline Double get<Double>(const Double& defVal = Double()) {
		Int32* ptr = boost::get<Int32>( this );
		Double* ptr = boost::get<Double>( this );
		return ptr ? (Double)(*ptr)) : ptr2 ? *ptr2 : defVal;
	}
	
	/** Retrieve referenced value from this container. */
	template <>
	inline sgtReferenced* get<sgtReferenced*>(const sgtReferenced*& defVal = NULL) {
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
    Int32 operator()(const EmptyType & i) const { return Variant::EMPTY; }
    Int32 operator()(const Int32 & i) const { return Variant::INT32; }
    Int32 operator()(const Double & d) const { return Variant::DOUBLE; }
    Int32 operator()(const Bool & b) const { return Variant::BOOL; }
    Int32 operator()(const String & str) const { return Variant::STRING; }
    Int32 operator()(const RefPtr & ref) const { return Variant::OBJECT; }

    template <typename T>
    Int32 operator()( const T & operand ) const
    {
        return Variant::UNKNOWN; // return unknown type in generic case.
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

typedef Variant<> Any;

} /* namespace sgt */


#endif /* VARIANT_H_ */
