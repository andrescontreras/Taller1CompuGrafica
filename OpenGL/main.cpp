//  introOpenGL.cpp
//  Creado por Andrea Rueda, 01/2018
//
// #include <GL/glut.h>

#include <GL/freeglut.h>
#include <GL/gl.h>
#include "Punto.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void myInit(void) {

	glClearColor(1.0, 1.0, 1.0, 1.0);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	gluOrtho2D(0, 25, 0, 25);
	//glOrtho(0, 640, 0, 480, 1.0, -1.0);

}

/* funciones para pintar puntos*/
void dibujarPunto(Punto p) {
	glColor3fv(p.color);
	glPointSize(p.tamano);
	glBegin(GL_POINTS);
	glVertex2fv(p.posicion);
	glEnd();
}

void dibujarPuntoMismoColor(Punto p[], float tam, float r, float g, float b) {

	for (int i = 0; i < tam; i++)
	{
		p[i].color[0] = (1.0f / 255) *r;
		p[i].color[1] = (1.0f / 255) *g;
		p[i].color[2] = (1.0f / 255) *b;
		dibujarPunto(p[i]);
	}
}

void myDisplay(void) {

	glClear(GL_COLOR_BUFFER_BIT);
	float b[] = {1.0, 1.0, 0.0};
	glColor3fv(b);

	// Contorno Estrella
	Punto contornoEstrella[] = { Punto(0, 4.8, 4),
	Punto(0.3, 4.9, 4),
	Punto(0.5, 5.1, 4),
	Punto(0.8, 5, 4),
	Punto(1, 5.1, 4),
	Punto(1.3, 5.2, 4),
	Punto(1.5, 5.4, 4),
	Punto(1.7, 5.5, 4),
	Punto(2, 5.6, 4),
	Punto(2.3, 5.7, 4),
	Punto(2.5, 5.8, 4),
	Punto(2.7, 5.8, 4),
	Punto(3, 5.9, 4),
	Punto(3.3, 6.0, 4),
	Punto(3.5, 6.1, 4),
	Punto(3.8, 6.2, 4),
	Punto(3.8, 5.7, 4),
	Punto(3.8, 5.5, 4),
	Punto(3.8, 5.3, 4),
	Punto(3.8, 5.0, 4),
	Punto(3.8, 4.8, 4),
	Punto(3.8, 4.5, 4),
	Punto(3.8, 4.3, 4),
	Punto(3.8, 4.0, 4),
	Punto(3.8, 3.7, 4),
	Punto(3.8, 3.5, 4),
	Punto(3.8, 3.3, 4),
	Punto(3.8, 3.0, 4),
	Punto(3.8, 2.7, 4),
	Punto(3.8, 2.5, 4),
	Punto(3.8, 2.3, 4),
	Punto(3.8, 2.0, 4),
	Punto(3.8, 1.7, 4),
	Punto(3.8, 1.5, 4),
	Punto(3.9, 1.3, 4),
	Punto(3.9, 1, 4),
	Punto(4, 0.7, 4),
	Punto(4.1, 0.7, 4),
	Punto(4.2, 0.7, 4),
	Punto(4.3, 0.8, 4),
	Punto(4.4, 0.8, 4),
	Punto(4.5, 0.8, 4),
	Punto(4.7, 1.3, 4),
	Punto(5, 1.5, 4),
	Punto(5.1, 1.7, 4),
	Punto(5.2, 2, 4),
		Punto(5.3, 2.5, 4),
		Punto(5.5, 2.7, 4),
		Punto(5.2, 2, 4),
		Punto(5.2, 2, 4),
		Punto(5.2, 2, 4),
		Punto(5.2, 2, 4),
		Punto(5.2, 2, 4),
	Punto(6, 4, 4),
	Punto(6.8, 6, 4),
	Punto(7.5, 7, 4),
	Punto(8.7, 6.5, 4),
	Punto(10, 6, 4),
	Punto(11, 5.6, 4),
	Punto(12.5, 5.3, 4),
	Punto(12.9, 5.5, 4),
	Punto(11.5, 6.9, 4),
	Punto(10, 8.1, 4),
	Punto(8.5, 9.5, 4),
	Punto(8.4, 9.4, 4),
	Punto(8.8, 11.5, 4),
	Punto(9.1, 12.5, 4),
	Punto(8.9, 13.3, 4),
	Punto(8, 12.8, 4),
	Punto(7, 12, 4),
	Punto(5.5, 11.1, 4),
	Punto(4.6, 11.5, 4),
	Punto(3.4, 12, 4),
	Punto(1.3, 12.7, 4),
	Punto(1.5, 12, 4),
	Punto(2, 11, 4),
	Punto(2.6, 10.1, 4),
	Punto(3, 9.3, 4),
	Punto(2, 8.5, 4),
	Punto(0.5, 7.3, 4),
	Punto(0, 6.9, 8),
	};
	// Fin Contorno Estrella

	// Division mar
	Punto divisionMar[] = { Punto(0, 22.8, 4),
	Punto(1.3, 22.2, 4),
	Punto(3, 22.6, 4),
	Punto(4, 22.8, 4),
	Punto(4.6, 22.5, 4),
	Punto(5.9, 21.7, 4),
	Punto(6.4, 21, 4),
	Punto(7, 20.1, 4),
	Punto(7.5, 19.3, 4),
	Punto(8.1, 18, 4),
	Punto(8.5, 17, 4),
	Punto(10, 16.2, 4),
	Punto(11.8, 15.6, 4),
	Punto(12.9, 15.5, 4),
	Punto(14.7, 13.8, 4),
	Punto(15.7, 13.1, 4),
	Punto(16.7, 12.5, 4),
	Punto(17.8, 12, 4),
	Punto(19, 11.5, 4),
	Punto(21, 11, 4),
	};
	// Fin Division mar
    
	// Inicio Mar
	// Inicio Mar
	float j = 0.0;
    float k = 0.0;

	for(float i = 0.0; i <= 14.5; i += 0.3 )
        dibujarPunto(Punto(21.0,29-i,82.0,65.0,220.0,3));
    srand (time(NULL));
    for(float i = 29; i >= 24.90 ; i-= 0.1 + (float)(rand() % 5 + (1) )/100)
    {
        for(j = 0;j <= 21; j+= 0.3 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j+0,i,169, 230, 238,rand() % 3 + 1.2));
    }
    srand (time(NULL));
    for(float i = 24.80; i >= 22.4; i-= 0.2 + (float)(rand() % 5 + (1) )/100)
    {
        for(j = 0;j <= 10; j+= 0.5 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j+0,i,169, 230, 238,rand() % 2 + 1.2));
    }

    for(float i = 22.50; i >=10 ; i-= 0.4 + (float)(rand() % 5 + (1) )/100)
    {
        for(j = 5 + k;j <= 21; j+= 0.5 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j,i,169, 230, 238,rand() % 2 + 1.2));
        k += 0.5+ (float)(rand() % 5 + (1) )/100;
    }
    dibujarPunto(Punto(12,16,169, 230, 238,rand() % 2 + 1.2));
    dibujarPunto(Punto(10,17,169, 230, 238,rand() % 2 + 1.2));
    dibujarPunto(Punto(10,18,169, 230, 238,rand() % 2 + 1.2));
    dibujarPunto(Punto(9,18,169, 230, 238,rand() % 2 + 1.2));
    dibujarPunto(Punto(9,17.3,169, 230, 238,rand() % 2 + 1.2));
    srand (time(NULL));
    for(float i = 29; i >= 24.90 ; i-= 0.1 + (float)(rand() % 6 + (1) )/100)
    {
        for(j = 0;j <= 21; j+= 0.33 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j+0,i,82.0,65.0,220.0,rand() % 3 + 1.4));
    }
    srand (time(NULL));
    k = 0.0;
    for(float i = 24.80; i >=14.5 ; i-= 0.1 + (float)(rand() % 5 + (1) )/100)
    {
        for(j = 7.2 + k;j <= 21; j+= 0.3 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j,i,169, 230, 238,rand() % 3 + 1.2));
        k += 0.15 + (float)(rand() % 5 + (1) )/100;
    }
    srand (time(NULL));
    k = 0.0;
    for(float i = 24.80; i >=14.5 ; i-= 0.14 + (float)(rand() % 5 + (1) )/100)
    {
        for(j = 7.2 + k;j <= 21; j+= 0.33 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j,i,82.0,65.0,220.0,rand() % 3 + 1.4));
        k += 0.205 + (float)(rand() % 5 + (1) )/100;
    }
	//Inicio Arena
    //Color beige
    for(float i = 10.7; i >= 0 ; i-= 0.1 + (float)(rand() % 5 + (1) )/100)
    {
        for(j = 0;j <= 21; j+= 0.5 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j+0,i,226, 133, 26,rand() % 2 + 1.2));
    }
    //Color Amarillo
    for(float i = 10.7; i >= 0 ; i-= 0.1 + (float)(rand() % 5 + (1) )/100)
    {
        for(j = 0;j <= 21; j+= 0.7 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j+0,i,240, 236, 172,rand() % 2 + 1.2));
    }
    //Color cafe
    for(float i = 10.7; i >= 0 ; i-= 0.1 + (float)(rand() % 5 + (1) )/100)
    {
        for(j = 0;j <= 21; j+= 0.9 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j+0,i,144, 104, 52,rand() % 2 + 1.2));
    }
    //Color naranja
    for(float i = 10.7; i >= 0 ; i-= 0.1 + (float)(rand() % 5 + (1) )/100)
    {
        for(j = 0;j <= 21; j+= 0.6 + (float)(rand() % 21 + (-10) )/100 )
            dibujarPunto(Punto(j+0,i,240, 152, 37,rand() % 2 + 1.2));
    }

	dibujarPuntoMismoColor(contornoEstrella, 65, 255, 76, 51);
	dibujarPuntoMismoColor(divisionMar, 20, 247, 187, 94);

	
	glFlush();

}


void myResize(int w, int h) {

	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	gluOrtho2D(0, w, 0, h);

}


int main(int argc, char** argv) {

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(640, 480);

	glutInitWindowPosition(100, 100);

	glutCreateWindow("Graphics Window");

	glutDisplayFunc(myDisplay);

	glutReshapeFunc(myResize);

	myInit();

	glutMainLoop();

	return 0;

}