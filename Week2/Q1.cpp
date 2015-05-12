void swap(int &a, int &b) // What happens if it is void swap(int a, int b)? Try it out
{
    //cout << "&a is : " << &a << endl;
    //cout << "&b is : " << &b << endl;
    int c = a;
    a = b;
    b = c;
    //cout << "swap: After the swap:" << endl;
    //cout << "a is : " << a << endl;
    //cout << "b is : " << b << endl;
}

int main(int argc, const char * argv[]) {
    int x = 3;
    int y = 5;
    //cout << "&x is : " << &x << endl;
    //cout << "&y is : " << &y << endl;
    swap(x, y);
    cout << "main: After the swap:" << endl;
    cout << "x is : " << x << endl;
    cout << "y is : " << y << endl;
    return 0;
}
