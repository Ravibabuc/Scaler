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
   
    unordered_map<int, int> map;
    
     unordered_map<int, int>::iterator itr, itr2;
    
    for (int i =A.size()-1;i >=0 ;i--)
    {
        itr = map.find(B-A[i]);
     
     if(itr != map.end())
     {
         
         
        // cout << "Pair found (" << A[itr->second]  << ", " << A[i] << ")"<<endl;
          
          
           /*cout << "Pair found (" << itr->second << ", "
                 << i<< ")"<<endl;   */
              /*  if(itr->second <  i)
                {*/
                    
           // cout << "Pair found gggg(" << itr->second << ", "     << i<< " " <<C[1] <<")"<<endl;   
                  if(C[1]>=  itr->second  )
                  {
            //cout << "Pair found fff (" << itr->second << ", "   << i<< ")"<<endl; 
                 
                      if(C[1]== itr->second )    
                      {
               // cout << "Pair found (" << itr->second << ", "    << i<< ")"<<endl; 
                       if( C[0] > i )
                           {
                                          // cout << "Pair found iii (" << itr->second << ", "    << i<< ")"<<endl; 

                            C[1]=itr->second ;
                            
                            C[0]=i;
                           }
                      }
                      else
                      {
                //cout << "Pair foundddd (" << itr->second << ", " << i<< ")"<<endl; 
                          C[0]=i ;
                        C[1]=itr->second;
                      }
                  }
                 /*else
                  {
                       C[0]=itr->second ;
                       C[1]=i;
                  }*/
                //}
                 
     }
     
       itr = map.find(B-A[i]);
     
     if(itr != map.end())
       {
           //cout <<" itr-> second "<<itr-> second<<" " <<i<<endl;
           
           
         if (itr-> second > i)
         {
            map[A[i]] = i;    
         }
        }
        else
        {
            map[A[i]] = i;
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
    vector<int> A={4, 7, -4, 2, 2, 2, 3, -5, -3, 9, -4, 9, -7,
    7, -1, 9, 9, 4, 1, -4, -2, 3, -3, -5, 4, -7, 7, 9, -4, 4, -8 };
   
  vector <int> A={ 2, 7, 11, 2, 7 };
    int B =-3;
    
    vector<int> C =twoSum(A, B);
   cout <<"C ="<<C[0]<<"  "<<C[1]<<endl;
}
 
 
