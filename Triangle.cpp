#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
	: Figure("Треугольник", 3),
	a(a), b(b), c(c),
	A(A), B(B), C(C) {}

int Triangle::get_a() const { return a; }
int Triangle::get_b() const { return b; }
int Triangle::get_c() const { return c; }

int Triangle::get_A() const { return A; }
int Triangle::get_B() const { return B; }
int Triangle::get_C() const { return C; }