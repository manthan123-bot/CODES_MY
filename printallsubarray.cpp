/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void printAllSubArrays(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j =i;j<n;j++){
            for(int k=i; k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}

int main()
{
   int arr[] = {10,20,30,40,50,60};
   int n = sizeof(arr)/sizeof(int);
   
   printAllSubArrays(arr,n);
    return 0;
}
