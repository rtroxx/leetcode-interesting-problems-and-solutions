int trap(vector<int>& height) {
        if(height.size()==0)return 0;
        int ans=0;
        vector<int> lh(height.size()),rh(height.size());
        lh[0]=height[0];
        for(int i=1;i<height.size();i++)
            lh[i]=max(lh[i-1],height[i]);
        rh[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--)
            rh[i]=max(rh[i+1],height[i]);
        for(int i=0;i<height.size();i++)
            ans+=abs(min(rh[i],lh[i])-height[i]);
        return ans;  
    }
