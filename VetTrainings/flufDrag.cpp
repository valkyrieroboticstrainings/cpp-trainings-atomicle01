//
//  flufDrag.cpp
//  
//
//  Created by FJ on 6/26/17.
//
//

#include "flufDrag.h"
#include<iostream>
#include<string>
using namespace std;
int main(){
    char text[20] = "A fluffy dragon";
    
    char *pointer = text;
    cout << pointer[0] << "\t" << (int *)pointer << "\t";
    
    for(int i = 0; i< (strlen(text)); i++ ){
        if( (*(pointer + i)) == 'u' ){
            cout << *(pointer +i) << endl;
            break;
        }else{}
    }
    
    pointer = pointer + 2;
    cout << pointer << "\t";
    
    for(int i = 0; i< ((strlen(text)) - 2); i++ ){
        if( (*(pointer + i)) == 'r' ){
            cout << *(pointer +i) << "\t";
            break;
        }else{}
    }
    
    for(int i = 0; i< ((strlen(text)) - 2); i++ ){
        if( (*(pointer + i)) == 'g' ){
            cout << *(pointer +i) << endl;
            break;
        }else{}
    }
    delete pointer;
    return 0;
}