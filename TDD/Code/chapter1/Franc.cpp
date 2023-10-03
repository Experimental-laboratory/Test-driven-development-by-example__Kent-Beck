#include "Franc.h"

#include <typeinfo>

Franc::Franc() : Franc(0)
{
	
}

Franc::Franc(int count) : Money(count)
{
}

Franc::~Franc()
{
}

bool Franc::equals(const Money& other) const
{	
	try
	{
		const Franc& otherFranc = dynamic_cast<const Franc&>(other);		
		return Money::equals(other);
	}
	catch (const std::bad_cast&)
	{
		return false;
	}	
}

Money Franc::times(int multiple) const
{
	return Franc(amount_ * multiple);
}