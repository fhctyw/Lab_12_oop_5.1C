#pragma once
#include "Rational.h"

class PublicRational : public Rational
{
public:
	PublicRational(int a = 1, int b = 1) : Rational(a, b) {};
	PublicRational(const PublicRational& pr);
	PublicRational& operator=(const PublicRational& pr);
};

