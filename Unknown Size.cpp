//Problem Link: https://codeforces.com/group/T3p02rhrmb/contest/325686/problem/B
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
    int n; cin>>n; assert(1<=n && n<=1000000);
    vector<int>a(1);
    int counter=0;
    int index=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            counter++;
            a[index]=i;
            index++;
        }
    }
    cout<<counter<<endl;
    for(int i=0;i<index;i++){
        cout<<a[i]<<" ";
    }
  
}
