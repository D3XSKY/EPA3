//
//  main.cpp
//  EPA3
//
//  Created by Dejan Misic on 09/01/2019.
//  Copyright © 2019 Dejan Misic. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <stdio.h>
#include "TaskTwo.hpp"
#include "TaskOne.hpp"
#include "TaskThree.hpp"
#include "TaskFour.hpp"
#include "TaskFive.hpp"
#include "TaskSix.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // Task 1 HW3
    TaskOne::Task();
    // Task 2 HW3
    TaskTwo::Task();
    // Task 3 HW 3
    TaskThree::Task();
    // Task 4 HW 3
    TaskFour::Task();
    // Task 5 HW 3
    TaskFive::Task();
    // Task 6 HW 3
    TaskSix::Task();
    return 0;
}
