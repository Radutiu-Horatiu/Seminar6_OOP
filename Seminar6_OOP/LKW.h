#pragma once
#include "Auto.h"
#include <string>

class LKW : public Auto {
private:
	double Gesamtgewicht;
	std::string Bezeichnung;
public:
	// Constructor
	LKW(double _ID, std::string _Marke, std::string _Modell, double _Gesamtgewicht, std::string _Bezeichnung);
	
	// Destructor
	~LKW();

	// Returns the weight of the LKW
	double getGesamtgewicht() const;

	// Changes the weight of the LKW with the specified one
	void setGesamtgewicht(double _Gesamtgewicht);

	// Returns the type of LKW
	std::string getBezeichnung() const;

	// Changes the type of LKW with the specified one
	void setGesamtgewicht(std::string _Bezeichung);

	// Prints details about the LKW
	std::string toString() const;

	// Loads merchandise 
	void load();

	// Unloads merchandise
	void unload();

	// Overloading Comparsion Operators
	friend bool operator == (const LKW& l1, const LKW& l2);
	friend bool operator != (const LKW& l1, const LKW& l2);
};