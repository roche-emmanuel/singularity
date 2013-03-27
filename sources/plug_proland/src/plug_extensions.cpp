#include "plug_extensions.h"

void CALLBACK debugCallback(unsigned int source, unsigned int type,
    unsigned int id, unsigned int severity,
    int length, const char* message, void* userParam)
{
    char debSource[16];
    switch (source) {
    case GL_DEBUG_SOURCE_API_ARB:
        strcpy(debSource, "OPENGL");
        break;
    case GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB:
        strcpy(debSource, "WINDOWS");
        break;
    case GL_DEBUG_SOURCE_SHADER_COMPILER_ARB:
        strcpy(debSource, "COMPILER");
        break;
    case GL_DEBUG_SOURCE_THIRD_PARTY_ARB:
        strcpy(debSource, "LIBRARY");
        break;
    case GL_DEBUG_SOURCE_APPLICATION_ARB:
        strcpy(debSource, "APPLICATION");
        break;
    //case GL_DEBUG_SOURCE_OTHER_ARB:
    default:
        strcpy(debSource, "UNKNOWN");
    }

    char debType[20];
    switch (type) {
    case GL_DEBUG_TYPE_ERROR_ARB:
        strcpy(debType, "Error");
        break;
    case GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB:
        strcpy(debType, "Deprecated behavior");
        break;
    case GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB:
        strcpy(debType, "Undefined behavior");
        break;
    case GL_DEBUG_TYPE_PORTABILITY_ARB:
        strcpy(debType, "Portability");
        break;
    case GL_DEBUG_TYPE_PERFORMANCE_ARB:
        strcpy(debType, "Performance");
        break;
    //case GL_DEBUG_TYPE_OTHER_ARB:
    default:
        strcpy(debType, "Other");
    }

    if (severity == GL_DEBUG_SEVERITY_HIGH_ARB) {
		trERROR("GLDebug",debType << ": " << message);
    }
    if (severity == GL_DEBUG_SEVERITY_MEDIUM_ARB) {
		trWARN("GLDebug",debType << ": " << message);
    }
    if (severity == GL_DEBUG_SEVERITY_LOW_ARB) {
        trNOTICE("GLDebug",debType << ": " << message);
    }
}

namespace proland {

bool installDebugCallback() {
	if(glDebugMessageCallbackARB==NULL) {
		logWARN("Cannot install GL debug callback: extension not supported ?");
		return false;
	}
	else {
		glDebugMessageCallbackARB(debugCallback, NULL);
		return true;
	}
}

};
