//
//  part4.cpp
//  Assignment03
//
//  Created by Timothy Ferido on 3/12/16.
//  Copyright © 2016 Timothy Ferido. All rights reserved.
//

#include <stdio.h>
#include "part4.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fib(int n) {
    
    if (n < 0) {
        throw "exception";
    }
    
    
    //base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    
    //recursive case
    return fib(n - 1) + fib(n - 2);
    
}

void exception_handler(int n) {
    try {
        fib(n);
    }
    catch (const char *) {
        cout << "An exception has occurred: \"n may not be less than zero.\"" << endl;
    }
}

void fib_test() {
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    for (int x = 1; x <= n; x++)
    {
        cout << fib(x) << endl;
    }
    exception_handler(n);
    
}


int pow(int a, int b)
{
    if (b<0 || a<0)
        throw "Invalid";
    
    //Break case
    if (b == 0) return 1;
    
    //Recursive Case
    return a*pow(a,b-1);
}



int tri(int n)
{
    if (n < 0)
        throw "Invalid";
    
    //Break Case
    if (n == 1) return 1;
    
    //Recursive Case
    return n + tri(n-1);
}
