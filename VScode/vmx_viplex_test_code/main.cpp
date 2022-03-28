#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#include <thread>

#include "viplexcoreasync.h"

bool g_bAPIReturn = false;
uint16_t g_loginCode = 0;
string g_sn = "BZTA29271N5460005059";

void callBack(const uint16_t code, const char* data)
{
	g_loginCode = code;
	cout << "ViplexCore Demo code:" << code << endl;
	cout << "ViplexCore Demo data:" << data << endl;
	g_bAPIReturn = true;
}

void waitAPIReturn()
{
	while (!g_bAPIReturn)
	{
		this_thread::sleep_for(std::chrono::milliseconds(1000));
	}
	g_bAPIReturn = false;
}

std::string appendParam(const string& src, const string& key, const string& content)
{
	auto target = src;
	target.insert(src.find(key) + key.length(), content);
	return target;
}

std::string appendSN(const string& src)
{
	return appendParam(src, "\"sn\":\"", g_sn);
}

int main()
{
	string sdkRootDir = __FILE__;
	//cout << "sdkRootDir : " << sdkRootDir << endl;
	while (sdkRootDir.find("\\") != std::string::npos)
	{
		sdkRootDir[sdkRootDir.find("\\")] = '/';
	}

	sdkRootDir = sdkRootDir.substr(0, sdkRootDir.rfind("/") + 1) + "temp";
	//cout << "sdkRootDir : " << sdkRootDir << endl;

	string credentials = "{\"company\":\"NovaStar\",\"phone\":\"029-68216000\",\"email\":\"hr@novastar.tech\"}";

	cout << "\n********** SDK INIT **********\n" << endl;
	int ret = ViplexCoreAsync::nvInit(sdkRootDir.c_str(), credentials.c_str());
	cout << "\n********** SDK INIT return : " << ret << " **********\n" << endl;

	cout << "\n********** Searching for all screens connected **********\n" << endl;
	ViplexCoreAsync::nvSearchTerminalAsync(callBack);
	this_thread::sleep_for(std::chrono::milliseconds(3000));
	g_bAPIReturn = false;

	cout << "\n********** LOGGING IN **********\n" << endl;
	string loginParam = "{\"sn\":\"\",\"username\":\"admin\",\"rememberPwd\":1,\"password\":\"123456\",\"loginType\":0}";
	ViplexCoreAsync::nvLoginAsync(appendSN(loginParam).c_str(), callBack);
	waitAPIReturn();

	if (g_loginCode != 0)
	{
		cout << "\n ViplexCore Demo nvLoginAsync";
		return 0;
	}

	cout << "\n********** GETTING PROGRAM INFO **********\n" << endl;
	ViplexCoreAsync::nvGetProgramAsync(appendSN("{\"sn\":\"\"}").c_str(), callBack);
	waitAPIReturn();


	cout << "FIN" << endl;
	return 0;
}
