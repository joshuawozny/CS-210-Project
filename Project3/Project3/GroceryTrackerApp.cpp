/*
* GroceryTrackerApp.cpp: GroceryTrackerApp class implementation
*
* Date: October 18, 2022
* Author: Joshua Wozny
* Southern New Hampshire University, CS-210 Project 3
*/

#include "GroceryTrackerApp.h"
#include <iostream>
#include <fstream>
#include "PythonWrapperFunctions.h"
#include <string>

// Method to display the main meu
void GroceryTrackerApp::displayMenu()
{
	std::cout << "*************************************************" << std::endl;
	std::cout << "******** CORNER GROCER INVENTORY TRACKER ********" << std::endl;
	std::cout << "******************* MAIN MENU *******************" << std::endl;
	std::cout << "*************************************************" << std::endl;
	std::cout << " 1: List all sold items with quantity sold." << std::endl;
	std::cout << " 2: List number of items sold for a specified item." << std::endl;
	std::cout << " 3: Histogram of items purchased." << std::endl;
	std::cout << " 4: Exit Program." << std::endl;
	std::cout << "Enter selection: ";

}// Method to select the menu item, and call the associated python function and output data
bool GroceryTrackerApp::selectMenuItem(int selection)
{
	switch (selection) {
		case 1:   // Suumarize all items
			CallProcedure("summary_all_items");
			return true;
		case 2:  // Summarize one item
			runSelection2();
			return true;
		case 3:  // Provide histogram of all items
			runSelection3();
			CallProcedure("output_frequency_file");			
			return true;
		case 4:   // Exit program
			std::cout << "Goodbye!";
			return false;
		default:  //All other selections are not valid
			std::cout << "Invalid Selection." << std::endl;
			return true;

	}
}

// Retrieve and display requested item's summary
void GroceryTrackerApp::runSelection2()
{
	string item;
	int value;

	std::cout << "\nEnter the item sold: ";
	std::cin >> item;
	value = callIntFunc("summary_item", item);
	std::cout << "Quantity Sold" << endl;
	std::cout << "***********************" << std::endl;
	std::cout << "   " << item << ": " << value << std::endl;
}

// Retrive and display histogram
void GroceryTrackerApp::runSelection3()
{
	ifstream my_file;
	string item;
	string item_count;

	my_file.open("frequency.dat", ios::in);  //open the file to create histogram from
	while (!my_file.eof()) {
		getline(my_file, item, ',');  //the item name is the first item before the comma on each line
		getline(my_file, item_count, '\n');  // the item count is the next item on each line before the newline
		int num = std::stoi(item_count);  //convert the string to an integer to use to create histogram
		std::cout << "  " << item << " ";  // don't print a histogram for anything that has a blank item, needed for last item read
		for (int i = 0; i < num; i++) {
			if (item != "") {
				std::cout << ">";
			}

		}
		std::cout << "\n\n";
	}

	my_file.close();
}



