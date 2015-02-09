//
//  Q3.cpp
//
//  Created by He Ma on 2/6/15.
//  Copyright (c) 2015 He Ma. All rights reserved.
//

#include <iostream>
using namespace std;

class A
{
public:
    A(){cout << "A()" << endl;}
    A(int x){cout<< "A(" << x << ")" << endl;}
    ~A(){cout << "~A()" << endl;}
};

class B
{
public:
    B(){cout << "B()" << endl;}
    B(int x):m_a(x){cout << "B(" << x << ")" << endl;}
    ~B() {cout << "~B()" << endl;}
private:
    A m_a;
};

class C:public A
{
public:
    C():A(10), m_b2(5){ cout << "C()" << endl;}
    ~C(){ cout << "~C()"<< endl;}
private:
    B m_b1;
    B m_b2;
};

int main() {

    C c;
    return 0;
}
