#include "plug_extensions.h"


void TW_CALL CopyStdStringToClient(std::string& destinationClientString, const std::string& sourceLibraryString)
{
  // Copy the content of souceString handled by the AntTweakBar library to destinationClientString handled by your application
  destinationClientString = sourceLibraryString;
}

void TW_CALL ATBErrorHandler(const char *errorMessage)
{ 
	if(errorMessage) {
		trERROR("ATB","Error occured: " << errorMessage);
	}
}

void setupStringCopy() {
	TwCopyStdStringToClientFunc(CopyStdStringToClient); // CopyStdStringToClient implementation is given above
};

void setupErrorHandler() {
	TwHandleErrors(ATBErrorHandler);
}

//(TwGetVarCallback)
void addVariable(TwBar* bar, const std::string& name, BoolCallback* cb, const std::string& def) {
	int res = TwAddVarCB(bar, name.c_str(), TW_TYPE_BOOLCPP, cb->getReadOnly() ? NULL : BoolCallback::setCallback, BoolCallback::getCallback, (void*)cb, def.c_str());
	CHECK(res==1,"ATB error while adding variable " << name);
};

void addVariable(TwBar* bar, const std::string& name, IntCallback* cb, const std::string& def) {
	int res = TwAddVarCB(bar, name.c_str(), TW_TYPE_INT32, cb->getReadOnly() ? NULL : IntCallback::setCallback, IntCallback::getCallback, (void*)cb, def.c_str());
	CHECK(res==1,"ATB error while adding variable " << name);
};

void addVariable(TwBar* bar, const std::string& name, EnumCallback* cb, const std::string& def) {
	int res = TwAddVarCB(bar, name.c_str(), (TwType)cb->getEnumType(), cb->getReadOnly() ? NULL : EnumCallback::setCallback, EnumCallback::getCallback, (void*)cb, def.c_str());
	CHECK(res==1,"ATB error while adding variable " << name);
};

void addVariable(TwBar* bar, const std::string& name, DoubleCallback* cb, const std::string& def) {
	int res = TwAddVarCB(bar, name.c_str(), TW_TYPE_DOUBLE, cb->getReadOnly() ? NULL : DoubleCallback::setCallback, DoubleCallback::getCallback, (void*)cb, def.c_str());
	CHECK(res==1,"ATB error while adding variable " << name);
};

void addVariable(TwBar* bar, const std::string& name, ColorCallback* cb, const std::string& def) {
	int res = TwAddVarCB(bar, name.c_str(), TW_TYPE_COLOR4F, cb->getReadOnly() ? NULL : ColorCallback::setCallback, ColorCallback::getCallback, (void*)cb, def.c_str());
	CHECK(res==1,"ATB error while adding variable " << name);
};

void addVariable(TwBar* bar, const std::string& name, StringCallback* cb, const std::string& def) {
	int res = TwAddVarCB(bar, name.c_str(), TW_TYPE_STDSTRING, cb->getReadOnly() ? NULL : StringCallback::setCallback, StringCallback::getCallback, (void*)cb, def.c_str());
	CHECK(res==1,"ATB error while adding variable " << name);
};

void addVariable(TwBar* bar, const std::string& name, QuatCallback* cb, const std::string& def) {
	int res = TwAddVarCB(bar, name.c_str(), TW_TYPE_QUAT4D, cb->getReadOnly() ? NULL : QuatCallback::setCallback, QuatCallback::getCallback, (void*)cb, def.c_str());
	CHECK(res==1,"ATB error while adding variable " << name);
};

void addVariable(TwBar* bar, const std::string& name, DirCallback* cb, const std::string& def) {
	int res = TwAddVarCB(bar, name.c_str(), TW_TYPE_DIR3D, cb->getReadOnly() ? NULL : DirCallback::setCallback, DirCallback::getCallback, (void*)cb, def.c_str());
	CHECK(res==1,"ATB error while adding variable " << name);
};

void addButton(TwBar* bar, const std::string& name, ButtonCallback* cb, const std::string& def) {
	int res = TwAddButton(bar, name.c_str(), ButtonCallback::doExecute, (void*)cb, def.c_str());
	CHECK(res==1,"ATB error while adding button " << name);
};
