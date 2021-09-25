/*Sort the Unsorted Array

Problem Description

You are given an integer array A having N integers.

You have to find the minimum length subarray A[l..r] such that sorting this subarray makes the whole array sorted.



Problem Constraints

1 <= N <= 105

-109 <= A[i] <= 109



Input Format

First and only argument is an integer array A.


Output Format

Return an integer denoting the minimum length.


Example Input

Input 1:

 A = [0, 1, 15, 25, 6, 7, 30, 40, 50] 

Input 2:

 A = [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60] 



Example Output

Output 1:

 4 

Output 2:

 6 



Example Explanation

Explanation 1:

 The smallest subarray to be sorted to make the whole array sorted =  A[3..6] i.e, subarray lying between positions 3 and 6. 

Explanation 2:

 The smallest subarray to be sorted to make the whole array sorted =  A[4..9] i.e, subarray lying between positions 4 and 9. 


 A = [0, 1, 15, 25, 6, 7, 30, 40, 50]  == 4
*/

#include <iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;



int Solve(vector<int> &A)
{
  
  vector<int> B;
  int n =A.size();
  B.resize(n);
  
  int slen=0;
  for (int i =0;i<n;i++)
  {
      B[i]=A[i];
  }
  sort(B.begin(), B.begin() +n);
  
 int start=0;
 for(int i =0;i< n;i++)
 {
     if(A[i] == B[i])
        continue;
     else 
     {
         start = i;
         break;
     }
 }
 
 int end=0;
 for (int i =n-1; i >start; i--)
 {
 
     if(A[i] == B[i])
        continue;
     else 
     {
         end = i;
         break;
     }
 }
  /*for(int i =0;i<n;i++)
  {
      cout <<"B [i] ="<<B[i]<<endl;
  }*/
  
  //cout <<" start ="<<start<<endl;
  //cout <<" end ="<<end<<endl;
  
   if(end-start> 0 ) 
    return (end-start)+1;
    else 
        return 0;
}

int main()
{
  int C;
  //vector<int> A={1, 2, 1, 3, 4, 3};
  // 2 2 2 2 1 1 1 1 2 2 2 
   vector<int> A={0, 1, 15, 25, 6, 7, 30, 40, 50};
  
  C =Solve(A);
  

   cout << "value   " <<C<< endl; 

   
   return 0;
}
