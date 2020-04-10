#include <BTC/BTCSyntaxErrorException.hpp>



BTC::BTCSyntaxErrorException::BTCSyntaxErrorException(const char* message)
{
	this->message = message;
}

const char* BTC::BTCSyntaxErrorException::what()
{
	return this->message;
}