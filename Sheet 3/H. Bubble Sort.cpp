//problem Link:https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/H
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}


void pubbleSort(int arr[], int n)
{

    for(int i=0; i<n-1; i++)
    {
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

void printArr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    init();

    int n;
    cin>>n;
    assert(0<n && n<1e3);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        assert(-100<=arr[i] && arr[i]<=100);
    }

    pubbleSort(arr,n);
    printArr(arr,n);


}
