stack<int> s;
stack<int> ms;

MinStack::MinStack() {
    while(!s.empty()) s.pop();
    while(!ms.empty()) ms.pop();
}

void MinStack::push(int x) {
    s.push(x);
    if(ms.empty()) ms.push(x);
    else{
        x = min(x,ms.top());
        ms.push(x);
    }
}

void MinStack::pop() {
    if(!s.empty())
    {
        s.pop();
        ms.pop();
    }
}

int MinStack::top() {
    if(!s.empty()) return s.top();
    else return -1;
}

int MinStack::getMin() {
    if(s.empty()) return -1;
    else{
        return ms.top();
    }
}

