class MinStack {
public:
    stack<int> stack1, stack2;
    MinStack() {
        
    }
    
    void push(int val) {
        stack1.push(val);
        if(stack2.empty()){
            stack2.push(val);
            return;
        }
        if(val < stack2.top()){
            stack2.push(val);
        }
        else{
            stack2.push(stack2.top());
        }
    }
    
    void pop() {
        if(!stack1.empty() && !stack2.empty()){
            stack1.pop();
            stack2.pop();
        }
    }
    
    int top() {
        return stack1.top();
    }
    
    int getMin() {
        return stack2.top();
    }
};
