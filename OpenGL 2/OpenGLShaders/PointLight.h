#pragma once
#include "Light.h"

class PointLight :
    public Light
{
 public:
	PointLight();
	PointLight(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity, GLfloat dIntensity,
				GLfloat xPos, GLfloat yPos, GLfloat zPos,
				GLfloat constant, GLfloat linear, GLfloat exponent);

	void UseLight(GLuint ambientIntensityLocation, GLuint ambientColourLocation,
				GLuint diffuseIntensityLocation, GLuint positionLocation,
				GLuint constantLocation, GLuint linearLocation, GLuint exponentLocation);

	~PointLight();

protected:
		glm::vec3 position;

		GLfloat constant, linear, exponent;

};

