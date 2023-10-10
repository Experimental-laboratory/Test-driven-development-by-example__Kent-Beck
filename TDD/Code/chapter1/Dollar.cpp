#include "Dollar.h"

#include <typeinfo>

Dollar::Dollar(const std::string& currency) : Dollar(0, currency)
{
}

Dollar::Dollar(int count, const std::string& currency) : Money(count, currency)
{
}

Dollar::~Dollar()
{
}

Money* Dollar::times(int multiple) const
{
	return Money::dollar(amount_ * multiple);
}

bool Dollar::equals(const Money& other) const
{
	try
	{
		const Dollar& otherDollar = dynamic_cast<const Dollar&>(other);		
		return Money::equals(other);
	}
	catch (const std::bad_cast&)
	{
		return false;
	}
}

