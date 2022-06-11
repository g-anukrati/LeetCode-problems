class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n(nums.size()), sum(0);
        vector<int> preSumL(n+1), preSumR(n+1);
        preSumL[0] = 0;
        preSumR[0] = 0;
        unordered_map<int,int> mpL,mpR;
        mpL[0] = 0;
        mpR[0] = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            preSumL[i+1] = sum;
            mpL[sum] = i+1;
        }
        sum = 0;
        for(int i = n-1, j = 1; i >= 0; i--, j++){
            sum += nums[i];
            preSumR[j] = sum;
            mpR[sum] = j;
        }
        // for(int i : preSumL)
        //     cout<<i<<" ";
        // cout<<"\n";
        // for(int i : preSumR)
        //     cout<<i<<" ";
        // cout<<"\n";
        int ans(INT_MAX), l = 0, r = n;
        // while(l <= r){
        //     int m = l + (r-l)/2;
        //     cout<<preSumL[m]<<" \n";
        //     if(preSumL[m] == x){
        //         ans = min(mpL[x],ans);
        //         r = m-1;
        //     }
        //     else if(preSumL[m] > x)
        //         r = m-1;
        //     else{
        //         int dif = x - preSumL[m];
        //         if(mpR.find(dif) != mpR.end() && m + mpR[dif] <= n){
        //             // cout<<preSumL[m]<<" \n";
        //             ans = min(mpL[preSumL[m]] + mpR[dif], ans);
        //             cout<<"ans = "<<ans<<" \n";
        //         }
        //         l = m+1;
        //     }
        // }
        // l = 0, r = n;
        // while(l <= r){
        //     int m = l + (r-l)/2;
        //     if(preSumR[m] == x){
        //         ans = min(mpR[x],ans);
        //         r = m-1;
        //     }
        //     else if(preSumR[m] > x)
        //         r = m-1;
        //     else{
        //         int dif = x - preSumR[m];
        //         if(mpL.find(dif) != mpL.end() && m + mpL[dif] <= n)
        //             ans = min(mpR[preSumR[m]] + mpL[dif], ans);
        //         l = m+1;
        //     }
        // }
        
        for(int i = 0; i < n+1; i++){
            if(preSumL[i] > x)
                break;
            int dif = x - preSumL[i];
            if(mpR.find(dif) != mpR.end() && i + mpR[dif] <= n)
                ans = min(i + mpR[dif],ans);
        }
        if(ans == INT_MAX){
            for(int i = 0; i < n+1; i++){
                if(preSumR[i] > x)
                    break;
                int dif = x - preSumR[i];
                if(mpL.find(dif) != mpL.end() && i + mpL[dif] <= n)
                    ans = min(i + mpL[dif],ans);
            }
        }
        if(ans == INT_MAX)
            ans = -1;
        return ans;
    }
};