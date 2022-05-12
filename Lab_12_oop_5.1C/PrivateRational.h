#pragma once
#include "Rational.h"

class PrivateRational : private Rational
{
public:
	PrivateRational(int a = 1, int b = 1) : Rational(a, b) {};
	PrivateRational(const PrivateRational& pr);
	PrivateRational& operator=(const PrivateRational& pr);

	operator string() const;
	friend ostream& operator<<(ostream& out, const PrivateRational& r);
	friend istream& operator>>(istream& in, PrivateRational& r) throw(exception);

	PrivateRational operator++(int);
	PrivateRational operator--(int) throw(int);

	friend Rational operator/(const PrivateRational& r1, const PrivateRational& r2);
	friend bool operator==(const PrivateRational& r1, const PrivateRational& r2);
	friend bool operator<(const PrivateRational& r1, const PrivateRational& r2);
	friend bool operator>(const PrivateRational& r1, const PrivateRational& r2);
};

