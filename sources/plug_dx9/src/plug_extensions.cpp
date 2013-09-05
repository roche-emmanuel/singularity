#include "plug_extensions.h"

ID3DXBuffer* compileShaderFromFile(IDirect3DDevice9* device, const std::string& filename, const std::string& func, const std::string& profile)
{
	CHECK_RET(device,0,"Invalid device");

	ID3DXBuffer* code = NULL; 
	ID3DXBuffer* pErrorMsgs = NULL; 

	HRESULT result = D3DXCompileShaderFromFile(filename.c_str(),    //filepath
		NULL,            //macro's
		NULL,            //includes
		func.c_str(),       //main function 
		profile.c_str(),        //shader profile
		0,               //flags //D3DXSHADER_DEBUG
		&code,           //compiled operations
		&pErrorMsgs,      //errors
		NULL); //constants //
	
	if(pErrorMsgs) {
		trERROR("Shader","Shader compilation errors: " << (char*)pErrorMsgs->GetBufferPointer() << " in file: " << filename);
		SafeRelease(pErrorMsgs);
	}
	
	CHECK_RESULT_RET(result,0,"Invalid shader code in file "<<filename);
	
	return code;
}

IDirect3DVertexShader9* createVertexShader(IDirect3DDevice9* device, ID3DXBuffer* code)
{
	CHECK_RET(device,NULL,"Invalid device");
	CHECK_RET(code,NULL,"Invalid shader code");

	IDirect3DVertexShader9* vertexShader = NULL;

	HRESULT result = device->CreateVertexShader((DWORD*)code->GetBufferPointer(), &vertexShader);
	CHECK_RESULT_RET(result,NULL,"Could not create VertexShader.")
	return vertexShader;
}

IDirect3DPixelShader9* createPixelShader(IDirect3DDevice9* device, ID3DXBuffer* code)
{
	CHECK_RET(device,NULL,"Invalid device");
	CHECK_RET(code,NULL,"Invalid shader code");
	
	IDirect3DPixelShader9* pixelShader = NULL;

	HRESULT result = device->CreatePixelShader((DWORD*)code->GetBufferPointer(), &pixelShader);
	CHECK_RESULT_RET(result,NULL,"Could not create PixelShader.")
	return pixelShader;
}
