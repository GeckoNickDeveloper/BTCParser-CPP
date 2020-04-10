#ifndef BTCLIST_HPP
#define BTCLIST_HPP

#include <BTC/IBTCData.hpp>
#include <BTC/BTCString.hpp>
#include <BTC/BTCNumber.hpp>
#include <BTC/BTCBool.hpp>
#include <BTC/BTCObject.hpp>

#include <string>
#include <list>

namespace BTC
{
	class BTCList : IBTCData
	{
	private:
		std::list<IBTCData> elements;
	protected:
	public:
		BTCList(void);
		~BTCList();

		void add(BTCString i);
		void add(BTCNumber i);
		void add(BTCBool i);
		void add(BTCObject i);
		void add(BTCList i);
		void removeAt(int index);
		int count(void);
		IBTCData* at(int index);

		std::string encode(void) override;
		std::string encode(int separators) override;
	};
}

#endif //! BTCLIST_HPP