#include"Single.h"

// Singleton Pattern

int main()
{
	Logger* logger = Logger::GetInstance();



	logger->WriteStringToFile("PU");
	logger->WriteStringToFile("111");
	logger->WriteIntegerToFile(5);

	logger->SetFileRoad("C:/1/Step.txt");

	logger->~Logger();
}

