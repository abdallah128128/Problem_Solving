//problem Link: https://codeforces.com/group/T3p02rhrmb/contest/326053/problem/H
#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
 
void selectionSort(int arr[], int n)
{
    int minIdx;
    for(int i=0; i<n-1; i++)
    {
        minIdx=i;
 
        for(int j= i+1; j<n; j++)
        {
            if(arr[j] < arr[minIdx])
            {
                minIdx=j;
 
            }
        }
        swap(arr[minIdx],arr[i]);
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
    }
    selectionSort(arr,n);
    printArr(arr,n);
 
 
}
