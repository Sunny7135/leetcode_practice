class MinStack {
public:
    stack<int>main;
    stack<int>minSt;
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        if(minSt.empty() || val <= minSt.top()){
            minSt.push(val);
        }else{
            minSt.push(minSt.top());
        }
    }
    
    void pop() {
        main.pop();
        minSt.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return minSt.top();
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