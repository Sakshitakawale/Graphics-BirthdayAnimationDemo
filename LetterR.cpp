#include"LetterR.h"

void displayLetterR(void)
{	
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.2f, -0.5f);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.2f, 0.4f);
	glVertex2f(-0.2f, 0.4f);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.2f, 0.05f);
	glVertex2f(0.2f, 0.05f);
	glVertex2f(0.2f, -0.05f);
	glVertex2f(-0.2f, -0.05f);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(0.1f, 0.05f);
	glVertex2f(0.2f, 0.05f);
	glVertex2f(0.2f, 0.4f);
	glVertex2f(0.1f, 0.4f);
	glEnd();
	
	glBegin(GL_QUADS);
	glVertex2f(-0.10f, -0.05f);  
	glVertex2f(0.02f, -0.05f);  
	glVertex2f(0.20f, -0.50f); 
	glVertex2f(0.08f, -0.50f); 
	glEnd();

}


