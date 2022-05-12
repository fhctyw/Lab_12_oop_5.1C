#include "PrivateRational.h"
#include <sstream>
#include <iostream>

PrivateRational::PrivateRational(const PrivateRational& pr)
{
    *this = pr;
}

PrivateRational& PrivateRational::operator=(const PrivateRational& pr)
{
    setA(pr.getA());
    setB(pr.getB());
    return *this;
}

PrivateRational::operator string() const
{
    stringstream ss;
    ss << getA() << '/' << getB();
    return ss.str();
}

PrivateRational PrivateRational::operator++(int)
{
    PrivateRational r(*this);
    setB(r.getB() + 1);
    return r;
}

PrivateRational PrivateRational::operator--(int) throw(int)
{
    PrivateRational r(*this);
    setB(r.getB() - 1);
    if (getB() == 0)
        throw new int(-1);
    return r;
}

ostream& operator<<(ostream& out, const PrivateRational& r)
{
    out << string(r);
    return out;
}

istream& operator>>(istream& in, PrivateRational& r)
{
    int a, b;
    cout << "Чисельник: "; cin >> a;
    cout << "Знаменник: "; cin >> b;
    if (b == 0)
        throw exception("b == 0");
    r.setA(a); r.setB(b);
    return in;
}

Rational operator/(const PrivateRational& r1, const PrivateRational& r2)
{
    return (const Rational&)r1 / (const Rational&)r2;
};

bool operator==(const PrivateRational& r1, const PrivateRational& r2)
{
    return (const Rational&)r1 == (const Rational&)r2;
}

bool operator<(const PrivateRational& r1, const PrivateRational& r2)
{
    return (const Rational&)r1 < (const Rational&)r2;
}

bool operator>(const PrivateRational& r1, const PrivateRational& r2)
{
    return (const Rational&)r1 > (const Rational&)r2;
}
