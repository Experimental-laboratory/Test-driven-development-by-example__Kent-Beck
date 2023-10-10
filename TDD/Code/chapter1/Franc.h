#pragma once

#include "Money.h"

class Franc : public Money
{
public:

	Franc(const std::string& currency);
	Franc(int count, const std::string& currency);

	~Franc() override;	

	Money* times(int multiple) const override;

	bool equals(const Money& other) const override;

};

