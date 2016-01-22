//
//  main.cpp
//  demo
//
//  Created by He Ma on 1/15/16.
//  Copyright © 2016 He Ma. All rights reserved.
//

#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass(int a, int& b, int c)
    :d_y(b){
        d_x = a;
        d_z = new int(c);
    }
    void print(){
        cout << d_x << "," << d_y << "," << *d_z << endl;
    }
    ~MyClass(){
        delete d_z;
    }
private:
    int d_x;
    int& d_y;
    int* d_z;
};

class student {
public:
    student(const char *name, const double &score) {
        m_name = new char[strlen(name)+1];
        strcpy(m_name, name);
        m_score = score; }
   
    student(const student& st) {
        m_name = new char[strlen(st.m_name)+1];
        strcpy(m_name,st.m_name);
        m_score = st.m_score;
    }
    student &operator=(const student &st) {
        if(&st != this){
            delete [] m_name;
            m_name = new char[strlen(st.m_name)+1];
            strcpy(m_name, st.m_name);
            m_score = st.m_score;
        }
        return *this;
    }
    ~student() { delete [] m_name; }
private:
    char* m_name;
    double m_score;
};

class A {
public:
    A() {
        cout << "C" << endl;
    }
    ~A() {
        cout << "2" << endl;
    }
};
class B {
public:
    B() {
        cout << "S" << endl;
    }
    ~B() {
        cout << "3" << endl;
    }
private:
    A a;
};

class Double {
public:
    Double(double n):m_value(n){}
    Double& getMyself() { return *this;}
    void setValue(double n){m_value = n;}
    double getValue(){return m_value;}
private:
    double m_value;
};

void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

void swap2(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
/*
    //1
    int x = 5;
    int* z;
    z = &x;
    cout << "*z is: " << *z << endl;
    //2
    *z = 3;
    cout << "x is : " << x << endl;
    //3
    int& a = x;
    a = 4;
    cout << "x is: " << x << endl;
    cout << "*z is: "<< *z << endl;
*/
    
/*
    int x = 3;
    int y = 5;
    swap(x, y);
    cout << "x is : " << x << endl;
    cout << "y is : " << y << endl;



    x = 3;
    y = 5;
    int* c = &x;
    int* d = &y;
    swap2(c, d);// Swap the value of x and y
    cout << "x is : " << x << endl;
    cout << "y is : " << y << endl;
*/

/*
    Double d(10);
    d.setValue(4);
    cout << d.getValue()<<endl;
*/
 
/*
    B b;
*/
   
/*
    student A("ABC",100);
    student B = A;
    student C("CDE", 100);
    C = A;
*/
    
/*
    int b = 2;
    MyClass obj = MyClass(1, b, 3);
    obj.print();
    return 0;
*/
}