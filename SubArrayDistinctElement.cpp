/*You are given an array of N integers, A1, A2 ,..., AN and an integer B. Return the of count of distinct numbers in all windows of size B.

Formally, return an array of size N-B+1 where i'th element in this array contains number of distinct elements in sequence Ai, Ai+1 ,..., Ai+B-1.

NOTE: if B > N, return an empty array.

o/p Return an integer array.

 A = [1, 2, 1, 3, 4, 3]
 B = 3
 
 A=[1, 2, 1, 3, 4, 3] and B = 3
 All windows of size B are
 [1, 2, 1]
 [2, 1, 3]
 [1, 3, 4]
 [3, 4, 3]
 So, we return an array [2, 3, 3, 2].
 
 Sub array= N-k +1 = 6-3+1 = 4

*/

#include <iostream>
#include<vector>
#include<map>

using namespace std;

int GetDist(const vector<int> &A,int k, int B)
{
   map<int, int>::iterator itr, itr2;
   map<int, int> Map1;
   for(int i =k;i<B+k;i++)
   {
       
       
       Map1.insert (pair<int, int>(A[i], 1 ));
        //Map1.insert (A[i], 1);
   }
   
   //cout <<"map1.size() "<<Map1.size()<<endl;
   return Map1.size();
   
}


vector<int> Solve(const vector<int> &A,int B)
{
  int n = A.size();
  int subssize= n-B +1;
  vector <int> C;
  C.resize(subssize);

  for (int i =0;i < n-B+1;i++)
  {
     C[i] =  GetDist(A,i, B);
  }
  
  return C;
}

int main()
{
  vector <int> C;
  vector<int> A={1, 2, 1, 3, 4, 3};
  int B=3;
  C =Solve(A, B);
  
  for (int i =0;i<C.size();i++)
  {
   cout << "value   " <<C[i]<< endl; 
  }
   
   return 0;
}
