//
//  classesPractice.cpp
//  
//
//  Created by FJ on 7/1/17.
//
//

#include "classesPractice.h"


Animal::Dog::Dog(int value){
    std::cout << "constructor works" << '\n';
    pointer = (int*)std::malloc(sizeof(int));
    *pointer = value;
    std::cout << *pointer << '\n';
};

Animal::Dog::~Dog(){
    std::cout << "destructor works" << '\n';
    std::free(pointer);
};

void Animal::Dog::barkAt(Dog& d){
    
};

void increase(int&);

int main(){
    Animal::Dog::Dog(20);
    int num = 10;
    std::cout << num << '\n';
    increase(num);
    std::cout << num << '\n';
    return 0;
}

void increase(int& num){
    num++;
}