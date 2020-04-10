#include <BTC/BTCBool.hpp>

BTC::BTCBool::BTCBool(bool value)
{
	this->value = value;
};

bool BTC::BTCBool::getValue()
{
	return this->value;
};

std::string BTC::BTCBool::encode()
{
	return ((this->value) ? "true" : "false");
}