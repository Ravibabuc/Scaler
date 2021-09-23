#include <iostream>
#include<vector>

using namespace std;

int minvalue(int a, int b)
{
    //cout <<"a " <<a<<"  " <<b<<endl;
    return a < b ? a : b ;
}

int trap(const vector<int> &A,int B)
{
  int n = A.size();

  int indx =-1;
  int sum=0;
  vector <int> Pf;
  Pf.resize(n);
  Pf[0] = A[0];
  for (int i=1;i< n;i++)
  {
      Pf[i]= Pf[i-1] + A[i] ;
  }
  
  sum = Pf[B-1];
  indx =0;
  //cout<<" sum "<<sum<<endl;
  for (int i=1;i< n-B+1;i++)
  {
  
    //cout<<" sum "<<sum<<endl;   
   // cout<<" Pf[i+B] "<<Pf[i+B-1]<<endl; 
   // cout<<"  Pf[i-1] "<< Pf[i-1]<<endl; 
 //   cout<<" A[i] "<<A[i]<<endl; 
     int sum2 = Pf[i+B-1]- Pf[i-1];
    // cout<<" sum2 dd "<<sum2<<endl; 
    // cout<<" i "<<i<<endl; 
     if(sum >sum2)
     {
         sum = sum2;
    //     cout<<" sum dd "<<sum<<endl;   
         indx = i;
     }
  }
  
 /* for (int i=0;i< n;i++)
  {
      cout<<Pf[i]<<endl;
  }
  cout<<endl;*/
  
  return indx;
}

int main()
{
 // vector<int> A = { -7, 1, 5, 2, -4, 3, 0 };
  //vector<int> A = {3, 7, 90, 20, 10, 50, 40};
  vector<int> A={20, 3, 13, 5, 10, 14, 8, 5, 11, 9, 1, 11 };
  int B=9;
  int value =trap(A, B);
  cout << "value   " <<value<< endl; 
   
   return 0;
}
