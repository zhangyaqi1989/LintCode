class MinStack {
public:
    MinStack() {
        // do intialization if necessary
    }

    /*
     * @param number: An integer
     * @return: nothing
     */
    void push(int number) {
        // write your code here
        // int mn = nums_.empty() ? number : min(number, mins_.top());
        int mn = number;
        if (!nums_.empty() && mins_.top() < number) mn = mins_.top();
        nums_.push(number);
        mins_.push(mn);
    }

    /*
     * @return: An integer
     */
    int pop() {
        // write your code here
        int top = nums_.top();
        nums_.pop();
        mins_.pop();
        return top;
    }

    /*
     * @return: An integer
     */
    int min() {
        // write your code here
        return mins_.top();
    }
    
private:
    stack<int> nums_;
    stack<int> mins_;
};
