#include "PublicRational.h"

PublicRational::PublicRational(const PublicRational& pr)
{
    *this = pr;
}


PublicRational& PublicRational::operator=(const PublicRational& pr)
{
    setA(pr.getA());
    setB(pr.getB());
    return *this;
}
