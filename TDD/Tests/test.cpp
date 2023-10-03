#include "pch.h"
#include "../Code/chapter1/Dollar.cpp"
#include "../Code/chapter1/Franc.cpp"
#include "../Code/chapter1/Money.cpp"

TEST(DollarMultiplication, Test0)
{
	const Dollar five(5);	

	ASSERT_EQ(Dollar(10), five.times(2));	
	ASSERT_EQ(Dollar(15), five.times(3));
}

TEST(EqualityDollar, Test0)
{
	ASSERT_TRUE(Dollar(5).equals(Dollar(5)));
	ASSERT_FALSE(Dollar(5).equals(Dollar(6)));
}


TEST(FrancMultiplication, Test0)
{
	const Franc five(5);

	ASSERT_EQ(Franc(10), five.times(2));
	ASSERT_EQ(Franc(15), five.times(3));
}

TEST(EqualityFranc, Test0)
{
	ASSERT_TRUE(Franc(5).equals(Franc(5)));
	ASSERT_FALSE(Franc(5).equals(Franc(6)));
}

TEST(EqualityDifferentMoney, Test0)
{
	ASSERT_FALSE(Franc(5).equals(Dollar(5)));
}
