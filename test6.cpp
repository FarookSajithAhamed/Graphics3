/*
 * GL01Hello.cpp: Test OpenGL/GLUT C/C++ Setup
 * Tested under Eclipse CDT with MinGW/Cygwin and CodeBlocks with MinGW
 * To compile with -lfreeglut -lglu32 -lopengl32
 */
#include <windows.h>  // for MS Windows
#include <glut.h>  // GLUT, include glu.h and gl.h
 
/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */
void display() {
   glClearColor(0.0f, 0.0f, 1.0f, 0.0f); // Set background color to ..... and opaque
   glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
   glPointSize(10.0f); //size of the points
   // Draw a Red 1x1 Square centered at origin
	  glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.0f, 0.0f); //........
      glVertex2f(-0.6f, -0.2f);    // x, y
      glVertex2f( -0.6f, 0.0f);
      glVertex2f( -0.4f,  0.0f);
	  glVertex2f( -0.4f,  -0.2f);
   glEnd();

   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(.0f, 1.0f, 0.0f); //........
      glVertex2f(-0.5f, -0.1f);    // x, y
      glVertex2f( -0.3f, -0.1f);
      glVertex2f( -0.3f,  -0.3f);
	  glVertex2f( -0.5f,  -0.3f);
   glEnd();
 
   glFlush();  // Render now
}
 
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
   glutInit(&argc, argv);                 // Initialize GLUT
   glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
   glutInitWindowSize(320, 320);   // Set the window's initial width & height
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutDisplayFunc(display); // Register display callback handler for window re-paint
   glutMainLoop();           // Enter the event-processing loop
   return 0;
}