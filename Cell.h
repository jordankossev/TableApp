#ifndef _CELL_H
#define _CELL_H

#include <string>

#include "CellType.h"

class Cell {
private:
	std::string content;
	Type type;

	void copyData(const std::string&, Type);
	void determineType();
public:
	Cell();
	Cell(const std::string&, Type);
	Cell(const Cell&);
	Cell& operator=(const Cell&);

	std::string getContent() const;
	Type getType() const;

	void setContent(const std::string&);

	void print() const;
};

#endif // !_CELL_H