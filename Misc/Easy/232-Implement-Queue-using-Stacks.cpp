
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> s1, s2;
    void move(stack<int> &from, stack<int> &to) {
        while (!from.empty()) {
            to.push(from.top());
            from.pop();
        }
    }
public:
    MyQueue() {
    }

    void push(int x) {
        move(s1, s2);
        s1.push(x);
        move(s2, s1);
    }

    int pop() {
        int value = s1.top();
        s1.pop();
        return value;
    }

    int peek() {
        return s1.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */