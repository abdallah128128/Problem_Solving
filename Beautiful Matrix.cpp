//Problem Link: https://codeforces.com/group/T3p02rhrmb/contest/323047/problem/F
#include <iostream>
using namespace std;
 
int main()
{
    int n ;
    cin >> n ;
 
    int arr [n][n];
    for(int i=0 ; i < n ;i++ )
    {
        for(int j=0 ; j<n ;j++)
        {
            cin >> arr[j][i] ;
        }
    }
        int c=0;
        for(int i=0 ; i < n ;i++ ){
                for(int j=0 ; j < n ;j++ ){
                int f=1;
                    for(int k=0 ; k<n ;k++)
                    {
                    if(arr[i][k]== arr[k][j]) continue;
                    else {f=0; break;}
 
                    }
            if(f==1) c++ ;
 
        }
 
        }
    cout << c ;
 
}
