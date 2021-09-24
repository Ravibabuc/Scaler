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
#include<bits/stdc++.h>
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
  
 unordered_map<int, int>::iterator itr, itr2;
   unordered_map<int, int> Map1;



  for (int i =0;i < B;i++)
  {
       if(Map1.find(A[i])==Map1.end())
       {
                Map1[A[i]]=1;
       }
        else
            Map1[A[i]]=Map1[A[i]]+1;
        
     
  }
  int k=0;
  C[k] = Map1.size(); 
  k++;
  /*1, 2, 1, 3, 4, 3  B=3 */ 
      for(int i=B;i<n;i++)
        {
            if(Map1[A[i-B]]==1)
            {
               // cout <<" if1 =" <<Map1[A[i-B]]<<endl;
                Map1.erase(A[i-B]);
            }
            else
            {
                //cout <<"else 1 =" <<Map1[A[i-B]]-1<<endl;
                Map1[A[i-B]]=Map1[A[i-B]]-1;
            }
            if(Map1.find(A[i])==Map1.end())
            {
                Map1[A[i]]=1;
            }
            else
            {
                Map1[A[i]]=Map1[A[i]]+1;
            }
             C[k] = Map1.size(); 
             k++;
        }
       
  
 

  return C;
}

int main()
{
  vector <int> C;
  //vector<int> A={1, 2, 1, 3, 4, 3};
  // 2 2 2 2 1 1 1 1 2 2 2 
   vector<int> A={31, 51, 31, 51, 31, 31, 31, 31, 31, 31, 51, 31, 31};
  int B=3;
  C =Solve(A, B);
  
  for (int i =0;i<C.size();i++)
  {
   cout << "value   " <<C[i]<< endl; 
  }
   
   return 0;
}
