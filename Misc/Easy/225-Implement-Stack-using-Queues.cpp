

#include <queue>
using namespace std;

class MyStack {
    queue<int> qu;
public:
    MyStack() {
    }

    void push(int x) {
        qu.push(x);
    }

    int pop() {
        int size = qu.size();
        int i = 0;
        while (++i < size) {
            qu.push(qu.front());
            qu.pop();
        }
        int res = qu.front();
        qu.pop();
        return res;
    }

    int top() {
        return qu.back();
    }

    bool empty() {
        return qu.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */