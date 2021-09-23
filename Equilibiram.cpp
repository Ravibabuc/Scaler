#include <iostream>
#include<vector>

using namespace std;

int trap(const vector<int> &A)
{
  int n = A.size();

  int total=0;
 
  int Ls;
  int Rs;
  int cnt=0;
int cntz=0;
  for (int i =0;i < n;i++)
  {

      total += A[i];
       if(A[i]== 0)
      {
          cntz ++;
      }

  }
   if(n == cntz)
   return 0;

 // cout <<"total"<< total<<endl;
  Ls= A[0];
  for (int i =1;i < n-1;i++)
  {
      
      Rs= total-A[i]-Ls;   
   //   cout <<"LS"<< Ls<<endl;
     // cout <<"Rs"<< Rs<<endl;
      if (Ls==Rs)
      {
          
         return i;
      }
      Ls+= A[i];
  }
  
  
 
  
  return -1;
}

int main()
{
 // vector<int> A = { -7, 1, 5, 2, -4, 3, 0 };
  vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int value =trap(A);
  cout << "value   " <<value<< endl; 
   
   return 0;
}
