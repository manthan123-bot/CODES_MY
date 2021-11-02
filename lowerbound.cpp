/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int s=0 , e = A.size()-1;
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if(A[mid]<Val){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        if(A[s]>=Val){
            return s;
        }
        
    }
    return -1;
    
    
}

int main()
{
    vector<int> vec{ -1,-1,2,3,5};
    int val;
    cout<<"Val that to be search: ";
    cin>>val;
    
    int x = lowerBound(vec,val);
    cout<<x<<endl;
    cout<<vec[x];
   
 
    return 0;
}

