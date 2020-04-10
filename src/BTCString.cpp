#include <BTC/BTCString.hpp>

BTC::BTCString::BTCString(std::string value)
{
	this->value = value;
};

std::string BTC::BTCString::getValue()
{
	return this->value;
};

std::string BTC::BTCString::encode()
{
	std::string ret = "\"";

	for (int i = 0; i < this->value.length(); i++)
	{
		switch (this->value[i])
		{
			case '\n':
				ret += "\\n";
				break;
			case '\'':
				ret += "\\\'";
				break;
			case '\"':
				ret += "\\\"";
				break;
			case '\\':
				ret += "\\\\";
				break;
			case '\r':
				ret += "\\r";
				break;
			case '\t':
				ret += "\\t";
				break;
			default:
				ret += this->value[i];
				break;
		}
	}

	ret += "\"";

	return ret;
};

std::string BTC::BTCString::encode(int separators)
{
	return this->encode();
};