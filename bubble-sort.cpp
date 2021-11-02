/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int times=1 ; times<=n-1 ; times++){
        for(int j = 0 ; j<= n-times-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

int main()
{
   int arr[] = {5,4,-3,-2,-4,-8,-4};
   int n = sizeof(arr)/sizeof(int);
   bubble_sort(arr,n);
   
   for(auto x :arr ){
       cout<<x<<",";
   }
}
