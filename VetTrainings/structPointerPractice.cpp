//
//  structPointerPractice.cpp
//  
//
//  Created by FJ on 7/1/17.
//
//

#include "structPointerPractice.h"
#include <iostream>
#include<string>
using namespace std;

struct person{
    int age;
}sam;
int main(){
    person* p = &sam;
    p->age = 10;
    cout << sam.age << '\n';
    person ** pointer = &p; // pointer to pointer
    cout << *pointer << '\n';
    cout << ((*pointer)->age) << '\n';
    return 0;
}