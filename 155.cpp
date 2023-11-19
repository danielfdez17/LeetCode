class MinStack {
private:
    vector<pair<int, int>>stack;
public:
    MinStack() {}
    
    void push(int val) {
        if (stack.empty()) stack.push_back({val, val});
        else stack.push_back({val, min(val, stack.back().second)});
    }
    
    void pop() {
        if (!stack.empty()) stack.pop_back();
        // throw error("Stack is empty!");
    }
    
    int top() {
        // if (!stack.empty()) 
        return stack.back().first;
        // thow error("Stack is empty!");
    }
    
    int getMin() {
        // if (!stack.empty()) 
        return stack.back().second;
        // throw error("Stack is empty!");
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