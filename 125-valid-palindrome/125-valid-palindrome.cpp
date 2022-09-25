class Solution {
public:
    bool isPalindrome(string s) {
for(int i=0;i<s.size();i++){
            if(isalnum(s[i])==false){
                s.erase(i,1);
               i--;
            }
        }
         transform(s.begin(),s.end(),s.begin(),::tolower);
        string check = s;
        reverse(check.begin(),check.end());
        return (check==s);
     
       
    }
};