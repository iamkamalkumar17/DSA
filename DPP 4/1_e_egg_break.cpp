/*
    
    egg break problem
*/
#include<bits/stdc++.h>
using namespace std;

int solve(int e, int f)
{
    if(e == 1) return f;
    if(f == 0 || f == 1) return f;
    int mn = INT_MAX;

    for(int k = 1; k<=f; k++)
    {
        int breakk = solve(e-1, k-1);
        int unBreak = solve(e, f-k);

        int temp = 1 + max(breakk, unBreak); //worst case ke liye max kr rhe h;

        mn = min(mn, temp);

    }

    return mn;
}

int main()
{
    int e = 3;
    int f = 5;

    cout<<solve(e,f);
    
    
    return 0;
}
