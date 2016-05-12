//
//  part2.cpp
//  Assignment03
//
//  Created by Timothy Ferido on 3/12/16.
//  Copyright © 2016 Timothy Ferido. All rights reserved.
//

#include <stdio.h>
#include "part2.h"

#include <iostream>
using std::cin;
using std::cout;

template <class T>
T Large(T n1, T n2)
{
    return (n1>n2) ? n1 : n2;
}

int part2()
{
    int integer1, integer2;
    float num1, num2;
    char letter1, letter2;
    
    cout << "Enter two integers: " << endl;
    cin >> integer1 >> integer2;
    cout << Large(integer1, integer2) << " is larger." << endl;
    
    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;
    cout << Large(num1, num2) << " is larger." << endl;
    
    cout << "Enter two characters: " << endl;
    cin >> letter1 >> letter2;
    cout << Large(letter1, letter2) << " has larger ASCII value.";
    
    system("PAUSE");
    return 0;
}
