#include <iostream>
#include<vector>
using namespace std;

int solve(vector<int> &A, int B) 
{
    int n = A.size();
    vector <int > pref;
    pref.resize(n);
    int max =-2147483648;
    int prev=0;
    pref[0]=A[0];
    
    for (int i = 1;i < n;i++)
    {
        pref[i]=pref[i-1] + A[i]; 
        
    }
    prev=max;
    
    for (int i = 0;i <B+1 ;i++)
    {
      
     // cout <<"  pref[B-i-1] "<< pref[B-i-1] <<endl;;
      //cout <<"  pref[n-i] "<<  pref[n-1]<<endl;;
      //cout <<"  pref[n-i-1] "<<  pref[n-i-1]<<endl;
      
      if (i ==0)
      {
            max = pref[B-i-1] ;
      }
      else
      {
        max = pref[B-i-1]  + pref[n-1]-pref[n-i-1];
      }
        //cout <<"max ="<<max<<endl;
        
        if (prev < max)
        {
            prev=max;
        }
        //max=0;
        
    }
    
   
       
    return prev;
    
}






int main()
{
     //vector <int> A = {5, -2, 3 , 1, 2};
     vector <int> A = {-969, -948, 350, 150, -59, 724, 966, 430, 107, -809, -993, 337, 457, -713, 753, -617, -55, -91, -791, 758, -779, -412, -578, -54, 506, 30, -587, 168, -100, -409, -238, 655, 410, -641, 624, -463, 548, -517, 595, -959, 602, -650, -709, -164, 374, 20, -404, -979, 348, 199, 668, -516, -719, -266, -947, 999, -582, 938, -100, 788, -873, -533, 728, -107, -352, -517, 807, -579, -690, -383, -187, 514, -691, 616, -65, 451, -400, 249, -481, 556, -202, -697, -776, 8, 844, -391, -11, -298, 195, -515, 93, -657, -477, 587 };
     //vector <int> A = {5, -2, -6 , 1, 2};
      int B = 81;
      int max = solve(A, B);
      cout << "max " <<max<< endl; 
      return 0;
}
