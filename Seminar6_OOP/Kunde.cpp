#include "Kunde.h"
#include <sstream>
#include <iostream>
#include <vector>


using namespace std;


Kunde::Kunde() {
	ID = NULL;
	Name = "";
}


Kunde::Kunde(double _ID, std::string _Name) {
	ID = _ID;
	Name = _Name;

	//cout << "Kunde wurde gebaut" << endl;
}


Kunde::~Kunde() {
	//cout << "Kunde wurde zerstort" << endl;
}


double Kunde::getID() const {
	return this->ID;
}


void Kunde::setID(double _ID) {
	this->ID = _ID;
}


std::string Kunde::getName() const {
	return this->Name;
}


void Kunde::setName(std::string _Name) {
	this->Name = _Name;
}



vector <Auto> Kunde::getComenzi() const {
	return comenzi;
}

vector <Auto>& Kunde::getComenzi() {
	return comenzi;
}



void Kunde::setComenzi(vector <Auto> _comenzi) {
	comenzi = _comenzi;
}


std::string Kunde::toString() const {
	stringstream out;
	out << "Kunde \n\tID: " << this->ID << endl << "\tName: " << this->Name << endl << endl;
	return out.str();
}


bool operator == (const Kunde& k1, const Kunde& k2) {
	return ((k1.getID() == k2.getID()) && (k1.getName() == k2.getName()));
}
bool operator != (const Kunde& k1, const Kunde& k2) {
	return !(k1 == k2);
}
