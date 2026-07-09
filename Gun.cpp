#include"Gun.h"

void drawCircle(float centerX, float centerY, float radius, int segments)
{
	// Code
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN); // Use GL_LINE_LOOP for a hollow circle
	glVertex2f(centerX, centerY); // Center point for triangle fan

	for (int i = 0; i <= segments; i++) {
		float theta = 2.0f * 3.1415926f * float(i) / float(segments); // Get current angle
		float x = radius * cosf(theta); // Calculate x
		float y = radius * sinf(theta); // Calculate y
		glVertex2f(x + centerX, y + centerY);
	}
	glEnd();
}

void displayGun(float w)
{
	// Code
	glBegin(GL_QUADS);
	glColor3f(w,w,w);
	glVertex3f(-0.3f, 0.1f, 0.0f);
	glVertex3f(-0.31f, 0.0f, 0.0f);
	glVertex3f(0.61f, 0.0f, 0.0f);
	glVertex3f(0.6f, 0.1f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(w,w,w);
	glVertex3f(-0.31f, 0.0f, 0.0f);
	glVertex3f(-0.32f, -0.05f, 0.0f);
	glVertex3f(0.6f, -0.05f, 0.0f);
	glVertex3f(0.61f, 0.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(w,w,w);
	glVertex3f(-0.32f, -0.05f, 0.0f);
	glVertex3f(-0.33f, -0.1f, 0.0f);
	glVertex3f(0.28f, -0.1f, 0.0f);
	glVertex3f(0.3f, -0.05f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(w,w,w);
	glVertex3f(-0.34f, -0.15f, 0.0f);
	glVertex3f(-0.35f, -0.2f, 0.0f);
	glVertex3f(0.08f, -0.2f, 0.0f);
	glVertex3f(0.1f, -0.15f, 0.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(w,w,w); // TRIGGER  
	glVertex3f(-0.35f, -0.2f, 0.0f);
	glVertex3f(-0.4f, -0.4f, 0.0f);
	glVertex3f(-0.25f, -0.4f, 0.0f);
	glVertex3f(-0.2f, -0.2f, 0.0f);
	glEnd();

	drawCircle(-0.17f, -0.35f, 0.15, 100);

	glBegin(GL_QUADS);
	glColor3f(w,w,w); // TRIGGER upper part 
	glVertex3f(-0.35f, -0.2f, 0.0f);
	glVertex3f(-0.36f, -0.25f, 0.0f);
	glVertex3f(0.06f, -0.25f, 0.0f);
	glVertex3f(0.08f, -0.2f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(w,w,w);
	glVertex3f(-0.06f, -0.25f, 0.0f);
	glVertex3f(-0.18f, -0.6f, 0.0f);
	glVertex3f(-0.12f, -0.6f, 0.0f);
	glVertex3f(0.0f, -0.25f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(w,w,w);
	glVertex3f(-0.42f, -0.55f, 0.0f);
	glVertex3f(-0.43f, -0.6f, 0.0f);
	glVertex3f(-0.12f, -0.6f, 0.0f);
	glVertex3f(-0.12f, -0.55f, 0.0f);
	glEnd();
}