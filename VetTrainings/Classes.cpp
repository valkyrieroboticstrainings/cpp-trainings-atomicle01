//
//  Classes.cpp
//  
//
//  Created by FJ on 6/23/17.
//
//

#include "Classes.h"
#include<iostream>
#include<string>
using namespace std;

class Broom{
protected:
    string name;
    int year;
    int mSweeps;
    int mVel;
public:
    void setVal(string title, int model, int sweep, int vel);
    void setVal(string title, int model, int sweep, int vel){
        name=title;
        year=model;
        mSweeps = sweep;
        mVel=vel;
    }
    void print(){
        cout << "name: " << name << endl << "year: " << year << endl;
    }
};

class Cleensweep:public Broom{
public:
    void print(){
        cout << "name: " << name << endl << "max sweeps: " << mSweeps << endl;
    }
};

class Firebolt:public Broom{
public:
    void print(){
        cout<< "name: " << name << endl << "max velocity: "<< mVel << " meters/sec"<< endl;
    }
};

int main(){
    Broom br;
    Cleensweep csw;
    Firebolt fb;
    br.setVal("Broom", 1965, 1234, 2);
    csw.setVal("Cleensweep", 1994, 3748, 10);
    fb.setVal("Firebolt", 2034, 9237, 100);
    
    br.print();
    cout << endl;
    csw.print();
    cout << endl;
    fb.print();
    return 0;
}