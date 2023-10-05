#pragma once

#include "Money.h"

class Dollar : public Money
{
public:
	
	Dollar();
	Dollar(int count);

	~Dollar() override;

	Money* times(int multiple) const override;
	
	bool equals(const Money& other) const override;
};

