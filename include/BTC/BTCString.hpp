#ifndef BTCSTRING_HPP
#define BTCSTRING_HPP

#include "IBTCData.hpp"
#include <string>

namespace BTC
{
	class BTCString : IBTCData
	{
	private:
		std::string value;

	protected:
	public:
		BTCString(std::string value);
		~BTCString();
		
		std::string getValue(void);

		std::string encode(void) override;
		std::string encode(int separators) override;
	};
}

#endif //! BTCSTRING_HPP