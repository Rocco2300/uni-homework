#include <GL/freeglut.h>

void render()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_BLEND);

    // Upper right triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.58, 0.83);
    glVertex3f(-1.0,-0.06,0.0);
    glColor3f(0.5, 0.43, 0.89);
    glVertex3f(0.0,1.0,0.0);
    glColor3f(0.1, 0.55, 0.84);
    glVertex3f(-1.0,1.0,0.0);
    glEnd();

    // Orange trapezoid
    glBegin(GL_QUADS);
    glColor3f(0.78, 0.34, 0.70);
    glVertex3f(-1.0,-1.0,0.0);
    glColor3f(0.97, 0.53, 0.03);
    glVertex3f(1.0,1.0,0.0);
    glColor3f(0.97, 0.53, 0.03);
    glVertex3f(0.0,1.0,0.0);
    glColor3f(0.87, 0.43, 0.40);
    glVertex3f(-1.0,-0.06,0.0);
    glEnd();

    // Bottom Triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glColor3f(0.0, 0.58, 0.83);
    glVertex3f(-1.0,-1.0,0.0);
    glColor3f(0.5, 0.43, 0.89);
    glVertex3f(1.0,-1.0,0.0);
    glColor3f(0.5, 0.43, 0.89);
    glVertex3f(0.0,0.0,0.0);
    glEnd();

    glFlush();
}

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 200);
    glutInitWindowSize(400, 400);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Kotlin Logo");

    glutDisplayFunc(render);

    glutMainLoop();

    return 0;
}