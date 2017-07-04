//
//  StructPractice.cpp
//  
//
//  Created by FJ on 6/25/17.
//
//

#include "StructPractice.h"
#include<iostream>
#include<string>
using namespace std;

struct person{
    string name;
    string address;
    int phoneNum;
};

int main(){
    person p;
    cout << "Enter name: " << endl;
    getline(cin, p.name);
    cout << "Enter address: "<< endl;
    getline(cin, p.address);
    cout << "Enter phone number: " << endl;
    cin >> p.phoneNum;
    cout << "Here is the info: "<< endl;
    cout << "Your name is " << p.name << ", your address is " << p.address << ", and your phone number is "<< p.phoneNum << "." << endl;
    return 0;
}