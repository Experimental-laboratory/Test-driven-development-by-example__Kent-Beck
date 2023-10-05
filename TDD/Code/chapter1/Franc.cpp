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

Franc* Franc::times(int multiple) const
{
	return new Franc(amount_ * multiple);
}
