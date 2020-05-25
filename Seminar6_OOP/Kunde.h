#pragma once
#include <string>
#include "Auto.h"
#include <vector>


class Kunde {
private:
	double ID;
	std::string Name;
	std::vector <Auto> comenzi;  // Orders made by the client
public:
	// Default constructor 
	Kunde();

	// Constructor
	Kunde(double _ID, std::string _Name);

	// Destructor
	~Kunde();

	// Returns the ID of the client
	double getID() const;

	// Changes the ID of the client with the specified one
	void setID(double _ID);

	// Returns the name of the client
	std::string getName() const;

	// Changes the name of the client with the specified one
	void setName(std::string _Name);

	// Returns the list of orders
	std::vector <Auto> getComenzi() const;
	std::vector <Auto>& getComenzi();

	// Changes the list of orders
	void setComenzi(std::vector <Auto> _comenzi);

	// Prints details about the client
	std::string toString() const;

	// Overloading Comparsion Operators
	friend bool operator == (const Kunde& k1, const Kunde& k2);
	friend bool operator != (const Kunde& k1, const Kunde& k2);
};
