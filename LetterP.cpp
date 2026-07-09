#include"LetterP.h"

#define M_PI 3.141529

void displayLetterP()
{
	// left quad
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.2f, -0.5f, 0.0f);
	glVertex3f(-0.1f, -0.5f, 0.0f);
	glVertex3f(-0.1f, 0.5f, 0.0f);
	glVertex3f(-0.2f, 0.5f, 0.0f);
	glEnd();

	// Show Hal-circle
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 180; i++)
	{
		float angle = (float)(i * M_PI / 180);
		// offset method, just to move sun above mountains
		float x = 0.3f * sinf(angle);
		float y = 0.3f * cosf(angle);
		glVertex3f(x-0.1f, y+0.21f, 0.0f);
	}
	glEnd();
	

	// inner half-circle
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 180; i++)
	{
		float angle = (float)(i * M_PI / 180);
		// offset method, just to move sun above mountains
		float x = 0.21f * sinf(angle);
		float y = 0.21f * cosf(angle);
		glVertex3f(x-0.1f, y+0.21f, 0.0f);
	}
	glEnd();
}