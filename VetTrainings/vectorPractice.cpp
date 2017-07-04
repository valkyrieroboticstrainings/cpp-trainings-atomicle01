//
//  vectorPractice.cpp
//  
//
//  Created by FJ on 6/23/17.
//
//

#include "vectorPractice.h"
#include<Vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> costs;
    costs.push_back(300);
    costs.push_back(4);
    costs.push_back(998);
    costs.push_back(300);
    costs.push_back(10);
    costs.push_back(6);
    costs.push_back(360);
    costs.push_back(500);
    costs.push_back(300);
    costs.push_back(499);
    
    int sum = 0;
    int counter = 2;
    for(int i = 0; i < costs.size(); i++){
        if(counter % 2 ==0){
            sum += costs[i];
        }else{}
        counter++;
    }
    cout << sum << endl;
    return 0;
}