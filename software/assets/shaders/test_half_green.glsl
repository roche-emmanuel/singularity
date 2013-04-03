varying vec2 coords;

#ifdef _VERTEX_

void main() {
    // gl_Position = ftransform();
    // coords = gl_MultiTexCoord0.xy;
	gl_Position = vec4(gl_Vertex.xy,0.0,1.0);
    coords = (gl_Vertex.xy+vec2(1.0,1.0))/2.0;
}

#endif

#ifdef _FRAGMENT_

uniform sampler2D tex;

void main() {
    vec4 color = texture2DLod(tex,coords,0.0);  
    if(coords.x>0.5) {
		gl_FragColor = vec4(0.0,color.g,0.0,1.0);
	}
	else {
		gl_FragColor = color;
	}
}

#endif
