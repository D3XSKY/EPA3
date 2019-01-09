//
//  TaskTwo.cpp
//  EPA3
//
//  Created by Dejan Misic on 09/01/2019.
//  Copyright © 2019 Dejan Misic. All rights reserved.
//

#include "TaskTwo.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <stdio.h>
using namespace std;
// method to execute task 1 from homework which is returning the n-th element of the fibonnaci sequence using recursion
void TaskTwo::Task(){
    int arrayIndex=0;
    int element=0;
    cout << "Please enter element of fibonnaci array to get its value:"<< endl;
    cin >> arrayIndex;
    element = TaskTwo::CalculateFibonnaci(arrayIndex);
    cout << "Value of the "<< arrayIndex << "th" << " element in the Fibonnaci sequence is: " << element << endl;
}
// recursive function to calculate value of the n-th element of the fibonnaci sequence
//https://stackoverflow.com/a/51692478/9648082
unsigned TaskTwo::CalculateFibonnaci(unsigned n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return CalculateFibonnaci(n-1) + CalculateFibonnaci(n-2);
}
/*2. Implement two functions:
 - Recursive function that calculates the n-th Fibonacci number.
 - Function that calculates the n-th Fibonacci number with using recursion. */

