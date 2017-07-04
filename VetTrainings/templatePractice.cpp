//
//  templatePractice.cpp
//  
//
//  Created by FJ on 7/1/17.
//
//

#include "templatePractice.h"

template<class T>
class Work{
public:
    Work(T x){
        std::cout << x << '\n';
    }
};

template<>
class Work<char>{
public:
    Work(char ch){
        std::cout << ch << '\n';
    }
};

template<class T, class M, class N>
class Tog{
    T first;
    T second;
    M num1;
    N num2;
public:
    Tog(T x, T y, M a, N b){
        first = x;
        second = y;
        num1 = static_cast<M>(b);
        num2 = static_cast<N>(a);
    }
    T add();
    void print();
};

template<class T, class M, class N>
T Tog<T, M, N>::add(){
    return first + second;
}

template<class T, class M, class N>
void Tog<T, M, N>::print(){
    std::cout << "when switched, the first number = " << num1 << " and the second = " << num2 << '\n';
}

template<class T>
class Facto{
    int org;
public:
    Facto(T s){
        org = s;
    }
    int mult();
};

template<class T>
int Facto<T>::mult(){
    int muss = 1;
    if(org != 0){
    while(org>1){
        muss *= org;
        org--;
    }
    }else{};
    return muss;
}

int main(){
    Work <char> w('d');
    Work <int> wk(3);
    
    int number;
    double dec;
    std::cout << "Enter 2 numbers with spaces in between. The first should be an int and the second should be a double." << '\n';
    std::cin >> number;
    std::cin >> dec;
    Tog<std::string, int, float> t("I love ", "Ginger chew", number, dec);
    std::cout << t.add() << '\n';
    t.print();
    std::cout << "Now, type in a positive integer and I will give you the value of the factorial of it." << '\n';
    unsigned long num;
    std::cin >> num;
    Facto<unsigned long> f(num);
    std::cout << f.mult() << '\n';
    return 0;
}