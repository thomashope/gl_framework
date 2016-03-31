#version 410

in vec3 position;
//in vec3 vColour;
//in vec2 vTexCoord;

out vec3 fColour;
//out vec2 fTexCoord;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    gl_Position = projection * view * model * vec4(position, 1.0);
    //mat4 test = projection * view * model;
    //gl_Position = vec4(position.xy, 0.0, 1.0);
    //fColour = vColour;
    //fTexCoord = vTexCoord;
}