//
//  part1.cpp
//  Assignment03
//
//  Created by Timothy Ferido on 3/12/16.
//  Copyright © 2016 Timothy Ferido. All rights reserved.
//

#include <iostream>
#include "part1.h"

#include <iostream>
#include <string>
#include <math.h>
using std::cin;
using std::cout;

/*------------------------------------------------------------------*/

double rad(double a);

//function rad takes a and returns square root
//rad throws a char exception if a is negative

double rad(double a) {
    double poop = sqrt(a);
    if (a < 0 )
    {
        throw a;
    }
    return poop;
}

//test_exceptions loops input prompt infinitely until user enters
//valid input. try catch block handles exception and checks if a
//is valid

void test_exceptions() {
    double input;
    
    for (;;) {
        cout << "Please enter a number: ";
        cin >> input;
        
        if (cin.fail())
        {
            std::string ignore;
            cin.clear();
            getline(cin, ignore);
        }
        else
            break;
    }
    
    try
    {
        cout << rad(input) << std::endl;
    }
    catch (double a)
    {
        
        if (a < 0)
        {
            cout << "An excepion occurred. Cannot take the square root of a negative number." << std::endl;
        }
    }
}
