// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
bool isMajority(int a[], int size, int ele)
{
    int count = 0;
    for (int i = 0; i < size; i++)
 
        if (a[i] == ele)
            count++;
 
    if (count > size / 2)
        return 1;
 
    else
        return 0;
}
int majorityElement(int a[], int size)
{
        int count=0, ele=0;
        for(int i=0; i<size;i++){
            if(count==0){
                ele=a[i];
            }
            if(ele ==a[i]){
                count+=1;
            }
            else{
                count-=1;
            }
        }
        
           if (isMajority(a, size, ele)){
               return ele;
           }
    
 
    else
        return -1;
    // your code here
        
}

// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends