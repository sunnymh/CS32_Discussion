#include <iostream>

using namespace std;

void swap2(int* &a, int* &b) // What happens if it is void swap(int* a, int* b)? Try it out
{
    int* c = a;
    a = b;
    b = c;
}

int main(int argc, const char * argv[]) {
    int x = 3;
    int y = 5;
    int* x_addr = &x;
    int* y_addr = &y;
    cout << "x_addr is : " << x_addr << endl;
    cout << "y_addr is : " << y_addr << endl;
    cout << "After the swap: " << endl;
    swap2(x_addr, y_addr);
    cout << "x is : " << x << endl;
    cout << "y is : " << y << endl;
    cout << "x_addr is : " << x_addr << endl;
    cout << "y_addr is : " << y_addr << endl;
    cout << "*x_addr is : " << *x_addr << endl;
    cout << "*y_addr is : " << *y_addr << endl;
   return 0;
}
