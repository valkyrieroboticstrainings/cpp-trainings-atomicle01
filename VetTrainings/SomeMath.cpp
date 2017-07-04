//
//  
//  HelloWorld
//
//  Created by FJ on 6/22/17.
//  Copyright (c) 2017 FJ. All rights reserved.
//

#include<iostream>
using namespace std;

int main(){
    /*
    int num;
    int number;
    int answer;
    int cost;
    bool greaterThanDollar;
    bool isPrime = true;
    cout << "Hello" << endl << "In order to complete a matematical operation, please enter a number: ";
    cin >> num;
    cout<<"Please enter the second number: ";
    cin >> number;
    answer = num + number;
    cout << endl << "The sum of the numbers is " << answer << endl;
    if(num >= number){
        answer = num - number;
    }else{
        answer = number - num;
    }
    cout << "The difference of the two numbers is " << answer << endl << endl << "Now lets switch to the banana game.";
    cout << "So, how much do you think a bunch of bananas should cost in terms of cents?" << endl;
    cin >> cost;
    if(cost > 100){
        greaterThanDollar = true;
    }else{
        greaterThanDollar = false;
    }
    
    for(int i=2; i < cost; i++){
        if((cost % i) == 0){
            isPrime = false;
            break;
        }else{}
    }
    
    if(isPrime || greaterThanDollar){
        cout << "Whole Foods."<<endl;
    }else{
        if((cost % 5) == 0){
            cout << "Sprouts" << endl;
        }else{
            cout << "Probably Trader Joe's" << endl;
        }
    }
    
    cout << "Thank you!" << endl;
    */
    cout << "Enter some text: " << endl;
    string input;
    getline(cin, input);
    int count = 0;
    int track = 0;
    unsigned long size = input.size();

    for(int i=0; i<size; i++){
    if((input[i] == 'b') && (input[i+1] == 'o') && (input[i+2]=='b')){
        count++;
        }else{}
         
    if((input[i] == 'b')&&(input[i+2]=='b')){
        track ++;
        }
    }
        cout << "'bob' " << count << endl << "'b_b' : " << track << endl;
        return 0;
}