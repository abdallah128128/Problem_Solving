//problem Link: https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/I
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

    int t; cin>>t;  assert(1<=t && t<=100);

    while(t){
    int n;
    cin>>n;
    assert(0<n && n<1e3);
    int arr[n];

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        assert(-1e6<=arr[i] && arr[i]<=1e6);
    }

    int minRes=2e7;

    for(int i=1;i<n;i++){
        for(int j=i+1 ; j<=n;j++){
            if( (arr[i]+arr[j]+j-i) < minRes )
                minRes = (arr[i]+arr[j]+j-i);
        }
    }
    cout<< minRes << endl;
    t--;
    }
}
