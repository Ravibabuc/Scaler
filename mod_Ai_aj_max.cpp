#include <iostream>
#include<vector>

using namespace std;

int solve(vector<int> &A) 
{
  int n = A.size();
  cout <<"n ="<<n<<endl;
  int rem=0;
  
  //int x= 1 %0;
 // cout <<"x ="<<x<<endl;
  
  for (int i =0;i<n;i++)
  {
      for(int j =0;j< n;j++)
      {
        
        cout <<"i "<<i<<" "<<j<<endl;  
        cout <<"A[i] "<<A[i]<<" "<<A[j]<<endl;
        if(A[j] !=0 )
        {
        if(rem < A[i] %A[j])
        {
            rem =  A[i] %  A[j];
        }
        }
      }
  }
  return rem;
}

int main()
{
  vector<int> A = {0, 2,3, 4, 5, 6, 7,8, 9, 10};
  int value =solve(A);
  cout << "value   " <<value<< endl; 
   
   return 0;
}
