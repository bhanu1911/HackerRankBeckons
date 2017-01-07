#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int s1=0;
    int s2=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
          cin >> a[i][j];
       }    
    }
    
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
        if (i==j)
          s1=s1+a[i][j];
       }
    }
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
           if(i+j==n-1)
               s2=s2+a[i][j];
       }
    }
    
        int res;
        if(s1>s2)
            res=s1-s2;
        else
            res=s2-s1;
           cout<<res;
    return 0;
}
