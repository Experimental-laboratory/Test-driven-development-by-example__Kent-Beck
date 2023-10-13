#include "Money.h"

Money::Money(int amount, const std::string& currency) : amount_(amount), m_currency(currency)
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
	return *this == other && m_currency == other.m_currency;
}

Money Money::times(int multiple) const
{
	return Money(amount_ * multiple, m_currency);
}

std::string Money::currency()
{
	return m_currency;
}

Money Money::dollar(int amount)
{
	return Money(amount, "USD");
}

Money Money::franc(int amount)
{
	return Money(amount, "CHF");
}

Expression Money::plus(const Money& added)
{
	return Money(amount_ + added.amount_, m_currency);
}
