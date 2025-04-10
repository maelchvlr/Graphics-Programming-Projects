#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>

#include <GL/glew.h>

class Shader
{
public:
	Shader();

	void CreateFromString(const char* vertexCode, const char* fragmentCode);
	void CreateFromFile(const char* vertexLocation, const char* fragmentLocation);

	std::string ReadFile(const char* fileLocation);

	GLuint GetProjectionLocation() { return uniformProjection; }
	GLuint GetModelLocation() { return uniformModel; }
	GLuint GetViewLocation() { return uniformView; }
	GLuint GetAmbientIntensityLocation() { return uniformAmbientIntensity; }
	GLuint GetAmbientColourLocation() { return uniformAmbientColour; }
	GLuint GetDiffuseIntensityLocation() { return uniformDiffuseIntensity; }
	GLuint GetDirectionLocation() { return uniformDirection; }
	GLuint GetSpecularIntensityLocation() { return uniformSpecularIntensity; }
	GLuint GetShininessLocation() { return uniformShininess; }
	GLuint GetEyePositionLocation() { return uniformEyePosition; }

	void UseShader();
	void ClearShader();

	~Shader();

private:
	GLuint shaderID, uniformProjection, uniformModel, uniformView, uniformEyePosition,
		uniformAmbientIntensity, uniformAmbientColour, uniformDiffuseIntensity, uniformDirection,
		uniformSpecularIntensity, uniformShininess;

	void CompileShader(const char* vertexCode, const char* fragmentCode);
	void AddShader(GLuint program, const char* shaderCode, GLenum shaderType);

};

