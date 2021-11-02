/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int largestSumOfSubArrays1(int arr[],int n){
    int largest_sum =0;
    for(int i = 0;i<n;i++){
        for(int j =i;j<n;j++){
            int subarraySum =0;
            for(int k=i; k<=j;k++){
               
                subarraySum += arr[k];
               
                //cout<<arr[k]<<",";
            }
           largest_sum = max(largest_sum,subarraySum);
        }
    }
    
    return largest_sum;
}

int main()
{
   //int arr[] = {10,20,30,40,50,60};
   int arr[] = {-2,3,4,-1,5,-12,6,1,3};
   int n = sizeof(arr)/sizeof(int);
   
   cout<<"largestSumOfSubArrays1"<<endl
   <<largestSumOfSubArrays1(arr,n);
    return 0;
}

