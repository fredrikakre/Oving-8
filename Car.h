#pragma once
#include <string>
using namespace std;

class Car {
	int freeSeats;
public:
	Car(int fSeats);
	bool hasFreeSeats() const;
	void reserveFreeSeats();
};

class Person {
	string name, email;
	Car* car;
public:
	Person(string n, string e, Car* c);
	string getEmail();
	void setEmail(string e);
	string getName() const;
	bool hasAvailableSeats() const;
	friend ostream& operator<< (ostream& os, const Person& p);		//F�r ikke gjort hele til const n�r det er friend.Vil beskytte Person p.
};
