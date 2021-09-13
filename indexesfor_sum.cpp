#include<bits/stdc++.h>
using namespace std;

/*A = "scaler"
 B = 2*
 erscal */

vector<int> twoSum(const vector<int> &A, int B) {
    int sum=0;
    vector<int> C;
    C.resize(2);
    int prev=A.size();
    C[0]=prev;
    C[1]=prev;
    
    vector <int > D;
   D.resize(2);
    
    for (int i =0;i<A.size();i++)
    {
        for (int j =i+1;j<A.size();j++)
        {
            sum = A[i] + A[j];
            if(sum == B)
            {
             //   cout <<"prev "<<prev<<"  "<<j-1<<endl;
                //&& (C[0] > i && C[1] >j)
               // && ((j-i) < prev)
               //(C[0] > i &&
                if((i < j)   && ( C[1] >=j))
                {
                  //  cout <<"prev ddd    "<<i<<"  "<<j<<endl;
                    if( C[1] ==j)
                    {
                        //cout <<"prev ddd"<<prev<<"  "<<j-i<<endl;
                        
                        if(C[0] > i)
                        {
                            C[0]= i;
                        }
                        
                    }
                    else
                    {
                       C[0]=i;
                        C[1]=j;   
                    }
              //  prev = j-i;
                //C[0]=i;
                //C[1]=j;
                //return C;
                }
                
            }
        }
    }
    
    if(C[0]== prev )
    {
        
        return D;
        
    }
    
    C[0]=C[0] +1;
    C[1]=C[1] +1;
    return C;

}




int main()
{
  //  vector<int> A={4, 7, -4, 2, 2, 2, 3, -5, -3, 9, -4, 9, -7, 7, -1, 9, 9, 4, 1, -4, -2, 3, -3, -5, 4, -7, 7, 9, -4, 4, -8 };
   
   vector <int> A={ -10, -10, -10 };
    int B =-5;
    
    vector<int> C =twoSum(A, B);
   cout <<"C ="<<C[0]<<"  "<<C[1]<<endl;
}
 
 
