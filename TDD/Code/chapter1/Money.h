#pragma once

#include <string>

class Dollar;
class Franc;

class Money
{

public:

	Money(int amount, const std::string& currency);
	
	int amount() const;

	bool equals(const Money& other) const;
	Money times(int multiple) const;

	std::string currency();

	static Money dollar(int amount);
	static Money franc(int amount);

	friend Money operator+(const Money& left, const Money& right);

protected:

	std::string m_currency;

	const int amount_;
};

