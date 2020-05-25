#include "Reservierung.h"
#include <sstream>
#include <iostream>

Reservierung::Reservierung() {
	days = 0;
	status = 0;
}

Reservierung::Reservierung(Kunde _client, Auto _car, int _days) {
	client = _client;
	car = _car;
	days = _days;
	status = 0;
}

Reservierung::~Reservierung() {

}


Kunde Reservierung::getClient() {
	return client;
}

Auto Reservierung::getCar() {
	return car;
}

int Reservierung::getDays() {
	return days;
}

int Reservierung::getStatus() const {
	return status;
}

void Reservierung::setClient(Kunde _client) {
	client = _client;
}

void Reservierung::setCar(Auto _car) {
	car = _car;
}

void Reservierung::setDays(int _days) {
	days = _days;
}

void Reservierung::setStatus(int _status) {
	status = _status;
}

bool operator == (const Reservierung& r1, const Reservierung& r2) {
	return ((r1.client == r2.client) && (r1.car == r2.car) && (r1.days == r2.days));
}
bool operator != (const Reservierung& r1, const Reservierung& r2) {
	return !(r1 == r2);
}


std::string Reservierung::toString() const {
	std::stringstream out;
	out << "Reservierung \n\tKunde: " << client.toString() << "\tAuto: " << car.toString() << "\tDays: " << days << "\n\n\tStatus: " << status << std::endl << std::endl;
	return out.str();
}