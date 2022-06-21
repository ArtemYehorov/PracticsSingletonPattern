#include <iostream>
using namespace std;
#pragma once

class Logger
{
	static Logger* instance;

	string path = "C:/1/progress.txt";
	FILE* file = nullptr;

	Logger();
public:
	static Logger* GetInstance();
	void WriteStringToFile(string text);

	void SetFileRoad(string road);
	void WriteIntegerToFile(int number);

	~Logger();
};
