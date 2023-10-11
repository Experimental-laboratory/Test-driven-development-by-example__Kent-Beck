#pragma once

#include "Money.h"

class Dollar : public Money
{
public:
	
	Dollar(const std::string& currency);
	Dollar(int count, const std::string& currency);

	~Dollar() override;
};

