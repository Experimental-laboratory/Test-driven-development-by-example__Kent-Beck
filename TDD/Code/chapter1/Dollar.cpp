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
