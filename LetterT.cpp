#include"LetterT.h"

void displayLetterT(void)
{
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    // vertical line
    glVertex2f(-0.05f,0.5f);
    glVertex2f(0.05f,0.5f);
    glVertex2f(0.05f,-0.5f);
    glVertex2f(-0.05f,-0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    // Top Horizontal line
    glVertex2f(-0.3f,0.5f);
    glVertex2f(0.3f,0.5f);
    glVertex2f(0.3f,0.4f);
    glVertex2f(-0.3f,0.4f);
    glEnd();
}