#pragma once

#include "Expression.h"

#include <string>

class Dollar;
class Franc;

class Money : public Expression
{

public:

	Money(int amount, const std::string& currency);
	
	int amount() const;

	bool equals(const Money& other) const;
	Money times(int multiple) const;

	std::string currency();

	static Money dollar(int amount);
	static Money franc(int amount);

	Expression plus(const Money& added);

protected:

	std::string m_currency;

	const int amount_;
};

