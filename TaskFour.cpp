//
//  TaskFour.cpp
//  EPA3
//
//  Created by Dejan Misic on 10/01/2019.
//  Copyright © 2019 Dejan Misic. All rights reserved.
//
/*
 4. Implement a function that performs a selection sort on a given array of strings.
 */
#include "TaskFour.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <stdio.h>
using namespace std;


void TaskFour::Task(){
    
    const int arraySize = 40;
    string names[arraySize] = {"Collins", "Bill", "Smith", "Bart", "Allen", "Jim",
        "Griffin", "Jim", "Stamey", "Marty", "Rose", "Geri",
        "Taylor", "Terri", "Johnson", "Jill", "Allison", "Jeff",
        "Looney", "Joe", "Wolfe", "Bill", "James", "Jean",
        "Weaver", "Jim", "Pore", "Bob", "Rutherford", "Greg",
        "Javens", "Renee", "Harrison", "Rose", "Setzer", "Cathy",
        "Pike", "Gordon", "Holland", "Beth"};
    
    // Insert your code to complete this program
    cout << "The names on the list in no particlular order are: " << endl;
    PrintArray(names, arraySize);
    
    cout << "\n\n";
    // Calling the sorted array
    SelectionSort(names, arraySize);
    
    // Displaying sorted array
    cout << "The names in sorted order are: " << endl;
    PrintArray(names, arraySize);
    
}
void TaskFour::SelectionSort(string arr[], int size)
{
    int startScan, minIndex;
    string minValue;
    
    for(startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = arr[startScan];
        
        for(int index = (startScan + 1); index < size; index++)
        {
            if(arr[index] < minValue)
            {
                minValue = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minValue;
    }
}
    // Function to display the array's conents
void TaskFour::PrintArray(string arr[], int size)
    {
        for (int count = 0; count < size; count++) {
            if (count != size-1){
            cout << arr[count];
            cout << ",";
            }
            else {
            cout << arr[count];
            }
            if (count % 10 ==0 && count != 0)
                cout << "\n";
        }
    }
