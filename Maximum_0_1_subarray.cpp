/*
Contiguous Array

Given an array of integers A consisting of only 0 and 1.

Find the maximum length of a contiguous subarray with equal number of 0 and 1.


Input Format

The only argument given is the integer array A.

Output Format

Return the maximum length of a contiguous subarray with equal number of 0 and 1.

Constraints

1 <= length of the array <= 100000
0 <= A[i] <= 1

For Example

Input 1:
    A = [1, 0, 1, 0, 1]
Output 1:
    4
    Explanation 1:
        Subarray from index 0 to index 3 : [1, 0, 1, 0]
        Subarray from index 1 to index 4 : [0, 1, 0, 1]
        Both the subarrays have equal number of ones and equal number of zeroes.

Input 2:
    A = [1, 1, 1, 0]
Output 2:
    2

*/

#include <iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int minValue(int a, int b)
{
    return a < b ? a: b;
}

int maxValue(int a, int b)
{
    return a > b ? a: b;
}

int get_count(vector<int> &A,int k, int n)
{
    int Cntz=0;
    int CntOne=0;
    int SubAr=0;
    

 //0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1
 
  for(int p=0;p<n;p++)
  {
    for(int i =0;i<n;i++)
    {
     
         //cout <<"i ="<<i<<endl;
          CntOne=0;
          Cntz=0;
          for(int j=p;j<n-i;j++)
          {
          // cout <<"j ="<<j<<endl;
            //  cout <<"A[j]  ="<<A[j] <<endl;
            if(A[j] == 0 )
            {
              Cntz ++;
            }
            if(A[j] == 1)
            {
                
                CntOne ++;
            }
          }
          if(Cntz == CntOne)
          {
              SubAr =maxValue(SubAr, CntOne + Cntz );
              
          }
    } 
    }
    
 
    return SubAr;
    
}

int Solve(vector<int> &A)
{
  int n =A.size();
  int cnt=0;
  /*for(int i=0;i< n;i++)
  {*/
      cnt =  get_count(A,0, n) ;
     
  //}
  return cnt;  
  
}

int main()
{
      int C;
      vector<int> A ={0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1};
      //vector<int> A={0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1};
      C =Solve(A);
      cout << "value   " <<C<< endl; 
      return 0;
}
