//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> ans; 
    
    long long factorial(long long num){
     if(num==1)
        return 1;
        
    return num*factorial(num-1); 
    
    }
    
    vector<long long> compare(long long N, long long temp){
         long long var= factorial(temp);
         if(var<=N){
             ans.push_back(var);
         }
         else{
             return ans;
         }
         temp++;
         return compare(N,temp);
        
    }
    
    vector<long long> factorialNumbers(long long N)
    {
       return compare(N,1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends