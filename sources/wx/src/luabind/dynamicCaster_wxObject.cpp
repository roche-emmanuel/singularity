#include <plug_common.h>

luabind::object dynamicCastwxObject(wxObject* parent, std::string destType, lua_State* L) {
    luabind::object lo;
    if(!parent)
        return lo;
        
    wxObjectConverterMap::iterator it = wxObject_converters.find(destType);
    if(it==wxObject_converters.end()) {
        std::cout << "Cannot find converter to cast to type " << destType << std::endl;
        return lo;
    }
    
    if(!(it->second)) {
        std::cout << "Invalid converter for type " << destType << std::endl;
        return lo;
    }
    
    lo = it->second(L,parent);
    return lo;
}

