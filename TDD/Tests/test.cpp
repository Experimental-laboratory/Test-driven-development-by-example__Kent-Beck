#include "pch.h"
#include "../Code/chapter1/Dollar.cpp"
#include "../Code/chapter1/Franc.cpp"
#include "../Code/chapter1/Money.cpp"

#include <memory>

TEST(DollarMultiplication, Test0)
{
	const auto five = std::unique_ptr<Money>(Money::dollar(5));

	const auto tenDollars = std::unique_ptr<Money>(five->times(2));
	const auto fifteenDollars = std::unique_ptr<Money>(five->times(3));

	ASSERT_TRUE(tenDollars->equals(Dollar(10)));
	ASSERT_TRUE(fifteenDollars->equals(Dollar(15)));
	ASSERT_FALSE(tenDollars->equals(*fifteenDollars));	
}

TEST(EqualityDollar, Test0)
{
	const auto fiveDollars = std::unique_ptr<Money>(Money::dollar(5));
	
	ASSERT_TRUE(fiveDollars->equals(Dollar(5)));
	ASSERT_FALSE(fiveDollars->equals(Dollar(6)));
}

TEST(FrancMultiplication, Test0)
{
	const auto five = std::unique_ptr<Money>(Money::franc(5));

	const auto tenFrancs = std::unique_ptr<Money>(five->times(2));
	const auto fifteenFrancs = std::unique_ptr<Money>(five->times(3));

	ASSERT_TRUE(tenFrancs->equals(Franc(10)));
	ASSERT_TRUE(fifteenFrancs->equals(Franc(15)));
	ASSERT_FALSE(tenFrancs->equals(*fifteenFrancs));
}

TEST(EqualityFranc, Test0)
{
	const auto fiveFrancs = std::unique_ptr<Money>(Money::franc(5));

	ASSERT_TRUE(fiveFrancs->equals(Franc(5)));
	ASSERT_FALSE(fiveFrancs->equals(Franc(6)));
}

TEST(EqualityDifferentMoney, Test0)
{
	const auto fiveFrancs = std::unique_ptr<Money>(Money::franc(5));
	const auto fiveDollars = std::unique_ptr<Money>(Money::dollar(5));

	ASSERT_FALSE(fiveFrancs->equals(*fiveDollars));
}
