#include <BTC/BTCNumber.hpp>


BTC::BTCNumber::BTCNumber(double value)
{
	this->value = value;
};

double BTC::BTCNumber::getValue()
{
	return this->value;
};

int BTC::BTCNumber::toInteger()
{
	return ((int) this->value);
};

double BTC::BTCNumber::toDouble()
{
	return this->value;
};

std::string BTC::BTCNumber::encode()
{
	return std::to_string(this->value);
};

std::string BTC::BTCNumber::encode(int separators)
{
	return this->encode();
};