#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
int fib(int n){
  
  if(n==0 ){
    return 0;
  }
  if(n==1){
    return 1;
  }
  return fib(n-1)+ fib(n-2);
  
}

int main()
{
    int n;
    cin>>n;
    
   int ans = fib(n);
   cout<<ans<<endl;
}
