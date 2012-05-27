#ifndef _TYPE_CONVERTERS_H_
#define _TYPE_CONVERTERS_H_

namespace luabind
{
    template <>
    struct default_converter<wxString>
      : native_converter_base<wxString>
    {
        static int compute_score(lua_State* L, int index)
        {
            return lua_type(L, index) == LUA_TSTRING ? 0 : -1;
        }

        wxString from(lua_State* L, int index)
        {
            return wxString(lua_tostring(L, index));
        }

        void to(lua_State* L, wxString const& str)
        {
            lua_pushstring(L, str.ToStdString().c_str());
        }
    };

    template <>
    struct default_converter<wxString const&>
      : default_converter<wxString>
    {};
}

#endif

