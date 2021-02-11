class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> pushStack;
    stack<int> popStack;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        pushStack.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        ensureThereAreItemsInPopStack();
        if(!popStack.empty())  {
            int front = popStack.top();
            popStack.pop();
            return front;
        }
        return -1;
    }
    
    /** Get the front element. */
    int peek() {
        ensureThereAreItemsInPopStack();
        if(!popStack.empty()) return popStack.top();

        return -1;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return pushStack.empty() && popStack.empty();
    }

    void ensureThereAreItemsInPopStack() {
        if(popStack.empty()) populatePopStack();
    }
    void populatePopStack() {
        while(!pushStack.empty()) {
            popStack.push(pushStack.top());
            pushStack.pop();
        }
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