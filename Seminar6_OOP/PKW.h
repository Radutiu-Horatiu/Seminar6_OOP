#pragma once
#include "Auto.h"
#include <string>

class PKW : public Auto {
private:
	std::string Sonderausstattungen;
public:
	// Constructor
	PKW(double _ID, std::string _Marke, std::string _Modell, std::string _Sonderausstattungen);

	// Destructor
	~PKW();

	// Returns the Sonderausstattungenof the PKW
	std::string getSonderausstattungen() const;

	// Changes the Sonderausstattungen of the PKW with the specified one
	void setSonderausstattungen(std::string _Sonderausstattungen);

	// Prints details about the LKW
	std::string toString() const;

	// Overloading Comparsion Operators
	friend bool operator == (const Auto& c1, const Auto& c2);
	friend bool operator != (const Auto& c1, const Auto& c2);
};