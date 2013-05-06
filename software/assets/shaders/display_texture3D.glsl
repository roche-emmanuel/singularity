// Using GLSL version 1.2
varying vec3 coords;

uniform float osg_FrameTime;

#ifdef _VERTEX_

void main() {
	gl_Position = ftransform();
    coords = vec3(gl_MultiTexCoord0.x,gl_MultiTexCoord0.y,fract(osg_FrameTime/3.0));
}

#endif

#ifdef _FRAGMENT_

uniform sampler3D tex;

void main() {
    vec4 color = texture3DLod(tex,coords,0.0);  
	gl_FragColor = color;
	//gl_FragColor = vec4(1.0,0.0,0.0,1.0);
}

#endif
