#include <gl\glut.h>

void display();

int main()
{
	glutCreateWindow("antialias");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POLYGON_SMOOTH);

	glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
	glHint(GL_POLYGON_SMOOTH_HINT, GL_NICEST);

	//draw point
	glPointSize(10.0);
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POINTS);
	glVertex3f(0.0, 0.0, 0.0);
	glEnd();

	//draw line
	glLineWidth(10.0);
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_LINES);
	glVertex3f(-0.8, 0.0,0.0);
	glVertex3f(0.8, 0.25, 0.0);
	glEnd();

	//draw triangle
	glColor4f(1.0, 0.0, 0.0, 0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-0.25, 0.75, 0.0);
	glVertex3f(-0.25, -0.75, 0.0);
	glVertex3f(0.75, -0.25, 0.0);
	glEnd();

	glFlush();
}