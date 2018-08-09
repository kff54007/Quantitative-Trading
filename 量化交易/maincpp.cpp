#include <iostream>
#include <chrono>
#include "HttpBoost.h"
#include <rapidjson/document.h>
int main()
{
	
	std::ios::sync_with_stdio(false);

	/*str = "http://192.168.3.135:9000/OpenApi/base/getStreamingServer?signature=572d915eae26e5a19e00908a65845b4a[{\n    \"appid\": \"f8324545\",\n    \"appsecret\": \"0x394294c583492dck59438\",\n    \"time\": \"1489806756000\"\n}\n]";
	str = cly::post(str);
	std::cout << str.c_str() << std::endl;*/
	for (auto now = std::chrono::high_resolution_clock::now(); ;now = std::chrono::high_resolution_clock::now())	
	{
		//if ((std::chrono::high_resolution_clock::now() - now).count() < 100)
		//	continue;
		std::string str("https://api.huobi.pro/market/history/kline?period=1min&size=1&symbol=btcusdt");
		str = cly::get(str);
		//std::cout << str << std::endl;

		rapidjson::Document document;
		document.Parse(str.c_str());
		auto closePrice = document["data"][0]["close"].GetFloat();
		std::cout << closePrice << std::endl;
	}

	system("pause");
	return 0;
}