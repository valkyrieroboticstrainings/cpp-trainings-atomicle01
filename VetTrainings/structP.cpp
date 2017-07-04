//
//  structP.cpp
//  
//
//  Created by FJ on 6/25/17.
//
//

#include "structP.h"
#include<iostream>
#include<string>
using namespace std;

struct fraction{
    int den;
    int num;
};
int main(){
    fraction frac1;
    fraction frac2;
    int mult;
    int sum;
    cout << "Enter the first fraction's numerator: ";
    cin >> frac1.num;
    cout << "Enter the first fraction's denomerator: ";
    cin >> frac1.den;
    cout << "Enter the second fraction's numerator: ";
    cin >> frac2.num;
    cout << "Enter the second fraction's denomerator: ";
    cin >> frac2.den;
    
    if(frac1.den == frac2.den){
        sum = frac1.num + frac2.num;
        cout << "Your answer is " << sum << "/" << frac1.den << endl;
    }else{
        mult = frac1.den * frac2.den;
        sum = (frac1.num * frac2.den) + (frac2.num * frac1.den);
        cout << "The answer is " << sum << "/" << mult << "." << endl;
    }
}