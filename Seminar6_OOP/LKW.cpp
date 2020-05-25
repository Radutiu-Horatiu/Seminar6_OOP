#include "LKW.h"
#include <iostream>
#include <sstream>

using namespace std;

LKW::LKW(double _ID, std::string _Marke, std::string _Modell, double _Gesamtgewicht, std::string _Bezeichnung) : Auto{ _ID, _Marke, _Modell } {
	Gesamtgewicht = _Gesamtgewicht;
	Bezeichnung = _Bezeichnung;

	//cout << "LKW wurde gebaut" << endl;
}

LKW::~LKW() {
	//cout << "LKW wurde zerstort" << endl;
}

double LKW::getGesamtgewicht() const {
	return this->Gesamtgewicht;
}

void LKW::setGesamtgewicht(double _Gesamtgewicht) {
	this->Gesamtgewicht = _Gesamtgewicht;
}

std::string LKW::getBezeichnung() const {
	return this->Bezeichnung;
}

void LKW::setGesamtgewicht(std::string _Bezeichung) {
	this->Bezeichnung = _Bezeichung;
}

std::string LKW::toString() const {
	stringstream out;
	out << "LKW \n\tID: " << this->ID << endl << "\tMarke: " << this->Marke << endl << "\tModell: " << this->Modell << endl << "\tGesamtgewicht: " << this->Gesamtgewicht << endl << "\tBezeichnung: " << this->Bezeichnung << endl << endl;
	return out.str();
}

void LKW::load() {
	Gesamtgewicht++;
}

void LKW::unload() {
	Gesamtgewicht--;
}

bool operator == (const LKW& l1, const LKW& l2) {
	return ((l1.getID() == l2.getID()) && (l1.getMarke() == l2.getMarke()) && (l1.getModell() == l2.getModell()) && (l1.getGesamtgewicht() == l2.getGesamtgewicht()) && (l1.getBezeichnung() == l2.getBezeichnung()));
}
bool operator != (const LKW& l1, const LKW& l2) {
	return !(l1 == l2);
}