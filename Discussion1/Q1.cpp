#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    int x = 5;
    cout << "x is : " << x << endl;
    
    int* z;
    z = &x;
    cout << "z is : " << z << endl;
    cout << "*z is : "<< *z << endl;
    
    *z = 3;
    cout << "*z is : " << *z << endl;
    cout << "x is : " << x << endl;

    return 0;
}
