#include"Single.h"

	Logger::Logger()
	{
		fopen_s(&file, path.c_str(), "a+");
	}


	Logger* Logger::GetInstance()
	{
		if (instance == nullptr)
		{
			instance = new Logger();
		}
		return instance;
	}


	void Logger::WriteStringToFile(string text)
	{
		if (file != nullptr)
		{
			text += "\n";
			fputs(text.c_str(), file);
			fclose(file);
		}
		cout << "1";
	}

	void Logger::SetFileRoad(string road)
	{
		path = road;
		cout << "1";
	}

	void Logger::WriteIntegerToFile(int number)
	{
		if (file != nullptr)
		{
			fprintf(file, "%d", number);
			fclose(file);
		}
		cout << "1";
	}


	Logger::~Logger()
	{
		delete instance;
		fclose(file);
		cout << "1";
	}


Logger* Logger::instance;