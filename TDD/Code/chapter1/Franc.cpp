#include "Franc.h"

#include <typeinfo>

Franc::Franc(const std::string& currency) : Franc(0, currency)
{	
}

Franc::Franc(int count, const std::string& currency) : Money(count, currency)
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

Money* Franc::times(int multiple) const
{
	return Money::franc(amount_ * multiple);
}
