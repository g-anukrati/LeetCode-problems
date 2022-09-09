class Solution {
public:
    bool isPowerOfTwo(int n) {
    /*  kernighan's algo
    int count=0;
        while(n!=0){
            int rsbm=n&-n;
            n-=rsbm;
            count++; 
        }
        return count==1;
        */
        long i=1;
        while(i<n){
            i*=2;
        }
        return i==n;
        
    }
};