//
//  part3.cpp
//  Assignment03
//
//  Created by Timothy Ferido on 3/12/16.
//  Copyright © 2016 Timothy Ferido. All rights reserved.
//

#include <stdio.h>
#include "part3.h"

#include <vector>
#include <iostream>
#include <string>
#include <list>
#include <set>
using std::cin;
using std::cout;

void list_example(){
    //declarations
    std::list<int> int_list;
    int a;
    
    //add user input onto end of list and sort
    cout << "Enter int values to be sorted. Enter 0 when finished: " << std::endl;
    for(;;){
        cin >> a;
        if (a!=0){
            int_list.push_back(a);
            int_list.sort();
            int_list.unique();
        }
        else{
            break;
        }
    }
    
    //output unique values from least to greatest
    cout << "Least to greatest: " << std::endl;
    for(std::list<int>::iterator i = int_list.begin();
        i != int_list.end(); i++)
    {
        std::cout<<*i<<std::endl;
    }
}

void set_example()
{
    //declarations
    std::string input;
    std::set<std::string> x;
    
    //prompt + add user input onto set
    std::cout << "Enter strings as desired. enter \"quit\" when finished." << std::endl;
    for(;;){
        cin >> input;
        if (input!="quit"){
            x.insert(input);
        }
        else{
            break;
        }
    }
    
    //output set contents
    std::cout << "Set contains:" << std::endl;
    while (!x.empty()) {
        std::cout << ' ' << *x.begin() << std::endl;
        x.erase(x.begin());
    }
}


void vector_example(){
    
    //declarations
    int a;
    std::vector<int> items;
    
    //prompt + loop user input until 0 is entered.
    //every nonzero value is added onto the vector
    cout << "Enter int values as desired. enter 0 when finished"<<std::endl;
    for (;;){
        cin >> a;
        if (a!=0){
            items.push_back(a);
        }
        else{
            break;
        }
    }
    
    //output all elements of vector
    cout << "values: " << std::endl;
    for (int i =0;i<items.size();i++)
    {
        cout << items[i] << std::endl;
    }
}

void part3_test(){
    cout << "Vector Example: " << std::endl << std::endl;
    vector_example();
    cout << std::endl << std::endl;
    cout << "Set Example: " << std::endl << std::endl;
    set_example();
    cout << std::endl << std::endl;
    cout << "List Example: " << std::endl << std::endl;
    list_example();
    
    
}
