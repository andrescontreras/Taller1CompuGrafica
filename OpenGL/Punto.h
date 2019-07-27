#pragma once
#ifndef __PUNTO___H__
#define __PUNTO___H__
#include <iostream>
class Punto
{
public:
	/// constructor
	Punto(float x, float y, float r, float g, float b, float t);
	Punto(float x, float y, float t);
	~Punto();
	
	float color[3];
	float posicion[2];
	float tamano;
};
#include"Punto.hxx"
#endif // PUNTO_H_INCLUDED
