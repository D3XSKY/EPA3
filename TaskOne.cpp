/* 1. Implement two functions:
 - Recursive function that calculates the n-th Fibonacci number.
 - Function that calculates the n-th Fibonacci number without using recursion.
 */

//  TaskOne.cpp
//  EPA3
//
//  Created by Dejan Misic on 09/01/2019.
//  Copyright © 2019 Dejan Misic. All rights reserved.
//

#include "TaskOne.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <stdio.h>
using namespace std;

// recursive function to calculate value of the n-th element of the fibonnaci sequence
//https://stackoverflow.com/a/51692478/9648082
unsigned TaskOne::CalculateFibonnaci(unsigned n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return CalculateFibonnaci(n-1) + CalculateFibonnaci(n-2);
}
// Method for calculating n-th element of fibonnaci sequence without using recursion
// https://www.geeksforgeeks.org/c-program-for-n-th-fibonacci-number/
int TaskOne::CalculateFibonnaciNoRecursion(int n){
    
        int a = 0, b = 1, c, i;
        if( n == 0)
            return a;
        for (i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
}

// method to execute task 1 from homework which is returning the n-th element of the fibonnaci sequence
void TaskOne::Task(){
    int arrayIndex=0;
    int element=0;
    int elementRecursive =0;
    cout << "Please enter element of fibonnaci array to get its value:"<< endl;
    cin >> arrayIndex;
    element = TaskOne::CalculateFibonnaciNoRecursion(arrayIndex);
    elementRecursive = TaskOne::CalculateFibonnaci(arrayIndex);
    cout << "Value of the "<< arrayIndex << "th" << " element in the Fibonnaci sequence calculated without recursion is: " << element << endl;
    cout << "Value of the "<< arrayIndex << "th" << " element in the Fibonnaci sequence calculated with recursion is: " << elementRecursive << endl;
}

