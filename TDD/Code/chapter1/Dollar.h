#pragma once

#include "Money.h"

class Dollar : public Money
{
public:
	
	Dollar(const std::string& currency);
	Dollar(int count, const std::string& currency);

	~Dollar() override;

	Money* times(int multiple) const override;
	
	bool equals(const Money& other) const override;

};

