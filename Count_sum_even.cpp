#include <iostream>
#include<vector>

using namespace std;

int minvalue(int a, int b)
{
    //cout <<"a " <<a<<"  " <<b<<endl;
    return a < b ? a : b ;
}

int trap(const vector<int> &A)
{
  int n = A.size();

  int indx =-1;
  int sum=0;
  vector <int> oPf;
  vector <int> ePf;
  int cnt=0;
 
  oPf.resize(n);
  ePf.resize(n);
  ePf[0] = A[0];
 oPf[0] = 0;
  //int j=1, k=1;
  
  int Array_index=2;
  for (int i=1;i< n;i++)
  {
      if(i % 2 ==0)
      {
        ePf[i]= ePf[i-1] + A[i] ;
        oPf[i]= oPf[i-1];
        
      }
       else
      {
  //        cout<<"xx ff ========== "<<i<<endl;
        oPf[i]= oPf[i-1] + A[i] ;
        ePf[i]= ePf[i-1] ;
        
      }
  }
  int EB, OB, EA, OA;
/*  
  =========even 
2
2
8
8
=========odd
0
1
1
5
*/
  //2, 1, 6, 4
  for(int i=0;i<n;i++)
  {
      EB=ePf[i-1];
      OB=oPf[i-1];
      EA = ePf[n-1] - ePf[i];
      OA =oPf[n-1] - oPf[i];
      if(EB+OA == EA+OB)
      {
//          cout<<" i "<<i<<endl;
          cnt ++;
      }
      
  }
  
  return cnt;
}

int main()
{
 // vector<int> A = { -7, 1, 5, 2, -4, 3, 0 };
  //vector<int> A = {3, 7, 90, 20, 10, 50, 40};
  vector<int> A={2, 1, 6, 4};
  int B=9;
  int value =trap(A);
  cout << "value   " <<value<< endl; 
   
   return 0;
}
