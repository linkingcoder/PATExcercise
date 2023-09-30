#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    string input = to_string(sum);
    string res;
    int j=0;
    for (int i = input.length()-1,j=0 ; i >=0 ; i--,j++) {
         char c=input[i];
         if((j%3==0)&i&input[i]!='-'){
             res=","+res;
         }
         else
         {
             res=c+res;
         }
    }
    cout<<res<<endl;
    return 0;
}