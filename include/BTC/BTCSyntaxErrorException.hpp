#ifndef BTCSYNTAXERROREXCEPTION_HPP
#define BTCSYNTAXERROREXCEPTION_HPP

#include <exception>

namespace BTC
{
	class BTCSyntaxErrorException : std::exception
	{
	private:
		const char* message;
	protected:
	public:
		BTCSyntaxErrorException(const char* message);
		~BTCSyntaxErrorException();

		const char* what();
	};
};

#endif //! BTCSYNTAXERROREXCEPTION_HPP