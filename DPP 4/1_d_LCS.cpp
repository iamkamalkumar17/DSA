/*
    
    longest common subsequence
    subsequence can be discontinuous unlike substring substring that can not be discontinous
*/
#include<bits/stdc++.h>
using namespace std;
int lcs(string x, string y, int n, int m)
{
    if(n==0 || m==0) return 0;     //base condition

    if(x[n-1] == y[m-1])
    {
        int ret  = 1 + lcs(x, y, n-1, m-1);
        return ret;
    }
    else{
        int firstRemove = lcs(x,y,n-1, m);
        int secondRemove = lcs(x,y,n, m-1);
        return max (firstRemove, secondRemove);
    }
}

int main()
{
    string x = "abcdgh";
    string y = "abedfhr";
    int n = x.size();
    int m = y.size();
    cout<<lcs(x,y,n,m);
    
    return 0;
}
