#pragma once
#include <string>
#include <vector>
class PurchaseTrackingApp
{
public:
	std::vector<std::string> loadDataFile(std::string fileName);
	void showMenu();
	void runSelectedFunction(int item, std::vector<std::string> data);
};

