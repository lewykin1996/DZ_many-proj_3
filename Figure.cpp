#include "Figure.h"

Figure::Figure(std::string n, int sides)
	: name(n), sides_count(sides) {}

std::string Figure::get_name() const {
	return name;
}

int Figure::get_sides_count() const {
	return sides_count;
}