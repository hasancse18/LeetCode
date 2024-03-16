 stack<int>input,output;
    int p=0;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty()) p=x;

        input.push(x);
    }
    
    int pop() {
        if(output.empty())
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int x=output.top();
        output.pop();
        return x;
    }
    
    int peek() {
        if(output.empty()) return p;
        return output.top();
    }
    
    bool empty() {
     return input.empty() && output.empty();   
    }