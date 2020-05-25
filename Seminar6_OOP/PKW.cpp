#include "PKW.h"
#include <iostream>
#include <sstream>

using namespace std;

PKW::PKW(double _ID, std::string _Marke, std::string _Modell, std::string _Sonderausstattungen) : Auto{ _ID, _Marke, _Modell } {
	Sonderausstattungen = _Sonderausstattungen;

	//cout << "PKW wurde gebaut" << endl;
}

PKW::~PKW() {
	//cout << "PKW wurde zerstort" << endl;
}

std::string PKW::getSonderausstattungen() const {
	return this->Sonderausstattungen;
}

void PKW::setSonderausstattungen(std::string _Sonderausstattungen) {
	this->Sonderausstattungen = _Sonderausstattungen;
}

std::string PKW::toString() const {
	stringstream out;
	out << "PKW \n\tID: " << this->ID << endl << "\tMarke: " << this->Marke << endl << "\tModell: " << this->Modell << endl << "\tSonderausstattungen: " << this->Sonderausstattungen << endl << endl;
	return out.str();
}

bool operator == (const PKW& p1, const PKW& p2) {
	return ((p1.getID() == p2.getID()) && (p1.getMarke() == p2.getMarke()) && (p1.getModell() == p2.getModell()) && (p1.getSonderausstattungen() == p2.getSonderausstattungen()));
}
bool operator != (const PKW& p1, const PKW& p2) {
	return !(p1 == p2);
}