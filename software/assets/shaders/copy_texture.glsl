varying vec2 coords;

#ifdef _VERTEX_

void main() {
	gl_Position = vec4(gl_Vertex.xy,0.0,1.0);
    coords = (gl_Vertex.xy+vec2(1.0,1.0))/2.0;
}

#endif

#ifdef _FRAGMENT_

uniform sampler2D tex;

void main() {
    vec4 color = texture2DLod(tex,coords,0.0);  
	gl_FragColor = color;
}

#endif
