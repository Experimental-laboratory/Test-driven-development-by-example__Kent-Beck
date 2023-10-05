#pragma once

class Dollar;
class Franc;

class Money
{

public:

	Money(int amount);

	virtual ~Money();

	int amount() const;

	virtual bool equals(const Money& other) const;
	virtual Money* times(int multiple) const = 0;

	static Money* dollar(int amount);
	static Money* franc(int amount);

protected:

	const int amount_;
};

