//
//  main.cpp
//  Assignment03
//
//  Created by Timothy Ferido on 3/12/16.
//  Copyright © 2016 Timothy Ferido. All rights reserved.
//

#include <iostream>
#include "part1.h"
#include "part2.h"
#include "part3.h"
#include "part4.h"
#include "part5.h"
using namespace std;


int main() {
    
    //Test part 1
    cout << "PART 1" << endl <<endl;
    
    /*this function demonstrates when an invalid input is put into a rad
     function, an exception is thrown. it is handled as well in the same
     function.
     */
    test_exceptions();
    
    cout << endl << "------------------------------------------------" << endl;
    
    //Test part 2
    cout << "PART 2" << endl << endl;
    
    /**/
    part2();
    
    cout << endl << "------------------------------------------------" << endl;
    
    //Test part 3
    cout << "PART 3" << endl << endl;
    
    /**/
    part3_test();
    
    
    
    return 0;
}
