#include <gl\glut.h>

void display();
float get_color(int);

float tri_data[] = {
	0.0,	0.0,
	-0.5,	0.0,
	-0.5,	0.25,
	0.0,	0.0,
	-0.25,	0.5,
	0.0,	0.5,
	0.25,	0.5,
	0.0,	0.0,
	0.5,	0.25,
	0.5,	0.0,
	0.0,	0.0,
	0.5,	-0.25,
	0.25,	-0.5,
	0.0,	-0.5,
	0.0,	0.0,
	-0.25,	-0.5,
	-0.5,	-0.25,
	0.0,	0.0,
	-0.5,	0.0
};

int main()
{
	glutCreateWindow("triangles");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLE_STRIP);
	int i;
	for (i = 0; i < 37; i += 2)
	{
		glColor3f(get_color(128-i*2),get_color(50+i*4),get_color(200-i*3));
		glVertex2f(tri_data[i], tri_data[i + 1]);
	}
	glEnd();
	glFlush();
}

float get_color(int target)
{
	return (float)target / 255;
}