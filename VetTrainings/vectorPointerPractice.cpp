//
//  vectorPointerPractice.cpp
//  
//
//  Created by FJ on 6/26/17.
//
//

#include "vectorPointerPractice.h"
#include<iostream>
#include<string>
#include<Vector>
using namespace std;

int main(){
    vector <int> num;
    int *pointer;
    cout << "enter 5 numbers with spaces " << endl;
    cin >> *pointer;
    num.push_back(*pointer);
    cin.get();
    
    cin >> *pointer;
    num.push_back(*pointer);
    cin.get();
    
    cin >> *pointer;
    num.push_back(*pointer);
    cin.get();
    
    cin >> *pointer;
    num.push_back(*pointer);
    cin.get();
    
    cin >> *pointer;
    num.push_back(*pointer);
    cin.get();
    
    int * point = (&(num[0])) + num.size();
    int i = num.size() + num.size();
    while(i > num.size()){
        point--;
        i--;
        cout << *point << " ";
    }
    cout << endl;
    delete pointer;
    delete point;
    return 0;
}

