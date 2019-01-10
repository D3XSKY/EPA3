//
//  TaskFive.hpp
//  EPA3
//
//  Created by Dejan Misic on 10/01/2019.
//  Copyright © 2019 Dejan Misic. All rights reserved.
//

#ifndef TaskFive_hpp
#define TaskFive_hpp

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <stdio.h>
#include <future>
using namespace std;
class TaskFive{
public:
    static void Task();
    static int Sum(int x, int y, int z);
    static int Multiplication(int x, int y, int z);
};
#endif /* TaskFive_hpp */
