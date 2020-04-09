#ifndef IBTCDATA_HPP
#define IBTCDATA_HPP

#include <string>

namespace BTC
{
	class IBTCData
	{
	public:
		virtual std::string encode(void) = 0;
		virtual std::string encode(int separators) = 0;		
	};
}

#endif //! IBTCDATA_HPP