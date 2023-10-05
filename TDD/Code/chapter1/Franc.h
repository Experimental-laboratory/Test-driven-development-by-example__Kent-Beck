#pragma once

#include "Money.h"

class Franc : public Money
{
public:

	Franc();
	Franc(int count);

	~Franc() override;	

	Franc* times(int multiple) const;	

	bool equals(const Money& other) const override;
};

