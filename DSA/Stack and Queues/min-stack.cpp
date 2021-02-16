class MinStack {
private:
    vector<pair<int, int>> minStack;
public:
    MinStack() {}
    void push(int x) {
        if(minStack.empty()) minStack.emplace_back(x,x);
        else minStack.emplace_back(x, min(minStack.back().second, x));
    }
    void pop() {
        minStack.pop_back();
    }
    int top() {
        return minStack.back().first;
    }
    int getMin() {
        return minStack.back().second;
    }
};