# CS121_project_2

## Overview
This program is meant to sort a predetermined array of numbers into numerical order 1-9

### Functions
* main()
    * creates an unordered array of numbers 1-9 and labels it values[]
    * calls printValues() to show the array before the sorting
    * initializes the x and y variables' values as 3 and 5 respectfully and prints them
    * calls swap() to switch the values of x and y and prints the output
    * calls sort() to get the array in numerical order
    * prints the final output where the numbers are in order 1-9
* printValues(int*)
    * takes the array values[] and prints each index of the array (so 9 numbers are printed)
* swap(int*,int*)
    * makes a temporary variable and copies the value at *x to it
    * it then copies the value at *y to *x
    * finally it takes the old *x value that was copied to temp and copies it to *y
* sort(int*) 
    * establishes a constant MAX which is equal to the length of the array (9)
    * for every index in values[], if index j is bigger than the next item in the array (j + 1), it
      copies that value at index j to the value at index j + 1
    * every time it copies index j to index j + 1, it calls printValues() to print the array as it sorts
**NOTE: the code was working fine up until the sort function. I assume it is with the parameters but no matter what I tried it would give me an error when it got to calling the sort.

