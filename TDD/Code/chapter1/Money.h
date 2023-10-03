#pragma once

class Money
{

public:

	Money(int amount);
	virtual ~Money();

	int amount() const;

	virtual bool equals(const Money& other) const;

protected:

	const int amount_;
};

