//problem Link:https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/M
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    assert(2<=n && n<=1e3);
    int arr[n];
    int maxIndx=0;
    int maxNum=INT_MIN;
    int minIndx=0;
    int minNum=INT_MAX;

    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
        assert(-1e5<=arr[i] && arr[i]<=1e5);

        if(arr[i] > maxNum)
        {
            maxNum = arr[i];
            maxIndx=i;  
        }
        if(arr[i] < minNum)
        {
            minNum=arr[i];
            minIndx=i;
        }
    }

    swap(arr[minIndx] , arr [maxIndx]);
    for(int i=0 ; i<n;i++)
        cout<<arr[i]<<" ";

}
