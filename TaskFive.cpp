//
//  TaskFive.cpp
//  EPA3
//
//  Created by Dejan Misic on 10/01/2019.
//  Copyright © 2019 Dejan Misic. All rights reserved.
//

#include "TaskFive.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <stdio.h>
#include <future>
using namespace std;
/* My comment on Task five
 
 Even though I didn't have time to research a lot about this, I did not perfectly understand when and how can we determine whether we should use threads. I can make only assumptions right now. Moreover, in our case with first task from homework 1 we could do it for adding and summing operations, just for the sake of an example.
 
 PS: If it is possible I would like to discuss this with you sometimes in the class if it's possible because I would like to get few points so it will be easier for me to study further.
 
 */
void TaskFive::Task(){
    /*
     1. Write a program that will, for input integers A, B and C, output the results of A * B * C and A + B + C.
     */
    cout << "\n\n\n";
    std::cout << ">> Homework Task 1 <<" << std::endl;
    int a,b,c,sum,proizvod;
    std::cout << "Enter integer A: " << std::endl;
    std::cin >> a;
    while (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Please enter integer." << std::endl;
        std::cout << "Enter integer A: " << std::endl;
        std::cin >> a;
    }
    std::cout << std::endl;
    std::cout << "Enter integer B: " << std::endl;
    std::cin.clear(); // clear input buffer to restore cin to a usable state
    std::cin >> b;
    while (std::cin.fail()){
        std::cout << std::endl;
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Please enter integer." << std::endl;
        std::cout << "Enter integer B: " << std::endl;
        std::cin >> b;
    }
    std::cout << std::endl;
    std::cout << "Enter integer C: " << std::endl;
    std::cin.clear(); // clear input buffer to restore cin to a usable state
    std::cin >> c;
    while (std::cin.fail()){
        std::cout << std::endl;
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Please enter integer." << std::endl;
        std::cout << "Enter integer C: " << std::endl;
        std::cin >> c;
    }
    cout << "\n";
    auto summing = async(Sum, a,b,c);
    sum = summing.get();
    std::cout << std::endl;
    std::cout << "Sum of integers " << a <<", "<< b <<" and " << c << " is " << sum <<endl;
    auto multiplying = async(Multiplication, a,b,c);
    proizvod = multiplying.get();
    cout << "\n";
    std::cout << "Integers " << a <<", "<< b <<" and " << c << " multiplication result is " << proizvod << std::endl;
}
int TaskFive::Sum(int a, int b, int c){
    int result =0;
    result = a+b+c;
    cout << "Sum operation performed in a separate thread.";
    return result;
}
int TaskFive::Multiplication(int a, int b, int c){
    int result =0;
    result = a*b*c;
    cout << "Multiplication operation performed in a separate thread.";
    return result;
}
