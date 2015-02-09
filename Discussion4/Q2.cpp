//
//  Q2.cpp
//
//  Created by He Ma on 2/6/15.
//  Copyright (c) 2015 He Ma. All rights reserved.
//

#include <iostream>
using namespace std;

class A
{
public:
    virtual void print(){cout << "A::print()"<<endl;}
    virtual ~A(){};
};

class B:public A
{
public:
    void print(){cout << "B::print()"<<endl;}
};

void printSomething(A a){
    a.print();
}

void printSomething2(A& a){
    a.print();
}

void printSomething3(A* a){
    a->print();
}

int main() {
    B b;
    A* c = new B;
    printSomething(b);
    printSomething2(b);
    printSomething3(&b);
    printSomething(*c);
    printSomething2(*c);
    printSomething3(c);
    return 0;
}
