
#include<bits/stdc++.h>
using namespace std;



class Solution{
    public:
    // arr: input array
    // n: size of array

    long long maxSubarraySum(int arr[], int n){

        
        long long sum=0, mx=arr[0];

        for(int i=0; i<n;i++){
            sum = sum+arr[i];
            mx = max(mx, sum);
            
            if(sum<0){
                sum = 0;
            }
        }
        return mx;
        
        
    }
};




int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
