class Solution {
public:
    // full recursion
   void solve(vector<char>& s, int left, int right){
        //base case
        if(left>= right){
            return;
        }
        swap(s[left++], s[right--]);
        solve(s, left, right);
    }
    
    
    void reverseString(vector<char>& s) {
       solve(s,0,s.size()-1);
    }
};
