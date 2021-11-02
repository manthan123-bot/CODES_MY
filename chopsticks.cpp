/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int count_pairs(int arr[],int n,int D){
    int count =0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff = arr[j]-arr[i];
            if(diff<=D){
                count++;
                }
                else{
                    return count;
                }
            }
        }
        return count;
    }
    


int main()
{
    int arr[] = {1,3,-1,9,4};
    int n = sizeof(arr)/sizeof(int);
    int D =2;
    cout<<"Count of pairs is:"<<count_pairs(arr,n,D);
}
