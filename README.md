# CS-210-Project
## Project 3: Corner Grocer Product Volume Sold Tracking System
The Corner Grocer needs a program that analyzes the text records they generate throughout the day. These records list items purchased in chronological order from the time the store opens to the time it closes. They are interested in rearranging their produce section and need to know how often items are purchased so they can create the most effective layout for their customers. The program that the Corner Grocer is asking you to create should address the following three requirements for a given text-based input file that contains a list of purchased items for a single day:

* Produce a list of all items purchased in a given day along with the number of times each item was purchased.
* Produce a number representing how many times a specific item was purchased in a given day.
* Produce a text-based histogram listing all items purchased in a given day, along with a representation of the number of times each item was purchased.

## Skills Learned
* Integrating Python code into a C++ project
* Data manipulation and text file processing in Python
* User interface and Application logic design in C++
* Use of comments and variable naming conventions to aid in maintainability and readability
* Use of classes, header files, and spearate .cpp files to improve maintainability and adaptability through modularization.
* Debugging C++ and Python code

## Discussion: Successes, Challenges, and Commentary
Integrating C++ and Python code was particularly challenging as it required debugging Python code outside main C++ program. If there was incorrect code in the Python script the program crashed without any useful debugging information that would have been available had it all been written in C++. However, once the actaul Python code was working properly it was straightforward to write the C++ code to call the Python functions and use the values returned from the python function within C++. Keeping the application logic for each report option made the application easier to find errors as they occured. Keeping the application as modular as possible will allow it to be maintained and improved over time, should I choose to do so.

Possible improvements include additional formatting, including console colors, for the histogram - and possibly utilize the pandas library within the Python script to get more utility from it. Adding the ability to save multiple days data and track over time would also be a great feature.
