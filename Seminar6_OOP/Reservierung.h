#pragma once
#include "Kunde.h"
#include "Auto.h"

class Reservierung {
private:
	Kunde client;
	Auto car;
	int days;
	int status;
public:
	// Default constructor, does nothing
	Reservierung();

	// Constructor with parameter, initalizes all attributes
	Reservierung(Kunde, Auto, int);

	// Destructor, nothing to be destroyed manually
	~Reservierung();

	// Returns the client
	Kunde getClient();

	// Returns the car
	Auto getCar();

	// Returns the number of days
	int getDays();

	// Returns the status of the order
	int getStatus() const;

	// Sets the client to a new one
	void setClient(Kunde);

	// Sets the car to e new one
	void setCar(Auto);
	
	// Sets the numbers of day to a new one
	void setDays(int);

	// Sets the status of an order
	void setStatus(int);

	// Overloading Comparsion Operators
	friend bool operator == (const Reservierung& r1, const Reservierung& r2);
	friend bool operator != (const Reservierung& r1, const Reservierung& r2);

	// Prints details about the a Reservierung
	virtual std::string toString() const;
};

