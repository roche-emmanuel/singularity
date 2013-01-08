#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include <sgtCommon.h>

#include <osg/Referenced>
#include <osg/Vec4f>

void setupErrorHandler();
void setupStringCopy();

class BasicVariableCallback : public osg::Referenced {
protected:
	std::string _name;
	bool _readOnly;
	
public:
	BasicVariableCallback() : _readOnly(false) {};
	
	inline void setReadOnly(bool ro) { _readOnly = ro; }
	inline bool getReadOnly() { return _readOnly; }
	
	virtual ~BasicVariableCallback() {
		logDEBUG4("Destroying BasicVariableCallback object.");
	}
};

class ButtonCallback : public osg::Referenced {
public:
	
	static void TW_CALL doExecute(void *clientData) {
		//logINFO("Calling setter...");
		static_cast<ButtonCallback*>(clientData)->execute();
		//logINFO("Setter called with value="<<*(const VarType*)value);
	};

	virtual void execute() = 0;
};

class BoolCallback : public BasicVariableCallback {
public:
	typedef bool VarType;
	
	static void TW_CALL setCallback(const void *value, void *clientData) {
		//logINFO("Calling setter...");
		static_cast<BoolCallback*>(clientData)->setValue(*(const VarType*)value);
		//logINFO("Setter called with value="<<*(const VarType*)value);
	};
	
	static void TW_CALL getCallback(void *value, void *clientData) {
		//logINFO("Calling getter...");
		*(VarType *)value = static_cast<BoolCallback*>(clientData)->getValue();
		//logINFO("Getter called, returned: "<< *(VarType *)value);
	};

	virtual void setValue(VarType val) = 0;
	virtual VarType getValue() = 0;
};

class IntCallback : public BasicVariableCallback {
public:
	typedef sgt::Int32 VarType;
	
	static void TW_CALL setCallback(const void *value, void *clientData) {
		static_cast<IntCallback*>(clientData)->setValue(*(const VarType*)value);
	};
	
	static void TW_CALL getCallback(void *value, void *clientData) {
		*(VarType *)value = static_cast<IntCallback*>(clientData)->getValue();
	};

	virtual void setValue(VarType val) = 0;
	virtual VarType getValue() = 0;
};

class EnumCallback : public BasicVariableCallback {
protected:
	int _enumType;
	
public:
	typedef sgt::Int32 VarType;
	
	static void TW_CALL setCallback(const void *value, void *clientData) {
		static_cast<EnumCallback*>(clientData)->setValue(*(const VarType*)value);
	};
	
	static void TW_CALL getCallback(void *value, void *clientData) {
		*(VarType *)value = static_cast<EnumCallback*>(clientData)->getValue();
	};

	inline void setEnumType(int etype) { _enumType = etype; };
	inline int getEnumType() { return _enumType; };
	
	virtual void setValue(VarType val) = 0;
	virtual VarType getValue() = 0;
};

class DoubleCallback : public BasicVariableCallback {
public:
	typedef double VarType;
	
	static void TW_CALL setCallback(const void *value, void *clientData) {
		// logINFO("Setter called with value="<<*(const VarType*)value);
		static_cast<DoubleCallback*>(clientData)->setValue(*(const VarType*)value);
	};
	
	static void TW_CALL getCallback(void *value, void *clientData) {
		*(VarType *)value = static_cast<DoubleCallback*>(clientData)->getValue();
		// logINFO("Getter called, returned: "<< *(VarType *)value);
	};

	virtual void setValue(VarType val) = 0;
	virtual VarType getValue() = 0;
};

class ColorCallback : public BasicVariableCallback {
public:
	typedef osg::Vec4f VarType;
	
	static void TW_CALL setCallback(const void *value, void *clientData) {
		const float* ptr = (const float*)value;
		//logINFO("Setter called with color=("<< ptr[0] << ", " << ptr[1] << ", " << ptr[2] << ", " << ptr[3] << ")");
		static_cast<ColorCallback*>(clientData)->setValue(VarType(ptr[0],ptr[1],ptr[2],ptr[3]));
	};
	
	static void TW_CALL getCallback(void *value, void *clientData) {
		VarType vec = static_cast<ColorCallback*>(clientData)->getValue();
		float* ptr = (float*)value;
		ptr[0] = vec._v[0];
		ptr[1] = vec._v[1];
		ptr[2] = vec._v[2];
		ptr[3] = vec._v[3];
		//logINFO("Getter called with color=("<< ptr[0] << ", " << ptr[1] << ", " << ptr[2] << ", " << ptr[3] << ")");
	};

	virtual void setValue(VarType val) = 0;
	virtual VarType getValue() = 0;
};

class StringCallback : public BasicVariableCallback {
public:
	typedef std::string VarType;
	
	static void TW_CALL setCallback(const void *value, void *clientData) {
		// logINFO("Setter called with value="<<*(const VarType*)value);
		static_cast<StringCallback*>(clientData)->setValue(*(const VarType*)value);
	};
	
	static void TW_CALL getCallback(void *value, void *clientData) {
		std::string *destPtr = static_cast<std::string *>(value);
		VarType str = static_cast<StringCallback*>(clientData)->getValue();
		TwCopyStdStringToLibrary(*destPtr, str);
		// logINFO("Getter called, returned: "<< *(VarType *)value);
	};

	virtual void setValue(VarType val) = 0;
	virtual VarType getValue() = 0;
};

class QuatCallback : public BasicVariableCallback {
public:
	typedef osg::Quat VarType;
	
	static void TW_CALL setCallback(const void *value, void *clientData) {
		const double* ptr = (const double*)value;
		//logINFO("Setter called with quat=("<< ptr[0] << ", " << ptr[1] << ", " << ptr[2] << ", " << ptr[3] << ")");
		static_cast<QuatCallback*>(clientData)->setValue(VarType(ptr[0],ptr[1],ptr[2],ptr[3]));		
	};
	
	static void TW_CALL getCallback(void *value, void *clientData) {
		VarType vec = static_cast<QuatCallback*>(clientData)->getValue();
		double* ptr = (double*)value;
		ptr[0] = vec._v[0];
		ptr[1] = vec._v[1];
		ptr[2] = vec._v[2];
		ptr[3] = vec._v[3];
		//logINFO("Getter called with color=("<< ptr[0] << ", " << ptr[1] << ", " << ptr[2] << ", " << ptr[3] << ")");
	};

	virtual void setValue(VarType val) = 0;
	virtual VarType getValue() = 0;
};

class DirCallback : public BasicVariableCallback {
public:
	typedef osg::Vec3d VarType;
	
	static void TW_CALL setCallback(const void *value, void *clientData) {
		const double* ptr = (const double*)value;
		//logINFO("Setter called with quat=("<< ptr[0] << ", " << ptr[1] << ", " << ptr[2] << ")");
		static_cast<DirCallback*>(clientData)->setValue(VarType(ptr[0],ptr[1],ptr[2]));		
	};
	
	static void TW_CALL getCallback(void *value, void *clientData) {
		VarType vec = static_cast<DirCallback*>(clientData)->getValue();
		double* ptr = (double*)value;
		ptr[0] = vec._v[0];
		ptr[1] = vec._v[1];
		ptr[2] = vec._v[2];
		//logINFO("Getter called with color=("<< ptr[0] << ", " << ptr[1] << ", " << ptr[2] << ")");
	};

	virtual void setValue(VarType val) = 0;
	virtual VarType getValue() = 0;
};

/** LUNA_CLASS_EXTENSION  */
void addVariable(TwBar* bar, const std::string& name, BoolCallback* cb, const std::string& def = "");

/** LUNA_CLASS_EXTENSION  */
void addVariable(TwBar* bar, const std::string& name, IntCallback* cb, const std::string& def = "");

/** LUNA_CLASS_EXTENSION  */
void addVariable(TwBar* bar, const std::string& name, EnumCallback* cb, const std::string& def = "");

/** LUNA_CLASS_EXTENSION  */
void addVariable(TwBar* bar, const std::string& name, DoubleCallback* cb, const std::string& def = "");

/** LUNA_CLASS_EXTENSION  */
void addVariable(TwBar* bar, const std::string& name, ColorCallback* cb, const std::string& def = "");

/** LUNA_CLASS_EXTENSION  */
void addVariable(TwBar* bar, const std::string& name, StringCallback* cb, const std::string& def = "");

/** LUNA_CLASS_EXTENSION  */
void addVariable(TwBar* bar, const std::string& name, QuatCallback* cb, const std::string& def = "");

/** LUNA_CLASS_EXTENSION  */
void addVariable(TwBar* bar, const std::string& name, DirCallback* cb, const std::string& def = "");

/** LUNA_CLASS_EXTENSION  */
void addButton(TwBar* bar, const std::string& name, ButtonCallback* cb, const std::string& def = "");

#endif
