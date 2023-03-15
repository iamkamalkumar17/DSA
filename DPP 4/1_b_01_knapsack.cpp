//0-1 knapsack  
// given n items, each item has a certain value and weight. we have to maximize the value 
// of the objects we can accommodate in a bad of weight w. idea: for each 
// item, we have two choices, either to incluse it or not. 

#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[], int val[], int w, int n)
{
    if(n==0 || w == 0) return 0;        //base condition

    if(wt[n-1] <= w)
    {
        int included = val[n-1] + knapsack(wt, val, w-wt[n-1], n-1);
        int notIncluded = knapsack(wt, val, w, n-1);
        return max(included, notIncluded);
    }
    if(wt[n-1] > w)
    {
        return knapsack(wt, val, w, n-1);
    }
}

int main()
{
    int wt[] = {1,3,4,5};
    int val[] = {1,3,5,7};
    int size = 4;
    int w = 7;
    cout<<knapsack(wt, val, w, size)<<endl;
    
    
    return 0;
}
