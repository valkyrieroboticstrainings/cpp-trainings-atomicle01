//
//  functionPractice.cpp
//  
//
//  Created by FJ on 6/23/17.
//
//

#include "functionPractice.h"
#include<iostream>
#include<string>
using namespace std;

int mult(int x, int y);
void print();
void out(int times);

int main(){
    int someInput;
    cout<< "Ok here is a phrase" << endl;
    print();
    cout << "Now how many times do you want to print that phrase." << endl;
    cin >> someInput;
    out(someInput);
    cout<< endl<< "now give me an int" <<endl;
    cin >> someInput;
    int someInput2;
    cout << "now give me another"<< endl;
    cin>> someInput2;
    int final = mult(someInput, someInput2);
    cout << final<< endl;
}

int mult(int x, int y){
    return x*y;
}

void print(){
    cout << "I like chocolate."<< endl;
}

void out(int times){
    for(int i=0;i<times ;i++){
        cout << endl<< "I like chocolate";
    }
}