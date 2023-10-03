#include "Dollar.h"

#include <typeinfo>

Dollar::Dollar() : Dollar(0)
{
}

Dollar::Dollar(int count) : Money(count)
{
}

Dollar::~Dollar()
{
}

Money Dollar::times(int multiple) const
{
	return Dollar(amount_ * multiple);
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