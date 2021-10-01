#include <iostream>
#include<vector>

using namespace std;


long subarraySum(vector<int> &A) 
{
    
    int n =A.size();
    int sum=0;
    int left=0;
    int right=0;
    
    for (int i =0;i<n;i++)
    {
        left =i+1;
        right =n-i;
        sum += ((left * right ) * A[i]);
    }
    return sum;
}

int main()
{
    
    vector<int> A = {1, 2, 3, 4};
   cout<<"ans = "<<subarraySum(A) <<endl;
   
   return 0;
}
