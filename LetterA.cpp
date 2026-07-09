#include "LetterA.h"

void displayLetterA()
{
	// Code
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.4f, -0.5f);
	glVertex2f(0.5f, -0.5f);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(-0.4f, -0.5f);
	glVertex2f(-0.5f, -0.5f);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.25f, 0.05f);
	glVertex2f(-0.25f, -0.05f);
	glVertex2f(0.25f, -0.05f);
	glVertex2f(0.25f, 0.05f);
	glEnd();
}