#include <Python.h>
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
#include "Project3.h"
#include <vector>
#include "PurchaseTrackingApp.h"

using namespace std;

int main()
{
	CallProcedure("printSomething");
	cout << callIntFunc("PrintMe", "House") << endl;
	cout << callIntFunc("SquareValue", 2);
	vector<string> data;
	PurchaseTrackingApp app;
	data = app.loadDataFile("CS210_Project_Three_Input_File.txt");

	cout << "\n" << data[0] << endl;

	return 0;
}