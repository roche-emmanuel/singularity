#ifndef _WRAPPERS_WRAPPER_WXGRIDCORNERHEADERRENDERER_H_
#define _WRAPPERS_WRAPPER_WXGRIDCORNERHEADERRENDERER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCornerHeaderRenderer : public wxGridCornerHeaderRenderer {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxGridCornerHeaderRenderer(lua_State* L, lua_Table* dum) : wxGridCornerHeaderRenderer(), _obj(L,-1) {};

	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	void DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const {
		THROW_IF(!_obj.pushFunction("DrawBorder"),"No implementation for abstract function wxGridCornerHeaderRenderer::DrawBorder");
		_obj.pushArg(&grid);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};




};




#endif

