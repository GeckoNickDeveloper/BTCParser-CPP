#ifndef BTCBOOL_HPP
#define BTCBOOL_HPP

#include <BTC/IBTCData.hpp>
#include <string>

namespace BTC
{
	class BTCBool : IBTCData
	{
	private:
		bool value;

	protected:
	public:
		BTCBool(std::string value);
		~BTCBool();
		
		bool getValue(void);

		std::string encode(void) override;
		std::string encode(int separators) override;
	};
}

#endif //! BTCBOOL_HPP