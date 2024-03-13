#include <gl/glut.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

/*
	Materia: Graficacion
	
	Docente: Lic. Rigoberto Perez Ovando
	
	Integrantes:
		Elian Guadalupe Diaz Balcazar
		Eduardo Enrique Gordillo Sanchez
	
	Fecha: 12 de marzo del 2024
	
	Grado y Grupo: 8N
*/

void patas(){
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(222,163);
	glVertex2i(228,163);
	glVertex2i(228,110);
	glVertex2i(222,110);
	glEnd();
	glColor3f(0.0f, 0.5f, 1.0f);
	int num_segments = 100;
    float center_x = 225; // Posición en x 
    float center_y = 95;  // Posición en y
    float radius_x = 50;  // Radio en x
    float radius_y = 10;  // Radio en y
    glBegin(GL_POLYGON);
    for(int i = 0; i < num_segments; i++){
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius_x * cosf(theta);
        float y = radius_y * sinf(theta);
        glVertex2f(x + center_x, y + center_y);
    }
    glEnd();
}

void cola(){
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2i(198, 250);
	glVertex2i(173, 200);
	glVertex2i(138, 250);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2i(198, 252);
	glVertex2i(138, 252);
	glVertex2i(108, 302);
	glVertex2i(168, 302);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2i(106, 302);
	glVertex2i(136, 252);
	glVertex2i(102, 185);
	glEnd();
}

void Cuerpo(){
	glColor3f(0.1f, 0.1f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(200, 250);
	glVertex2i(250, 250);
	glVertex2i(275, 200);
	glVertex2i(225, 165);
	glVertex2i(175, 200);
	glEnd();	
}
void cabeza(){
	glColor3f(0.1f, 0.1f, 0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2i(250, 252);
	glVertex2i(200, 252);
	glVertex2i(250, 340);
	glEnd();
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_QUADS);
	glVertex2i(252, 300);
	glVertex2i(292, 300);
	glVertex2i(292, 340);
	glVertex2i(252, 340);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2i(222, 342);
	glVertex2i(292, 342);
	glVertex2i(250, 390);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2i(294, 300);
	glVertex2i(294, 335);
	glVertex2i(320, 300);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2i(272, 299);
	glVertex2i(254, 265);
	glVertex2i(288, 265);
	glEnd();
}

void myInit() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	Cuerpo();
	patas();
	cola();	
	cabeza();
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Gallito");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
