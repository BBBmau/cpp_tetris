#include <GL/glut.h>
#include "../glm/gtc/matrix_transform.hpp"
#include <GLFW/glfw3.h>
#include "SOIL/SOIL.h"
#include <iostream>



const GLfloat kTileSize = 32;
const GLint kBoardNumRows = 20;
const GLint kBoardNumCols = 10;
const GLfloat kBoardWidth = kBoardNumCols * kTileSize;
const GLfloat kBoardHeight = kBoardNumRows * kTileSize;
const GLfloat kMargin = 10;
const GLfloat kHudWidth = 160;
const GLfloat kWidth = 3 * kMargin + kBoardWidth + kHudWidth;
const GLfloat kHeight = 2 * kMargin + kBoardHeight;
const GLfloat kHudX = kMargin;
const GLfloat kHudY = kMargin;
const GLfloat kBoardX = 2 * kMargin + kHudWidth;
const GLfloat kBoardY = kMargin;
const GLfloat kHudPieceBoxHeight = 2.5f * kTileSize;
const GLuint kFontSize = 18;

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
        glVertex3f(0.0, 0.0, 0.5);
    glEnd();
    glFlush();
}

GLFWwindow* setupGlContext() {
    std::cout << "TESTING";
    if (!glfwInit())
        return nullptr;
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    GLFWwindow *window = glfwCreateWindow(kWidth, kHeight, "TETRIS", nullptr, nullptr);
    
    if (window == nullptr)
        glfwTerminate();

	glfwMakeContextCurrent(window);

#if defined(WIN32)
	glewExperimental = GL_TRUE;
	glewInit();
#endif

    return window;
}

int main(int argc, char** argv)
{
    GLFWwindow* window = setupGlContext();
    // glutInit(&argc, argv);
    // glutInitDisplayMode(GLUT_SINGLE);
    // glutInitWindowSize(400, 300);
    // glutInitWindowPosition(100, 100);
    // glutCreateWindow("Hello world!");
    // glutDisplayFunc(displayMe);
    // glutMainLoop();
    return 0;
}