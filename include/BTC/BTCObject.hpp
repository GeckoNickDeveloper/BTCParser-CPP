#ifndef BTCOBJECT_HPP
#define BTCOBJECT_HPP

#include "IBTCData.hpp"
#include "BTCString.hpp"
#include "BTCNumber.hpp"
#include "BTCBool.hpp"
#include "BTCList.hpp"

#include <string>
#include <map>
#include <list>

namespace BTC
{
	class BTCObject : IBTCData
	{
	private:
		std::map<std::string, IBTCData> elements;
	protected:
	public:
		BTCObject(void);
		~BTCObject();

		static isTag(std::string tag);

		bool add(std::string tag, BTCString value);
		bool add(std::string tag, BTCNumber value);
		bool add(std::string tag, BTCBool value);
		bool add(std::string tag, BTCObject value);
		bool add(std::string tag, BTCList value);
		void remove(std::string tag);

		int count(void);
		IBTCData tag(std::string tag);
		std::list<std::string> tags(void);

		std::string encode(void) override;
		std::string encode(int separators) override;
	};
}

#endif //! BTCOBJECT_HPP