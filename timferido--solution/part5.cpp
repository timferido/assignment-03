//
//  part5.cpp
//  Assignment03
//
//  Created by Timothy Ferido on 3/12/16.
//  Copyright © 2016 Timothy Ferido. All rights reserved.
//

#include <stdio.h>
#include "part5.h"

int tri_iter(int n)
{
    if (n < 0) {
        throw "exception";
    }
    
    if (n == 1)
        return 1;
    
    return (n*(n+1))/2;
}



int pow_iter(int a, int b)
{
    int z=a;
    
    if (b<0 || a<0)
        throw "Invalid";
    
    //Break case
    if (b == 0) return 1;
    
    //Recursive Case
    for (int i = 1; i < b; i++) {
        z *= a;
    }
    return z;
}

int fib_iter(int n)
{
    int previous = 1;
    int current = 1;
    int next = 1;
    for (int i = 3; i <= n; ++i)
    {
        next = current + previous;
        previous = current;
        current = next;
    }
    return next;
}
