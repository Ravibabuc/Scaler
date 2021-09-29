#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


int majorityElement(const vector<int> &A) 
{
   map<int, int>::iterator itr, itr2;
   map<int, int> Map1;
   map<int, int> Map2;
   int n =A.size();
   int k = n/2;
   for(int i =0;i<A.size();i++)
   {
       
        
      itr = Map1.find(A[i]);

      if (itr != Map1.end())
      {
          
            itr->second =  itr->second +1;
          //  cout <<" map   " << Map1.find(A[i])->second<<endl;
      }
   
     //  c = c +1;
      else
      { 
       //cout <<" map   " << Map1.find(A[i])->second<<endl;
       Map1.insert (pair<int, int>(A[i], 1 ));
      }
       
   }
    for (itr = Map1.begin(); itr != Map1.end(); ++itr)
    { 
        if (itr->second > k)
         return itr->first;
    }
   
   
   return 0;
}


int main()
{
   
 vector<int> A ={2, 1, 2};
 int D = majorityElement(A);
       cout<<" D ="<<D<<endl;
   

 
   
   return 0;
}
