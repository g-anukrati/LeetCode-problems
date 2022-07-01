class Solution {
public:
         static bool comp(vector<int> a, vector<int> b)
       {
        return a[1]>b[1] ;
          
        }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
   
        sort(boxTypes.begin(), boxTypes.end(), comp); 
        int result=0;
        for (int i=0; i<boxTypes.size(); i++){
          int  x = min(boxTypes[i][0], truckSize);
            truckSize = truckSize- x;
            result += x * boxTypes[i][1];
            if (!truckSize)
                break;
        }
        return result;
    
    }
};