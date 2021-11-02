/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> &v){
    // your code  goes here
    int n = v.size();
    bool flag;
    for(int times = 1; times<= n-1; times++){
        flag = false;
        for(int j = 0; j<=n-times-1;j++){
            if(v[j]>v[j+1]){
                flag = true;
                swap(v[j+1],v[j]);
            }
            
        }
        if(flag==false){
            return v;
        }
    }
    //return -1;
    
}

int main()
{
   vector < int > v;
    int n,num,i;
   //taking input from the command line (user)
    cout << " Enter the number of integers you want to sort : ";
    cin >> n;
    cout << "\n\n";

    for (i = 0; i < n; i++) {
        cout << "Enter number" << i + 1 << " :  ";
        cin >> num;
        v.push_back(num);

    }
    
    for (i = 0; i < n; i++){
        cout << v[i] << "  ";
    }
        cout<<endl;
    optimizedBubbleSort(v);
    
    for (i = 0; i < n; i++){
        cout << v[i] << "  ";
    }

}
