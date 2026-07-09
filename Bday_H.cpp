#include<GL/freeglut.h>
#include<stdio.h>

// function draw letter H
// dependency on the color array
void drawLetterH()
{

	// left quad
	glScalef(0.2, 0.2, 1.0);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.2f, -0.5f, 0.0f);
	glVertex3f(-0.1f, -0.5f, 0.0f);
	glVertex3f(-0.1f, 0.5f, 0.0f);
	glVertex3f(-0.2f, 0.5f, 0.0f);
	glEnd();

	// right quad
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.2f, -0.5f, 0.0f);
	glVertex3f(0.3f, -0.5f, 0.0f);
	glVertex3f(0.3f, 0.5f, 0.0f);
	glVertex3f(0.2f, 0.5f, 0.0f);
	glEnd();

	// center quad
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.1f, -0.1f, 0.0f);
	glVertex3f(0.2f, -0.1f, 0.0f);
	glVertex3f(0.2f, 0.1f, 0.0f);
	glVertex3f(-0.1f, 0.1f, 0.0f);
	glEnd();
}