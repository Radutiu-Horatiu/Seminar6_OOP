#include "Sort_Method.h"
#include "LibrarySort.h"
#include "BubbleSort.h"

Sort_Method* Sort_Method::Create(Sort_Method_Type type) {
	if (type == Sort_Method_Type::Library_Sort)
		return new LibrarySort;
	else if (type == Sort_Method_Type::Bubble_Sort)
		return new BubbleSort;
	else return NULL;
}