class MinStack {
public:
  stack<int> stk;
    multiset<int> ms;
    MinStack() {
    }
    
    void push(int val) {
        stk.push(val);
        ms.insert(val);
    }
    
    void pop() {
         ms.erase(ms.find(stk.top()));
        stk.pop();
    }
    
    int top() {
         return stk.top();
    }
    
    int getMin() {
        return *ms.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */