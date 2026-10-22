/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

struct Node{
    int value;
    Node* next;
};

void print(Node*& top){
    Node* current = top;
    while(current){
        cout << current->value <<" ";
        current = current->next;
    }
}

void push(Node*& top, int value){
    top = new Node{value, top};
    cout << "pushed "<<value<<endl;
}

void pop(Node*& top){
    if (!top) {cout<<"empty"<<endl; return;}
    Node* temp = top;
    top = top->next;
    cout << "popped"<<temp->value <<endl;
    delete temp;
}

int peek(Node* top){
    if (!top){cout<<"empty"<<endl; return 0;}
    return top->next->value;
}

int main(){
    
    // const int cap = 100;
    // int arr[cap] = {};
    // int top = -1;
    
    // //push 
    // if (top != cap-1) stack[++top] = 10;
    
    // //top
    // if (top != -1) top--;
    // return 0;
    
    //==============================
    
    Node* top = new Node{10,nullptr};
    push(top, 19);
    push(top, 23);
    push(top,42);
    print(top);
    
}