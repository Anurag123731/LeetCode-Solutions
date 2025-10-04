class MyQueue {
public:
    stack<int>st;
    stack<int>st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
       while(st.size()>0){
        st2.push(st.top());
        st.pop();
       } 
       int x=st2.top();
       st2.pop();
       while(st2.size()>0){
        st.push(st2.top());
        st2.pop();
       }
       return x;
    }
    
    int peek() {
        while(st.size()>0){
        st2.push(st.top());
        st.pop();
       } 
       int x=st2.top();
       while(st2.size()>0){
        st.push(st2.top());
        st2.pop();
       }
       return x;
    }
    
    bool empty() {
        if(st.size()==0) return true;
        return false;
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
