#pragma once

#include <stdio.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>


class Window
{
	public:
	Window();
	Window(GLint windowWidth, GLint windowHeight);
	
	int Initialize();

	GLfloat getBufferWidth() { return bufferWidth; }
	GLfloat getBufferHeight() { return bufferHeight; }

	bool getShouldClose() { return glfwWindowShouldClose(mainWindow); }

	bool* getKeys() { return keys; }
	GLfloat getXChange() { GLfloat Change = xChange; xChange = 0.0f; return Change; }
	GLfloat getYChange() { GLfloat Change = yChange; yChange = 0.0f; return Change; }

	void swapBuffers() { glfwSwapBuffers(mainWindow); }


	
	~Window();

private:

	GLFWwindow *mainWindow;
	GLint width, height;
	GLint bufferWidth, bufferHeight;

	bool keys[1024];

	GLfloat lastX, lastY;
	GLfloat xChange, yChange;
	bool mouseFirstMoved;


	void createCallBacks();

	static void handleKeys(GLFWwindow* window, int key, int code, int action, int mode);
	static void handleMouse(GLFWwindow* window, double xPos, double yPos);

};

