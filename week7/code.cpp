#include <stack>
#include <queue>
#include <iostream>
using namespace std;

class Stack{
public:
    Stack():m_size(0){};
    int getTop();
    int getMin();
    void doPush(int item);
    void doPop();
    bool isEmpty(){return m_size==0;};
private:
    int m_size;
    stack<int> m_itemStack;
    stack<int> m_minStack;
};

int Stack::getTop(){
    return m_itemStack.top();
}

int Stack::getMin(){
    return m_minStack.top();
}

void Stack::doPush(int item){
    m_itemStack.push(item);
    if (m_size>0) {
        int min_so_far = m_minStack.top();
        m_minStack.push(min_so_far<item?min_so_far:item);
    }else{
        m_minStack.push(item);
    }
    m_size++;
}

void Stack::doPop(){
    m_itemStack.pop();
    m_minStack.pop();
    m_size--;
}

class Queue{
public:
    Queue():m_size(0){};
    int getFront();
    void doPush(int item);
    void doPop();
    bool isEmpty(){return m_size==0;};
private:
    int m_size;
    stack<int> m_newStack;
    stack<int> m_oldStack;
    void shiftStacks();
};

int Queue:: getFront(){
    shiftStacks();
    return m_oldStack.top();
}

void Queue::doPush(int item){
    m_newStack.push(item);
    m_size++;
}

void Queue::doPop(){
    shiftStacks();
    m_oldStack.pop();
    m_size--;
}

void Queue::shiftStacks(){
    if (m_oldStack.size()==0) {
        while(m_newStack.size()>0){
            m_oldStack.push(m_newStack.top());
            m_newStack.pop();
        }
    }
}

int main(){
    Stack a;
    a.doPush(5);
    a.doPush(6);
    a.doPush(8);
    a.doPush(3);
    a.doPop();
    cout << "top: "<<a.getTop()<< "min: "<<a.getMin();
    return 0;
}


