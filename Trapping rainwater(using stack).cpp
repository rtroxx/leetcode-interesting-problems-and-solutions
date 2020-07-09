int trap(vector<int>& height) {
        stack<int> s;
        int ans=0;
        for(int i=0;i<height.size();i++){
            while(!s.empty() and height[i]>height[s.top()]){
                int p=s.top();
                s.pop();
                if(s.empty())
                    break;
                int d=i-s.top()-1;
                int r_h=min(height[i],height[s.top()])-height[p];
                ans+=d*r_h;
                
            }
            s.push(i);
        }
        return ans;
        
    }
