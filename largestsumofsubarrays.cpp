/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int largestSumOfSubArrays(int arr[],int n){
    int temp[100] = {0};
    int result[100] = {0};
    int l=0;
    for(int i = 0;i<n;i++){
        for(int j =i;j<n;j++){
            for(int k=i; k<=j;k++){
               
                temp[l] = temp[l]+arr[k];
               
                //cout<<arr[k]<<",";
            }
            cout<<"The sum of "<< l<<" subarray "<<temp[l];
             l++;
            cout<<endl;
        }
    }
    
    for(l=1;l<n*n;l++){
        if(temp[0] < temp[l]){
            temp[0] = temp[l];
        }
    }
    return temp[0];
}

int main()
{
   //int arr[] = {10,20,30,40,50,60};
   int arr[] = {-2,3,4,-1,5,-12,6,1,3};
   int n = sizeof(arr)/sizeof(int);
   
   cout<<"largestSumOfSubArrays"<<endl
   <<largestSumOfSubArrays(arr,n);
    return 0;
}
