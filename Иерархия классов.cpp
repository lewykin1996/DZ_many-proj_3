#include <iostream>

#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"

#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	//ТРЕУГОЛЬНИКИ
	Triangle t(10, 20, 30, 50, 60, 70);
	RightTriangle rt(10, 20, 30, 50, 60);
	IsoscelesTriangle it(10, 20, 50, 60);
	EquilateralTriangle et(30);

	cout << t.get_name() << ":\n";
	cout << "Стороны: a=" << t.get_a()
		<< " b=" << t.get_b()
		<< " c=" << t.get_c() << "\n";
	cout << "Углы: A=" << t.get_A()
		<< " B=" << t.get_B()
		<< " C=" << t.get_C() << "\n\n";

	cout << rt.get_name() << ":\n";
	cout << "Стороны: a=" << rt.get_a()
		<< " b=" << rt.get_b()
		<< " c=" << rt.get_c() << "\n";
	cout << "Углы: A=" << rt.get_A()
		<< " B=" << rt.get_B()
		<< " C=" << rt.get_C() << "\n\n";

	cout << it.get_name() << ":\n";
	cout << "Стороны: a=" << it.get_a()
		<< " b=" << it.get_b()
		<< " c=" << it.get_c() << "\n";
	cout << "Углы: A=" << it.get_A()
		<< " B=" << it.get_B()
		<< " C=" << it.get_C() << "\n\n";

	cout << et.get_name() << ":\n";
	cout << "Стороны: a=" << et.get_a()
		<< " b=" << et.get_b()
		<< " c=" << et.get_c() << "\n";
	cout << "Углы: A=" << et.get_A()
		<< " B=" << et.get_B()
		<< " C=" << et.get_C() << "\n\n";

	//ЧЕТЫРЁХУГОЛЬНИКИ
	Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle r(10, 20);
	Square s(20);
	Parallelogram p(20, 30, 30, 40);
	Rhombus rh(30, 30, 40);

	cout << q.get_name() << ":\n";
	cout << "Стороны: a=" << q.get_a()
		<< " b=" << q.get_b()
		<< " c=" << q.get_c()
		<< " d=" << q.get_d() << "\n";
	cout << "Углы: A=" << q.get_A()
		<< " B=" << q.get_B()
		<< " C=" << q.get_C()
		<< " D=" << q.get_D() << "\n\n";

	cout << r.get_name() << ":\n";
	cout << "Стороны: a=" << r.get_a()
		<< " b=" << r.get_b()
		<< " c=" << r.get_c()
		<< " d=" << r.get_d() << "\n";
	cout << "Углы: A=" << r.get_A()
		<< " B=" << r.get_B()
		<< " C=" << r.get_C()
		<< " D=" << r.get_D() << "\n\n";

	cout << s.get_name() << ":\n";
	cout << "Стороны: a=" << s.get_a()
		<< " b=" << s.get_b()
		<< " c=" << s.get_c()
		<< " d=" << s.get_d() << "\n";
	cout << "Углы: A=" << s.get_A()
		<< " B=" << s.get_B()
		<< " C=" << s.get_C()
		<< " D=" << s.get_D() << "\n\n";

	cout << p.get_name() << ":\n";
	cout << "Стороны: a=" << p.get_a()
		<< " b=" << p.get_b()
		<< " c=" << p.get_c()
		<< " d=" << p.get_d() << "\n";
	cout << "Углы: A=" << p.get_A()
		<< " B=" << p.get_B()
		<< " C=" << p.get_C()
		<< " D=" << p.get_D() << "\n\n";

	cout << rh.get_name() << ":\n";
	cout << "Стороны: a=" << rh.get_a()
		<< " b=" << rh.get_b()
		<< " c=" << rh.get_c()
		<< " d=" << rh.get_d() << "\n";
	cout << "Углы: A=" << rh.get_A()
		<< " B=" << rh.get_B()
		<< " C=" << rh.get_C()
		<< " D=" << rh.get_D() << "\n";

	return 0;
}