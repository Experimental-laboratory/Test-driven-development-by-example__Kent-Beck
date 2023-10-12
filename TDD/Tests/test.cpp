#include "pch.h"
//#include "../Code/chapter1/Dollar.cpp"
//#include "../Code/chapter1/Franc.cpp"
#include "../Code/chapter1/Money.cpp"

#include <memory>

TEST(DollarMultiplication, Test0)
{
	const auto five = std::unique_ptr<Money>(Money::dollar(5));

	const auto tenDollars = std::unique_ptr<Money>(five->times(2));
	const auto fifteenDollars = std::unique_ptr<Money>(five->times(3));



	ASSERT_TRUE(tenDollars->equals(Money(10, "USD")));
	ASSERT_TRUE(fifteenDollars->equals(Money(15, "USD")));
	ASSERT_FALSE(tenDollars->equals(*fifteenDollars));	
}

TEST(EqualityDollar, Test0)
{
	const auto fiveDollars = std::unique_ptr<Money>(Money::dollar(5));
	
	ASSERT_TRUE(fiveDollars->equals(Money(5, "USD")));
	ASSERT_FALSE(fiveDollars->equals(Money(6, "USD")));
}

TEST(FrancMultiplication, Test0)
{
	const auto five = std::unique_ptr<Money>(Money::franc(5));

	const auto tenFrancs = std::unique_ptr<Money>(five->times(2));
	const auto fifteenFrancs = std::unique_ptr<Money>(five->times(3));

	ASSERT_TRUE(tenFrancs->equals(Money(10, "CHF")));
	ASSERT_TRUE(fifteenFrancs->equals(Money(15, "CHF")));
	ASSERT_FALSE(tenFrancs->equals(*fifteenFrancs));
}

TEST(EqualityFranc, Test0)
{
	const auto fiveFrancs = std::unique_ptr<Money>(Money::franc(5));

	ASSERT_TRUE(fiveFrancs->equals(Money(5, "CHF")));
	ASSERT_FALSE(fiveFrancs->equals(Money(6, "CHF")));
}

TEST(EqualityDifferentMoney, Test0)
{
	const auto fiveFrancs = std::unique_ptr<Money>(Money::franc(5));
	const auto fiveDollars = std::unique_ptr<Money>(Money::dollar(5));

	ASSERT_FALSE(fiveFrancs->equals(*fiveDollars));
}

TEST(TestCurrency, Test0)
{
	ASSERT_EQ("USD", std::unique_ptr<Money>(Money::dollar(1))->currency());
	ASSERT_EQ("CHF", std::unique_ptr<Money>(Money::franc(1))->currency());
}
