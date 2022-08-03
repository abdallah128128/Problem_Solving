//problem Link:https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/L
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

    int t;
    cin>>t;
    assert(1<=t && t<=5);

    while(t)
    {
        int n;
        cin>>n;
        assert(1<=n && n<=100);
        int arr[n];
        vector<int> res;
        for(int i=0 ; i<n; i++)
        {
            cin>>arr[i];
            assert(-1e5 <= arr[i] && arr[i]<= 1e5);
            res.push_back(arr[i]);
        }
        int round=n-1;
        while(round)
        {
            int subAL=n-round+1;
            int subArr[subAL];

            for(int i=0; i<round; i++)
            {
                int add=0;
                for(int j=0; j<subAL; j++)
                {
                    subArr[add]=arr[i+add];
                    add++;
                }
                int maxm= *max_element(subArr, subArr + subAL);
                res.push_back(maxm);
            }
            round--;
        }

        for (auto i = res.begin(); i != res.end(); ++i)
            cout << *i << " ";
        cout<<endl;
        t--;
    }
}
