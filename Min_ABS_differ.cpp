/*Minimum Absolute Difference

Problem Description

Given an array of integers A, find and return the minimum value of | A [ i ] - A [ j ] | where i != j and |x| denotes the absolute value of x.



Problem Constraints

1 <= length of the array <= 100000

-109 <= A[i] <= 109



Input Format

The only argument given is the integer array A.


Output Format

Return the minimum value of | A[i] - A[j] |.


Example Input

Input 1:

 A = [1, 2, 3, 4, 5]

Input 2:

 A = [5, 17, 100, 11]



Example Output

Output 1:

 1

Output 2:

 6



Example Explanation

Explanation 1:

 The absolute difference between any two adjacent elements is 1, which is the minimum value.

Explanation 2:

 The minimum value is 6 (|11 - 5| or |17 - 11|).
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

int Solve(vector<int> &A)
{
   int B=2;
  int n =A.size();

  int ans=2147483647;
  sort(A.begin(), A.begin() +n);

  for(int i=0;i< n-B+1;i++)
  {
      ans = minValue(ans, abs(A[i+B-1]- A[i]));
  }

 
 
  /*for(int i =0;i<n;i++)
  {
      cout <<"B [i] ="<<B[i]<<endl;
  }*/
  
  //cout <<" start ="<<start<<endl;
  //cout <<" end ="<<end<<endl;
 return ans;  
  
}

int main()
{
  int C;
  //vector<int> A={1, 2, 1, 3, 4, 3};
  // 2 2 2 2 1 1 1 1 2 2 2 
   vector<int> A={5, 17, 100, 11};
   int B =4;
  
  C =Solve(A);
  

   cout << "value   " <<C<< endl; 

   
   return 0;
}
