#version 430

layout(location = 0) in vec4 inPosition;

uniform mat4 projection;
uniform mat4 view;

void main() {
    gl_Position = projection * view * inPosition;
    gl_PointSize = 5.0;
}
