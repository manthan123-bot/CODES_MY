/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int defkin(int W, int H, vector<pair<int, int>> position)
{
   vector<int> a;
   vector<int>b;
   int M_H =0;
   int M_W = 0;
   a.push_back(0);
   b.push_back(0);
   
   for(int i=0;i<position.size();i++){
       a.push_back(position[i].first);
       b.push_back(position[i].second);
   }
   
   a.push_back(W+1);
   b.push_back(H+1);
   
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   
   for(int i=0;i<a.size()-1;i++){
       M_H = max(M_H,(a[i+1]-a[i])-1);
       M_W = max(M_W,(b[i+1]-b[i])-1);
   }
   
    return (M_W*M_H);
}