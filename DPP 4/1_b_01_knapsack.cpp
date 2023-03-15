//0-1 knapsack  
// given n items, each item has a certain value and weight. we have to maximize the value 
// of the objects we can accommodate in a bad of weight w. idea: for each 
// item, we have two choices, either to incluse it or not. 

#include <bits/stdc++.h>
using namespace std;


int knapsack(vector<int> ww, vector<int> vv, int w, int n){
    
    if(n == 0 || w == 0){
        return 0;
    }

    if(ww[n-1] <= w){
        int inc = vv[n-1] + knapsack(ww,vv, w-ww[n-1],n-1);
        int ninc = knapsack(ww,vv,w,n-1);

        return max(inc, ninc);
    }
    else{
        return knapsack(ww,vv, w, n-1);
    }

}

int main(){

    vector<int> weight = {15,2,15,55};
    vector<int> val = {20,66,1,20};
    
    int w = 20;
    int n = weight.size();

    int ret = knapsack(weight,val,w,n);

    cout<<ret<<endl;
}
