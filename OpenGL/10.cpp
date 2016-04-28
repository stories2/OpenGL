#include <gl\glut.h>

void display();
void init();
void angle(float, float, float);

GLfloat angle_x, angle_y, angle_z;

int main()
{
	angle_x = 20;
	angle_y = 40;
	angle_z = 10;
	glutCreateWindow("3points");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

void init()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glShadeModel(GL_FLAT);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);

	glPushMatrix();
}

void angle(float x, float y, float z)
{
	glRotatef(x, 1.0, 0.0, 0.0);
	glRotatef(y, 0.0, 1.0, 0.0);
	glRotatef(z, 0.0, 0.0, 1.0);
}

void display()
{
//	init();
//	angle(angle_x, angle_y, angle_z);

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glShadeModel(GL_FLAT);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);

	glRotatef(angle_x, 1.0, 0.0, 0.0);
	glRotatef(angle_y, 0.0, 1.0, 0.0);
	glRotatef(angle_z, 0.0, 0.0, 1.0);

	glPushMatrix();

	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex3f(-0.5, 0.5, 0.0);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	
	glColor3f(0.0, 1.0, 1.0);
	glVertex3f(0.0, 0.0, -0.5);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-0.5, 0.5, -0.5);

	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-0.5, -0.5, -0.5);

	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(0.5, -0.5, -0.5);

	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(0.5, 0.5, -0.5);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-0.5, 0.5, -0.5);

	glEnd();

	glPopMatrix();
	glFlush();

	angle_x += 4;
	angle_y -= 2;
	angle_z += 1;
}