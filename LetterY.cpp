#include "LetterY.h"


void displayLetterY()
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.05f, 0.0f);
	glVertex2f(0.05f, -0.5f);
	glVertex2f(-0.05f, -0.5f);
	glEnd();

	
		
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);

	glVertex2f(-0.0354f, -0.0354f);
	glVertex2f(0.0354f, 0.0354f);
	glVertex2f(-0.3182f, 0.3889f);
	glVertex2f(-0.3889f, 0.3182f);
	glEnd();


	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);

	glVertex2f(-0.0354f, 0.0354f);
	glVertex2f(0.0354f, -0.0354f);
	glVertex2f(0.3889f, 0.3182f);
	glVertex2f(0.3182f, 0.3889f);
	glEnd();

}



