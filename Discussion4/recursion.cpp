//
//  main.cpp
//  practice4
//
//  Created by He Ma on 2/6/15.
//  Copyright (c) 2015 He Ma. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

// Return the factorial of n using recursion
// Assume n is not negative
int fact(int n)
{
    if (n == 0) return 1;
    return n * fact(n-1);
}

int fact_iter(int n)
{
    if (n == 0) return 1;
    int k = 1;
    for (int i = 1; i <= n; i++ ){
        k *= i;
    }
    return k;
}

// Return whether the array of size n contains the target
bool contains(const int a[], int n, int target)
{
    if (n <= 0)
        return false;
    if (a[0]==target)
        return true;
    return contains(a+1, n-1, target);
}

bool contains_iter(const int a[], int n, int target)
{
    for (int i = 0; i<n; i++){
        if (a[i]==target) {
            return true;
        }
    }
    return false;
}

void merge(int a[], int b, int mid, int e)
{
    // Assume we can implement this function such that we can merge 2 sorted passes within e computations
    // e.g. int a[] = {1, 3, 5, 2, 4, 6}, merge(a, 0, 3, 6), we get a[] = {1, 2, 3, 4, 5, 6}
}

// Sort the array elements a[b] through a[e-1]
void MergeSort(int a[], int b, int e)
{
    if (e - b > 1){
        int mid = (b+e)/2;
        MergeSort(a, b, mid);
        MergeSort(a, mid, e);
        merge(a, b, mid, e);
    }
}

// Return a^b
// Assume b is a nonnegative integer
int expon(int a, int b)
{
    if (b == 0) return 1;
    return a * expon(a, b-1);
}

int expon_fast(int a, int b)
{
    if (b == 0) return 1;
    if (b % 2 == 0){
        int m = expon_fast(a, b/2);
        return m * m;
    }else{
        return a * expon_fast(a, b-1);
    }
}

int fib(map<int, int>& m, int n)
{
    if ( m.find(n) == m.end() ) {
        int x, y;
        if (m.find(n-1) == m.end())
            x = fib(m, n-1);
        else
            x = m.find(n-1)->second;
        if (m.find(n-2) == m.end())
            y = fib(m, n-2);
        else
            y = m.find(n-2)->second;
        m[n] = x+y;
    }
    return m.find(n)->second;
}

//Only one disk can be moved at a time.
//Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
//No disk may be placed on top of a smaller disk.
void solveHanoi(int n, int source, int dest, int buffer)
{
    if (n == 1){
        cout << "Move disk " << n << " from tower " << source << " to " << dest << endl;
    } else{
        solveHanoi(n-1, source, buffer, dest);
        cout << "Move disk " << n << " from tower " << source << " to " << dest << endl;
        solveHanoi(n-1, buffer, dest, source);
    }
}

int main() {
    map<int, int> m;
    m[0]=1;
    m[1]=1;
    std::cout << fib(m,6) << endl;
    solveHanoi(3,1,2,3);
    return 0;
}
