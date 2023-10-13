#include "pch.h"

#include "../Code/chapter1/Money.cpp"
#include "../Code/chapter1/Bank.cpp"
#include <memory>

TEST(DollarMultiplication, Test0)
{
	const auto five = Money::dollar(5);

	const auto tenDollars = five.times(2);
	const auto fifteenDollars = five.times(3);

	ASSERT_TRUE(tenDollars.equals(Money(10, "USD")));
	ASSERT_TRUE(fifteenDollars.equals(Money(15, "USD")));
	ASSERT_FALSE(tenDollars.equals(fifteenDollars));	
}

TEST(EqualityDollar, Test0)
{
	const auto fiveDollars = Money::dollar(5);
	
	ASSERT_TRUE(fiveDollars.equals(Money(5, "USD")));
	ASSERT_FALSE(fiveDollars.equals(Money(6, "USD")));
}

TEST(FrancMultiplication, Test0)
{
	const auto five = Money::franc(5);

	const auto tenFrancs = five.times(2);
	const auto fifteenFrancs = five.times(3);

	ASSERT_TRUE(tenFrancs.equals(Money(10, "CHF")));
	ASSERT_TRUE(fifteenFrancs.equals(Money(15, "CHF")));
	ASSERT_FALSE(tenFrancs.equals(fifteenFrancs));
}

TEST(EqualityFranc, Test0)
{
	const auto fiveFrancs = Money::franc(5);

	ASSERT_TRUE(fiveFrancs.equals(Money(5, "CHF")));
	ASSERT_FALSE(fiveFrancs.equals(Money(6, "CHF")));
}

TEST(EqualityDifferentMoney, Test0)
{
	const auto fiveFrancs = Money::franc(5);
	const auto fiveDollars = Money::dollar(5);

	ASSERT_FALSE(fiveFrancs.equals(fiveDollars));
}

TEST(TestCurrency, Test0)
{
	ASSERT_EQ("USD", Money::dollar(1).currency());
	ASSERT_EQ("CHF", Money::franc(1).currency());
}

TEST(SimpleAddition, Test0)
{
	Money five = Money::dollar(5);
	Expression sum = five.plus(five);
	Bank bank;

	const auto optMoney = bank.reduce(sum, "USD");
	ASSERT_TRUE(optMoney);
	if ( optMoney)
	{
		ASSERT_TRUE(Money::dollar(10).equals(*optMoney));
	}
}
