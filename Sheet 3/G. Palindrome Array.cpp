//problem Link:https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/G
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
    assert(1<=n && n<=1e5);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
        assert(1<=arr[i] && arr[i]<=1e9);

    }
    int front=0 , back=n-1;
    bool isPa=true;
    while(front < back){
        if(arr[front] != arr[back]){
            isPa=false;
            break;
        }
        front++;
        back--;
    }

    if(isPa)
        cout<<"YES";
    else
        cout<<"NO";
}
