
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        //const unsigned int M = 1000000007;
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(), horizontalCuts.end());
         sort(verticalCuts.begin(), verticalCuts.end());
        long long int maxh =0, maxv =0;;
  for (int i = 1; i < horizontalCuts.size(); i++)
  {    
      if (horizontalCuts[i] - horizontalCuts[i-1] > maxh) 
        maxh = horizontalCuts[i] - horizontalCuts[i-1];
  }
             
  for (int i = 1; i < verticalCuts.size(); i++)
  {    
      if (verticalCuts[i] - verticalCuts[i-1] > maxv) 
        maxv = verticalCuts[i] - verticalCuts[i-1];
  }
       // cout<<maxv;
        return (maxv*maxh) % 1000000007;
        
    }
};

