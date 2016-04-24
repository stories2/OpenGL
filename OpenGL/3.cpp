#include <gl\glut.h>

void display();

int main()
{
	glutCreateWindow("colored triangle");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(67.0f / 255, 224.0f / 255, 143.0f / 255);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0, 0.5, 0.0);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);

	glEnd();
	glFlush();
}