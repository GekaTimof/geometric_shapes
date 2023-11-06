#ifndef _GEOMETRIC
#define _GEOMETRIC

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>


template <>
struct Point {
	
};

class Figure {
	const int pi = M_PI; // value of pi number

	// sides for square and triangle
	int a;	// side a
	int b;	// side b
	int c;	// side c

	// sides for circle and ellipse
	int r;	// 1 radius
	int r2;	// 2 radius	

// functions that cuser can use
public:
	// constructor with the parameter
	Figure()


};



class Square {




// functions that cuser can use
public:

};




//
//class Ellipse : public Figure {
//
//
//// functions that cuser can use
//public:
//
//
//};
//
//class Circle : public Ellipse {
//
//
//	// functions that cuser can use
//public:
//
//
//};

#endif