#include <GL/glut.h>
void display() {
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the screen with the background color
    glFlush();                      // Force execution of OpenGL commands
}
void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);   // Set background to white (RGBA)
    glMatrixMode(GL_PROJECTION);        // Switch to projection matrix
    gluOrtho2D(-320, 320, -240, 240);   // Define a 2D Cartesian coordinate system
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                       // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Single buffer, RGB color
    glutInitWindowSize(640, 480);                // Window size
    glutInitWindowPosition(100, 100);            // Window position on screen
    glutCreateWindow("IS 246 - Basic OpenGL Window"); // Title
    init();                                      // Call our init function
    glutDisplayFunc(display);                    // Register display callback
    glutMainLoop();                              // Enter event loop
    return 0;
}