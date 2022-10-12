class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> right;
        stack<pair<int, int>> s;
        for(int i = n-1; i>=0; i--){
            if(s.empty())
                right.push_back(heights.size());
            
            else if(s.top().first<heights[i])
                right.push_back(s.top().second);
            
            else{
                while(!s.empty() && s.top().first>=heights[i])
                    s.pop();
                
                if(s.empty())
                    right.push_back(heights.size());
                else
                    right.push_back(s.top().second);     
            }
            s.push({heights[i], i});
        }
        reverse(right.begin(), right.end());
        
         stack<pair<int, int>> s1;
       vector <int> left;
        
       for(int i=0; i<n ;i++){
       if(s1.empty())
       left.push_back(-1);
       
       else if(s1.top().first < heights[i])
       left.push_back(s1.top().second);
       
       else{
           while(!s1.empty() && s1.top().first >= heights[i]){
               s1.pop();
           }
           if(s1.empty())
           left.push_back(-1);
           
           else
           left.push_back(s1.top().second);
       }
       
       s1.push({heights[i], i});
    }
        
    
        vector<int> width;
        
        for(int i=0;i<right.size();i++){
            width.push_back(right[i]-left[i]-1);
        }
        
        int max=INT_MIN;
        for(int i=0;i<width.size();i++){
            int temp = width[i]*heights[i];
            if(temp>max)
                max = temp;
        }
        return max;
    }
};