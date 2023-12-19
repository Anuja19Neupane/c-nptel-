#include <iostream>
using namespace std;
class Stack {
    private:
    char data_[10]; //_indicate that the identifier is a keyword, 
                    //class member, or variable name.
    int top_;
    public: Stack (): top_(-1) {} // -1 indicates stack is empty
    int empty () {return (top_ == -1);} // stack is a constructor
                                    // it initializes top_ to -1, indicating an empty stack
   
                        // returns true if the stack is empty
                        // (i.e., top_ is -1) and false otherwise.
    void push(char x) {data_[++top_] = x;}
    void pop() {--top_;}
    char top () {return data_[top_];}
    };
    
int main (){
    char str[10]="ABCDE";
    Stack s; // init by Stack ::Stack() call
    for(int i=0; i<5;++i) s.push(str[i]);
    while(!s.empty()) {cout << s.top(); s.pop();}
    }
    
    
    
