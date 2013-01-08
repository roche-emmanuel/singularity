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



/** LUNA_CLASS_EXTENSION  */
inline void setIntParam(TwBar* bar, const std::string& vname, const std::string& pname, sgt::Int32 val) {
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_INT32, 1, (const void *)&val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setIntParam2(TwBar* bar, const std::string& vname, const std::string& pname, osg::Vec2d vec) {
	int val[2];
	val[0] = vec.x();
	val[1] = vec.y();
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_INT32, 2, (const void *)val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setIntParam3(TwBar* bar, const std::string& vname, const std::string& pname, osg::Vec3d vec) {
	int val[3];
	val[0] = vec.x();
	val[1] = vec.y();
	val[2] = vec.z();
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_INT32, 3, (const void *)val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setFloatParam(TwBar* bar, const std::string& vname, const std::string& pname, float val) {
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_FLOAT, 1, (const void *)&val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setFloatParam2(TwBar* bar, const std::string& vname, const std::string& pname, osg::Vec2f vec) {
	float val[2];
	val[0] = vec.x();
	val[1] = vec.y();
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_FLOAT, 2, (const void *)val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setFloatParam3(TwBar* bar, const std::string& vname, const std::string& pname, osg::Vec3f vec) {
	float val[3];
	val[0] = vec.x();
	val[1] = vec.y();
	val[2] = vec.z();
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_FLOAT, 3, (const void *)val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setFloatParam4(TwBar* bar, const std::string& vname, const std::string& pname, osg::Vec4f vec) {
	float val[4];
	val[0] = vec.x();
	val[1] = vec.y();
	val[2] = vec.z();
	val[3] = vec.w();
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_FLOAT, 4, (const void *)val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setDoubleParam(TwBar* bar, const std::string& vname, const std::string& pname, double val) {
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_DOUBLE, 1, (const void *)&val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setDoubleParam2(TwBar* bar, const std::string& vname, const std::string& pname, osg::Vec2d vec) {
	double val[2];
	val[0] = vec.x();
	val[1] = vec.y();
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_DOUBLE, 2, (const void *)val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setDoubleParam3(TwBar* bar, const std::string& vname, const std::string& pname, osg::Vec3d vec) {
	double val[3];
	val[0] = vec.x();
	val[1] = vec.y();
	val[2] = vec.z();
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_DOUBLE, 3, (const void *)val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setDoubleParam4(TwBar* bar, const std::string& vname, const std::string& pname, osg::Vec4d vec) {
	double val[4];
	val[0] = vec.x();
	val[1] = vec.y();
	val[2] = vec.z();
	val[3] = vec.w();
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_DOUBLE, 4, (const void *)val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setStringParam(TwBar* bar, const std::string& vname, const std::string& pname, const std::string& val) {
	TwSetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_CSTRING, 1, (const void *)val.c_str());
}



/** LUNA_CLASS_EXTENSION  */
inline int getIntParam(TwBar* bar, const std::string& vname, const std::string& pname) {
	int val = 0;
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_INT32, 1, (void*)&val);
	return val;
}

/** LUNA_CLASS_EXTENSION  */
inline osg::Vec2d getIntParam2(TwBar* bar, const std::string& vname, const std::string& pname) {
	int val[2];
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_INT32, 2, (void*)val);
	return osg::Vec2d(val[0],val[1]);
}

/** LUNA_CLASS_EXTENSION  */
inline osg::Vec3d getIntParam3(TwBar* bar, const std::string& vname, const std::string& pname) {
	int val[3];
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_INT32, 3, (void*)val);
	return osg::Vec3d(val[0],val[1],val[2]);
}



/** LUNA_CLASS_EXTENSION  */
inline float getFloatParam(TwBar* bar, const std::string& vname, const std::string& pname) {
	float val = 0;
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_FLOAT, 1, (void*)&val);
	return val;
}

/** LUNA_CLASS_EXTENSION  */
inline osg::Vec2f getFloatParam2(TwBar* bar, const std::string& vname, const std::string& pname) {
	float val[2];
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_FLOAT, 2, (void*)val);
	return osg::Vec2f(val[0],val[1]);
}

/** LUNA_CLASS_EXTENSION  */
inline osg::Vec3f getFloatParam3(TwBar* bar, const std::string& vname, const std::string& pname) {
	float val[3];
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_FLOAT, 3, (void*)val);
	return osg::Vec3f(val[0],val[1],val[2]);
}

/** LUNA_CLASS_EXTENSION  */
inline osg::Vec4f getFloatParam4(TwBar* bar, const std::string& vname, const std::string& pname) {
	float val[4];
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_FLOAT, 4, (void*)val);
	return osg::Vec4f(val[0],val[1],val[2],val[3]);
}



/** LUNA_CLASS_EXTENSION  */
inline double getDoubleParam(TwBar* bar, const std::string& vname, const std::string& pname) {
	double val = 0;
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_DOUBLE, 1, (void*)&val);
	return val;
}

/** LUNA_CLASS_EXTENSION  */
inline osg::Vec2d getDoubleParam2(TwBar* bar, const std::string& vname, const std::string& pname) {
	float val[2];
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_DOUBLE, 2, (void*)val);
	return osg::Vec2d(val[0],val[1]);
}

/** LUNA_CLASS_EXTENSION  */
inline osg::Vec3d getDoubleParam3(TwBar* bar, const std::string& vname, const std::string& pname) {
	double val[3];
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_DOUBLE, 3, (void*)val);
	return osg::Vec3d(val[0],val[1],val[2]);
}

/** LUNA_CLASS_EXTENSION  */
inline osg::Vec4f getDoubleParam4(TwBar* bar, const std::string& vname, const std::string& pname) {
	double val[4];
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_DOUBLE, 4, (void*)val);
	return osg::Vec4d(val[0],val[1],val[2],val[3]);
}



/** LUNA_CLASS_EXTENSION  */
inline std::string getStringParam(TwBar* bar, const std::string& vname, const std::string& pname, int maxsize=128) {
	char* ptr = new char[maxsize];
	TwGetParam(bar, vname=="" ? NULL : vname.c_str(), pname.c_str(), TW_PARAM_CSTRING, maxsize, (void*)ptr);
	std::string val = ptr;
	delete [] ptr;
	return val;
}

#endif
