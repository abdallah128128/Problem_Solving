//problem link: https://codeforces.com/group/cSWqsVAlXN/contest/390769/problem/J
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
 
    int n,c;
    cin>>n; assert(1<=n && n<=100000);
    int counter=0;
    int maxm=0;
    for(int i=0;i<n;i++){
        cin>>c; assert(0<=c&&c<=5);
        if(c !=0){
          counter++;
        }
        else{
            if(counter>maxm){
                maxm=counter;
                counter=0;
            }
            counter=0;
        }
    }
 
    if(maxm ==0 && counter ==0)
        cout<<"Bad Luck";
    else if(maxm >= counter )
        cout<<maxm;
    else
        cout<<counter;
}