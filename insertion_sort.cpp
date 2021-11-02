/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    //We run this loop for n-1 times
    for(int i =1;i<=n-1;i++){
        int current = arr[i];
        int previous = i-1;
        
        while(previous>=0 & arr[previous]>current){
            arr[previous+1] = arr[previous];
            previous = previous-1;
        }
        arr[previous+1] = current;
    }
}

int main()
{
    int arr[] = {2,65,7,4,1,-2,1,-3};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }
}
