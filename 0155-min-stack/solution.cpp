class MinStack {
public:
stack<int>st;
stack<int>s;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(s.size()==0 || s.top()>=val)  s.push(val);
        else  s.push(s.top());
        
    }
    
    void pop() {
        st.pop();
        s.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return s.top();
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
