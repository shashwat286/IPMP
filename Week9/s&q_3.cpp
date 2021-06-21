struct Queue { 
    stack<int> s1, s2; 
  
    void enQueue(int x) 
    { 
        while (!s1.empty()) { 
            s2.push(s1.top()); 
            s1.pop(); 
        } 
        s1.push(x); 

        while (!s2.empty()) { 
            s1.push(s2.top()); 
            s2.pop(); 
        } 
    } 

    int deQueue() 
    { 
        if (!s1.empty()) { 
            
           int x = s1.top(); 
        s1.pop(); 
              return x; 
        } 
        else
            return -1;
        
      
    } 
}; 
