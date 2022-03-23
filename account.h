#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account {

    private: 
        int accountBalance(); 
        double balance();

    public:
        void deposits();
        void withdrawls();


    };
    #endif