#pragma once
#include <vector>
#include "Sort_Method.h"
#include "Auto.h"

class LibrarySort : public Sort_Method {
public:
	// Sorts the list of cars with the standard sort from std library
	void sort_authos(std::vector <Auto>& autos);
};

