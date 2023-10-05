#include "Money.h"

#include "Dollar.h"
#include "Franc.h"

Money::Money(int amount) : amount_(amount)
{
}

Money::~Money()
{
}

int Money::amount() const
{
	return amount_;
}

bool operator==(const Money& oth1, const Money& oth2)
{
	return oth1.amount() == oth2.amount();
}

bool Money::equals(const Money& other) const
{
	return *this == other;
}

Money* Money::dollar(int amount)
{
	return new Dollar(amount);
}

Money* Money::franc(int amount)
{
	return new Franc(amount);
}
