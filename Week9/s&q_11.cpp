int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int maxArea=0;
        int i=0;
        while(i<heights.size())
        {
             if(s.empty()||heights[i]>heights[s.top()])
                 s.push(i++);
            else
            {
                int top=s.top();
                s.pop();
                int area=heights[top]*((s.empty())?i:i-s.top()-1);
                maxArea=max(area,maxArea);
            }
        }
        while(!s.empty())
        {
            int top=s.top();
                s.pop();
                int area=heights[top]*((s.empty())?i:i-s.top()-1);
                maxArea=max(area,maxArea);
        }
        return maxArea;
    }