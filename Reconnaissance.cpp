//Problem Link: https://codeforces.com/group/T3p02rhrmb/contest/324952/problem/D

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
 
    int n; cin>>n; assert(1<=n && n<=1000);
    int a[n];
    int d; cin>>d; assert(1<=n && n<=1000000000);
 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    int cou=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && a[i]>=a[j] && a[i]-a[j]<=d) cou++;
            else if(i!=j && a[i]<a[j] && a[j]-a[i]<=d) cou++;
        }
 
    }
    cout<<cou;
 
}
