/*
* GroceryTrackerApp.h: defines the methods for the GroceryTrackingApp class. Class contains the program logic.
*
* Date: October 18, 2022
* Author: Joshua Wozny
* Southern New Hampshire University, CS-210 Project 3
*/

#pragma once

class GroceryTrackerApp
{
public:
	void displayMenu();
	bool selectMenuItem(int selection);
private:
	void runSelection2();
	void runSelection3();
};

