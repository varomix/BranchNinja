#version 110
// Unknown execution mode 8
uniform sampler2D tex;
varying vec2 texCoord;
varying vec4 color;


void main()
{
	vec4 texcolor_9;
	texcolor_9 = (texture2D(tex, texCoord) * color);
	texcolor_9 = vec4((vec3(texcolor_9[0], texcolor_9[1], texcolor_9[2]) * color[3])[0], (vec3(texcolor_9[0], texcolor_9[1], texcolor_9[2]) * color[3])[1], (vec3(texcolor_9[0], texcolor_9[1], texcolor_9[2]) * color[3])[2], texcolor_9[3]);
	gl_FragColor = texcolor_9;
	return;
}

