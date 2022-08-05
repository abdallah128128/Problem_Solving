//problem Link: https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/F
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

    int n;
    cin>>n;
    assert(1<=n && n<=1000);
    int arr[n];

    for(int i=n; i>0; i--)
    {
        cin >>arr[i];
        assert(0<=arr[i] && arr[i]<=1e9);

    }
    for(int i=1;i<=n;i++){
        cout<<arr[i] <<" ";
    }
}
