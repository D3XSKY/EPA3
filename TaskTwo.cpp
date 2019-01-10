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
/*2. Make a function that converts decimal to hexadecimal number by using recursive division by 16 (as you would do on a paper). The function must return a string that represents the hexadecimal number.*/
void TaskTwo::Task(){
    cout << "Please enter decimal number that should be converted to HEX: " << endl;
    int number;
    cin >> number;
    cout << ConvertToHex(number);
    
    
}
string TaskTwo::ConvertToHex (int decimal) {
    string hexstr = "";
    while (decimal>0) {
        char remainder;
        int calculate = decimal%16;
        if (calculate>=10) {
            switch (calculate) {
                case 10:
                    remainder = 'A';
                    break;
                case 11:
                    remainder = 'B';
                    break;
                case 12:
                    remainder = 'C';
                    break;
                case 13:
                    remainder = 'D';
                    break;
                case 14:
                    remainder = 'E';
                    break;
                case 15:
                    remainder = 'F';
                    break;
            }
        } else {
            remainder = calculate+48;
        }
        hexstr = remainder+hexstr;
        decimal = decimal/16;
    }
    return hexstr;
    
}


