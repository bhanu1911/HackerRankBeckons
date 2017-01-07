#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
   int c1,c2,c3;
    c1=c2=c3=0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       if(arr[arr_i]<0)
         c1++;
       else if(arr[arr_i]==0)
         c2++;
       else if(arr[arr_i]>0)
         c3++;
    }
   double r1=(double) c1/n;
   double r2=(double) c2/n;
   double r3=(double) c3/n;
   cout<<r3<<endl;
   cout<<r1<<endl;
   cout<<r2<<endl;
    return 0;
}
