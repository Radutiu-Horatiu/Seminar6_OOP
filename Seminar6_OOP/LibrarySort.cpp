#include "LibrarySort.h"
#include <iostream>
#include <algorithm>

void LibrarySort::sort_authos(std::vector <Auto>& autos) {
	std::cout << "\n\t\tSorting with standard library function sort\n";
	std::sort(autos.begin(), autos.end(),
		[](const Auto& a, const Auto& b) {
			std::string copy1, copy2;
			copy1 = a.getMarke();
			copy2 = b.getMarke();
			for (auto& c : copy1) c = toupper(c);
			for (auto& c : copy2) c = toupper(c);
			return copy1 < copy2;
		});
}