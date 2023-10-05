#pragma once

#include "Money.h"

class Franc : public Money
{
public:

	Franc();
	Franc(int count);

	~Franc() override;	

	Money* times(int multiple) const override;

	bool equals(const Money& other) const override;
};

