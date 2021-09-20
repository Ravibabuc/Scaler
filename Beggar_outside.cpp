#include <iostream>
#include<vector>
using namespace std;

vector<int> solve(int A, vector<vector<int> > &B) 
{


    int n=0;
    int m = B.size();
    if( m > 0)
    {
        n = B[0].size();
    }
    vector<int>D;
    D.resize(A);
    
     cout <<" n ="<<n<<endl;
    cout <<" m ="<<m<<endl;
    /* for(int i=0;i<D.size();i++)
      {
        cout <<D[i] <<endl;
      }*/
    
    for(int i =0; i < m;i ++)
    {
       // for (int j =0;j< n-1;j++)
        //{
            
           // cout<<"(B[i][j])-1 "<<(B[i][j])-1<<endl;
            //cout<<"B[i][n-1] "<<B[i][n-1]<<endl;
            
            int start = (B[i][0]) ;
            int end =B[i][n-2];
            for(int k =start-1;k< end;k++)
            {
                cout <<"k ="<<k<<endl;
                D [k] += B[i][n-1];
            }
        //}
    }
    
    
   
    return D;
    
}






int main()
{
     vector <vector <int>> B  {{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
      //vector <vector <int>> B  {{1, 3, 10}, {6, 9, 2}, {3, 5, 3}, {2, 8, 4}, {6, 7, 5}};
     // vector <vector <int>> B ;
      int A =5 ;
      vector <int> out   = solve(A, B);
      for(int i=0;i<5;i++)
      {
        cout <<out[i] <<endl;
      }
      return 0;
}
