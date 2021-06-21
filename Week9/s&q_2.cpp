class Stack {
    
    queue<int> q1, q2;
    
public:
    
	void push(int x)
    {
        q2.push(x);
       while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }
  
    int pop()
    {
        if (q1.empty())
            return -1;
        int x=q1.pop();
		return x;
    }
  
    };
  
   