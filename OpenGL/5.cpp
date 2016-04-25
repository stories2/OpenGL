#include <gl\glut.h>

void display();

int main()
{
	glutCreateWindow("point");
	glutDisplayFunc(display);
	glutMainLoop();
	
	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glPointSize(10.0);
	glBegin(GL_POINTS);
	glVertex2f(0.0, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);

	glEnd();
	glFlush();
}