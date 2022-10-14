class Solution {
public:
    int trap(vector<int>& height) {
           int n= height.size();
        vector<int> maxl;
        vector<int> maxr(n);
        int ans=0;
     
        maxl.insert(maxl.begin() + 0,height[0]);
        for(int i = 1; i < n; i++){
                maxl.push_back(max(height[i],maxl[i-1]));
        }
        maxr[n - 1] = height[n - 1];

        for (int i = n - 2; i >= 0; i--)
            maxr[i] = max(maxr[i + 1], height[i]);
      
      for (int i = 0; i < n; i++)
            ans += min(maxl[i], maxr[i]) - height[i];

        return ans;
    
    }
};