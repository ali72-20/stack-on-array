#include<iostream>
#include<stack>
using namespace std;
class Stack{
    int st[1000001];
    int top;
    int sz;
public:
    // cons init top and size
    Stack(){
        top = -1;
        sz = 0;
    }
    // check is there any elements in the stack
    bool isEmpty(){
        return top == -1;
    }
    // get the size of the stack
    int get_size(){
        return sz;
    }
    // insert elements in the stack
    void push(int x){
        top++;
        st[top] = x;
        sz++;
    }
    // get the top element in the stack
    int Top(){
        if(isEmpty()){
            exit(1);
        }
        return st[top];
    }
    // remove the top of the stack
    void pop(){
        if(isEmpty())
            exit(1);
        top--;
        sz--;
    }

};
int main(){
    Stack st;
    st.push(10);
    st.push(11);
    st.push(14);
    st.push(21);
    cout << st.get_size() << '\n';
    cout << st.Top() << '\n';
    st.pop();
    cout << st.get_size() << '\n';
    cout << st.Top() << '\n';
    return 0;
}