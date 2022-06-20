#include <iostream>

using namespace std;

// Singleton Pattern

class Logger
{
	static Logger* instance;



	string path = "C:/1/progress.txt";
	FILE* file = nullptr;



	Logger()
	{
		fopen_s(&file, path.c_str(), "a+");
	}



public:
	static Logger* GetInstance()
	{
		if (instance == nullptr)
		{
			instance = new Logger();
		}
		return instance;
	}



public:
	void WriteStringToFile(string text)
	{
		if (file != nullptr)
		{
			text += "\n";
			fputs(text.c_str(), file);
			fclose(file);
		}
		cout << "1";
	}

	void SetFileRoad(string road)
	{
		path = road;
		cout << "1";
	}

	void WriteIntegerToFile(int number)
	{
		if (file != nullptr)
		{
			fprintf(file, "%d", number);
			fclose(file);
		}
		cout << "1";
	}


	~Logger()
	{
		delete instance;
		fclose(file);
		cout << "1";
	}



};



Logger* Logger::instance;



int main()
{
	Logger* logger = Logger::GetInstance();



	logger->WriteStringToFile("PU");
	logger->WriteStringToFile("111");
	logger->WriteIntegerToFile(5);

	logger->SetFileRoad("C:/1/Step.txt");

	logger->~Logger();
}

