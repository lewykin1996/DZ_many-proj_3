#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
protected:
	int a, b, c;
	int A, B, C;

public:
	Triangle(int a, int b, int c, int A, int B, int C);

	int get_a() const;
	int get_b() const;
	int get_c() const;

	int get_A() const;
	int get_B() const;
	int get_C() const;
};

#endif