//Problem Link: https://codeforces.com/group/T3p02rhrmb/contest/324952/problem/E
#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
 
int main()
{
    init();
 
    int n; cin>>n; assert(1<=n && n<=5000);
    int a[n];
    int min=1000000000; int max=1;
    for(int i=0 ; i<n;i++){
        cin>>a[i];
        assert(a[i] >=1 && a[i]<=1000000000);
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
    int cou=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]+a[j] == min+max) cou++;
        }
    }
    cout<<cou;
 
}
