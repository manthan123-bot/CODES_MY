/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  char route[1000];
  cin.getline(route,1000,'\n');
  
  int x=0;
  int y=0;
  
  for(int i=0;route[i]!='\0';i++){
      switch(route[i]){
          case 'N' : y++;
                    break;
          case 'S' : y--;
                    break;
          case 'E' : x++;
                    break;
          case 'W' : x--;
                    break;
      }
       
  }
  cout<<"Coordinates of X and Y: "<<x<<","<<y<<endl;
  
  //1st Quadrant
  if(x>=0 and y>=0){
      while(y--){
          cout<<'N';
      }
      while(x--){
          cout<<'E';
      }
  }
  
  //2nd Quadrant
  if(x<=0 and y>=0){
      while(y--){
          cout<<'N';
      }
      while(x++){
          cout<<'W';
      }
  }
  
  //3rd Quadrant
  if(x<=0 and y<=0){
      while(y++){
          cout<<'S';
      }
      while(x++){
          cout<<'W';
      }
  }
  
  //4th Quadrant
  if(x>=0 and y<=0){
      while(y++){
          cout<<'S';
      }
      while(x--){
          cout<<'E';
      }
  }
  
 
  
}