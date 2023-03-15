/*
    
    palindrome partitioning
*/
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int i , int j)
{
    while(i<j)
    {
        if(s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int solve(string s, int i, int j)
{
    if(i>=j) return 0;
    if(isPalindrome(s, i, j) == true) return 0;

    int ans = INT_MAX;
    for(int k = i; k<=j-1; k++)
    {
        int temp = solve(s, i, k) + solve(s, k+1, j) + 1;
        ans = min(ans, temp);
    }
    return ans;
}

int main()
{
    string s = "kamal";
    int ret = solve(s, 0, 4);
    cout<<ret;   
    
    return 0;
}