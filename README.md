# cpp_tetris

Before compiling be sure to install the following packages through a Linux Machine.

```
sudo apt-get install libglu1-mesa-dev freeglut3-dev mesa-common-dev

sudo apt-get install libsoil-dev
```

The following code is used to compile the program with OpenGL, SOIL, and GLFW libraries from root directory.

`g++ src/main.cpp -o firstOpenGlApp -lglut -lGLU -lGL -lSOIL -lglfw`
