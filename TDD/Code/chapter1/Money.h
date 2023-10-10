#pragma once

#include <string>

class Dollar;
class Franc;

class Money
{

public:

	Money(int amount, const std::string& currency);

	virtual ~Money();

	int amount() const;

	virtual bool equals(const Money& other) const;
	virtual Money* times(int multiple) const = 0;

	virtual std::string currency();

	static Money* dollar(int amount);
	static Money* franc(int amount);

protected:

	std::string m_currency;

	const int amount_;
};

