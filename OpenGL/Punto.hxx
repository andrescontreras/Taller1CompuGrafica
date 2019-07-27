#pragma once
#include "Punto.h"
Punto::Punto(float x, float y, float r, float g, float b, float t)
{
	tamano = t;
	
	color[0] = (1.0f / 255) *r;
	color[1] = (1.0f / 255) *g;
	color[2] = (1.0f / 255) *b;
	posicion[0] = x*20;
	posicion[1] = y * 20;
}
Punto::Punto(float x, float y, float t)
{
	tamano = t;
	posicion[0] = x * 20;
	posicion[1] = y * 20;
}
Punto::~Punto()
{

}

