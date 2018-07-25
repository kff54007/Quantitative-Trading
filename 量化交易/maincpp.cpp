#include <iostream>
#include "HttpBoost.h"
int main()
{
	std::string str("https://api.huobi.pro/market/history/kline?period=1day&size=200&symbol=btcusdt");
	str = cly::get(str);
	std::cout << str.c_str() << std::endl;

	/*str = "http://192.168.3.135:9000/OpenApi/base/getStreamingServer?signature=572d915eae26e5a19e00908a65845b4a[{\n    \"appid\": \"f8324545\",\n    \"appsecret\": \"0x394294c583492dck59438\",\n    \"time\": \"1489806756000\"\n}\n]";
	str = cly::post(str);
	std::cout << str.c_str() << std::endl;*/

	system("pause");
	return 0;
}