//
//  TaskSix.cpp
//  EPA3
//
//  Created by Dejan Misic on 10/01/2019.
//  Copyright © 2019 Dejan Misic. All rights reserved.
//

#include "TaskSix.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <stdio.h>
#include <future>
using namespace std;
/* My comment on Task six
 6. Investigate the possibility of parallelizing the code in Task 2 from HW1. Write a short text file explaining whether it is possible and (if yes) implement the described parallelization.
 
For this task I wanted to give it a try and I modified my task 2 from homework so for loop in that task executes in separate thread.
 
 */
// Print * character based on input
void TaskSix::PrintStars(int n){
    for (int i=1; i<=n; i++) {
        cout << '*';

    }
    cout << "\n";
    cout << "For loop executed in separate thread.\n";
}
void TaskSix::Task(){
    
    std::cout << std::endl;
    std::cout << ">> Homework Task 2 <<" << std::endl;
    /*
     2. For an input positive integer N, output N stars. For example, if N = 5, then output *****. If N is 0 or less, output a message saying the input is invalid.
     */
    try {
        int N;
        std::cout << "Enter positive integer: " << std::endl;
        std::cin >> N;
        if (N>0) {
            thread prints(TaskSix::PrintStars, N);
            prints.join();
            std::cout << std::endl;
        }
        else{
            throw 666;
        }
        
        
    } catch (int e) {
        std::cout << "You must input a positive integer. Error code: "<< e <<"." << std::endl;
    }
}
