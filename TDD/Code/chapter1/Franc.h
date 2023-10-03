#pragma once

#include "Money.h"

class Franc : public Money
{
public:

	Franc();
	Franc(int count);

	~Franc() override;

	bool equals(const Money& other) const override;

	Money times(int multiple) const;	
};

