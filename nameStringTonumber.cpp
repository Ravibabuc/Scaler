#include <iostream>
using namespace std;

int titleToNumber(string A) 
{
    
    int value=0;
    int factor =1;
    for(int i=A.size()-1;i >=0 ;i--)
    {
       value += factor *( A[i] - 64);
       factor = factor *26;
    }
    return value;
}





int main()
{
    int ans =titleToNumber("AB");
    
   cout << "ans" <<ans<< endl; 
   
   return 0;
}
