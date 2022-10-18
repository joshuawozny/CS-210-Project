/*
* GroceryTracker.cpp: contains the main funtion looping until user exits
*
* Date: October 18, 2022
* Author: Joshua Wozny
* Southern New Hampshire University, CS-210 Project 3
*/

#include <iostream>
#include "GroceryTrackerApp.h"

int main() {
	int selection;
	bool run=true;
	GroceryTrackerApp app;   // GroceryTrackerApp instance that controls the logic of the program
	while (run) {
		app.displayMenu();
		std::cin >> selection;
		run = app.selectMenuItem(selection);
	}
	return 0;
}
