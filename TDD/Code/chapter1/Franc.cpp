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
