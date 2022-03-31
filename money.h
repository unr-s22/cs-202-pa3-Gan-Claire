#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <string>


class Money {
private:
	int all_cents;

public:
	//default constructor
	Money() {
		all_cents = 0;
	}

	//constructor with parameter
	Money(int d, int c) {
		all_cents = d * 100 + c;
	}

	void setMoney(int d, int c)
	{
		all_cents = d * 100 + c;
	}

	int getMoney(){
		return all_cents;
	}

	//overloads relational operators
	bool operator <(const Money &rhs) const{
		return all_cents < rhs.all_cents;
	}

	bool operator >(const Money &rhs) const{
		return all_cents > rhs.all_cents;
	}

	bool operator <=(const Money &rhs) const{
		return all_cents <= rhs.all_cents;
	}

	bool operator >=(const Money &rhs) const{
		return all_cents >= rhs.all_cents;
	}

	bool operator !=(const Money &rhs) const{
		return all_cents != rhs.all_cents;
	}

	bool operator ==(const Money &rhs) const{
		return all_cents == rhs.all_cents;
	}

	//overload of the stream operator
	friend std::ostream &operator << (std::ostream &os, const Money &money) {
		os << "$" << money.all_cents * 0.01;
		return os;
	}

	//overloads of the math operators
	Money operator+(const Money &c1) {
		Money A;

		A.all_cents = all_cents + c1.all_cents;
		return A;
	}

	Money operator-(const Money& c1) {
		Money A;

		A.all_cents = all_cents - c1.all_cents;
		return A;
	}

};
#endif
