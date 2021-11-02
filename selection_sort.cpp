/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void selection_sort(int arr[],int n){
    
    
    for(int pos=0; pos<=n-2;pos++){
        int current = arr[pos];
        int min_pos = pos;
        for(int j=pos;j<n;j++){
            if(arr[j]<arr[min_pos]){
                min_pos = j;
            }
            
        }
        swap(arr[min_pos],arr[pos]);
        // Here arr[pos] not take current becuase we deal with the value which is at position
    }
}

int main()
{
    int arr[] = {4,3,2,5,1};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }
    
}
