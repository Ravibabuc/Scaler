#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int min_value(int a, int b)
{
    return a < b ? a:b;
}

int max_value(int a, int b)
{
    return a > b ? a:b;
}

int majorityElement(vector<int> &A) 
{
  
   int n =A.size();
   int maxv= INT_MIN;//-2147483648;
   int minv=INT_MAX; //2147483647;
   for(int i =0;i<n;i++)
   {
       minv = min_value(minv, A[i]);
       maxv =max_value(maxv, A[i]);
     
       
   }
   int count =0;
   
    for (int i =0;i<n;i++)
    { 
        if ( A[i] > minv && A[i] < maxv)
        count ++;
    }
   
   
   return count;
}


int main()
{
   
 vector<int> A ={1, 2, 3};
 int D = majorityElement(A);
 cout<<" D ="<<D<<endl;
   return 0;
}
