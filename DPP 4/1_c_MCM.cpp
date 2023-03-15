/*
    matrix chain multiplication recursion
    
*/
#include<bits/stdc++.h>
using namespace std;
    
    int solve (int  arr[], int i , int j)
    {
        //i == j, array size = 1; i>j; array size = 0: not possible
        if (i >= j ) return 0;
        int min_cost = INT_MAX;
        for(int k = i; k<= j-1; k++)
        {
            int temp = solve(arr,i,k) + solve(arr,k+1, j) + (arr[i-1]*arr[k]*arr[j]);
            min_cost = min(temp, min_cost);
        }
        return min_cost;
    }

int main()
{
   int arr[] = {20,30,40,50,10};
   int n = 5;
   int ans = solve(arr, 1, n-1);
   cout<<ans<<endl;
}