//
//  TaskThree.cpp
//  EPA3
//
//  Created by Dejan Misic on 10/01/2019.
//  Copyright © 2019 Dejan Misic. All rights reserved.
//

/* 3. Implement a function that performs a bubble sort on a given array of characters. */
#include "TaskThree.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <stdio.h>
using namespace std;


void TaskThree::Task(){
    int i = 0;
    const int arraySize = 20;
    // array to be sorted
    char characters[arraySize] = {'b','z','w','q','d','t','c','u','f','s','o','x','a','e','v','z','l','r','I','g'};
    cout << "\n";
    //Original print out of listing of characters
    cout << "The original array of characters:" << endl;
    for ( i = 0; i < arraySize; ++i )
        if (i == arraySize-1){
          cout << characters[ i ];
        }
        else
        {
            cout << characters[ i ] << "," ;
        }
    cout << "\n" << endl;
    //Sort the array
    TaskThree::BubbleSort (characters, arraySize);
    
    //Print out of characters in alphabetical order
    cout << "The alphabetical listing of characters:\n";
    for ( i = 0; i < arraySize; ++i )
        if (i == arraySize-1){
            cout << characters[ i ];
        }
        else
        {
            cout << characters[ i ] << "," ;
        }
    cout << "\n" <<  endl;
}
// method to perform bubble sort on an array of characters with defined size that is passed to it
//http://www.cplusplus.com/forum/beginner/16476/#msg82326
void TaskThree::BubbleSort(char Array[], int size)
{
    int result;
    //Performs a run through number of strings
    for ( int pass = 0; pass < size - 1 ; ++pass )
    {
        //Runs through each string for compare
        for ( int j = 0; j < size - 1 - pass; ++j )
        {
            //Perform string compare and return value store as result
            result = strcmp (&Array[j], &Array[j+1]);
            //If value is less than 0 then perform swap function to rearrange
            if (result > 0)
                swap ( Array[j] , Array[j+1] );
        }//for
    }//for
}//BubbleSort

