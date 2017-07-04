//
//  oddEven.cpp
//  
//
//  Created by FJ on 6/23/17.
//
//

#include "oddEven.h"
#include<iostream>
#include<vector>;
using namespace std;

bool decide(int x);
int main(){
    bool final;
    vector<int>mult;
    for(int i=0; i<11; i++){
        mult.push_back(7*i);
        cout << mult[i] << " : ";
        final = decide(mult[i]);
        if(final){
            cout << "even"<< endl;
        }else{
            cout << "odd" << endl;
        }
    }
}

bool decide(int x){
    if(x%2 == 0){
        return true;
    }else{
        return false;
    }
}