//problem Link: https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/D
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
    assert(2<=n && n<=1000);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        assert(-1e5<=arr[i] && arr[i]<=1e5);
    }

    for(int i=0; i<n; i++)
    {

        if(arr[i]<=10)
        {
            cout<<"A[" <<i<<"] = "<<arr[i]<<endl;
        }
    }

}
