//
//  pointRef.cpp
//  
//
//  Created by FJ on 6/25/17.
//
//

#include "pointRef.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    char text[10] = "abcd";
    char *pointer = text + strlen(text);
    while(pointer > text){
        --pointer;
        cout << *pointer;
    }
    cout << endl;
    delete pointer;
}