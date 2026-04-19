#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure {
protected:
	std::string name;
	int sides_count;

public:
	Figure(std::string n, int sides);

	std::string get_name() const;
	int get_sides_count() const;
};

#endif