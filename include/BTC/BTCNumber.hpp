#ifndef BTCNUMBER_HPP
#define BTCNUMBER_HPP

#include <BTC/IBTCData.hpp>
#include <string>

namespace BTC
{
	class BTCNumber : IBTCData
	{
	private:
		double value;

	protected:
	public:
		BTCNumber(double value);
		~BTCNumber();
		
		double getValue(void);
		int toInteger(void);
		double toDouble(void);

		std::string encode(void) override;
		std::string encode(int separators) override;
	};
}

#endif //! BTCNUMBER_HPP