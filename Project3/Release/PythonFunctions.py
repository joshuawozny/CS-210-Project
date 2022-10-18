# PythonFunctions.py
# Inventory Tracking App
# Date: October 18, 2022
# Author: Joshua Wozny
# Southern New Hampshire University, CS-210 Project 3

import re
import string

# Function to load data from file
def loadData():
    f = open("CS210_Project_Three_Input_File.txt")  # Open the file with the data
    dict = {}  # initialize dictionary to store each item
    for item in f:    # iterate over each line of file
        strp_item = item.strip()
        # if item is in dictionary already then add one to the value, else add the item as a key to dictionary and assign a value of 1
        if strp_item in dict:
            dict[strp_item] = dict[strp_item] +1
        else:
            dict[strp_item] = 1
    f.close
    return dict;

# Function to summarize all items sold indicating item and total number sold
def summary_all_items():
    dict = loadData();
    print("Items and Quantity Sold")
    print("***********************")
    for k,v in dict.items():
        print(k,v)
    f.close();
    print("\n***********************\n")
    return 0;

# Function to display the number sold of a given item (val)
def summary_item(val):
    dict = loadData();    
    return dict.get(val,0);    
   
# Function to ouptput data to file
def output_frequency_file():
    dict = loadData();
    out_file = open("frequency.dat","w")
    for k,v in dict.items():
        out_file.write(str(k) + ', ' + str(v) + '\n')
    out_file.close()
    return 0;
