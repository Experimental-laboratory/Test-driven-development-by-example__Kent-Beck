#pragma once

#include "Expression.h"
#include "Money.h"

#include <optional>
#include <string>

class Bank
{
public:
	std::optional<Money> reduce(const Expression& expression, const std::string& to) const;
};

