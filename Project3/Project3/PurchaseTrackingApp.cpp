#include "PurchaseTrackingApp.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<string> PurchaseTrackingApp::loadDataFile(std::string fileName)
{
	vector<string> data;
	string input_line;
	fstream new_file;

	new_file.open(fileName, ios::in);
	if (!new_file) {
		cout << "No such file";
	}
	else {
		while (true) {
			getline(new_file, input_line);
			data.push_back(input_line);
			if (new_file.eof())
				break;
		}
	}

	

	return data;
}

void PurchaseTrackingApp::showMenu()
{
}

void PurchaseTrackingApp::runSelectedFunction(int item, vector<string> data)
{
}

