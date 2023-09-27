#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    int t=0;
    vector<int>a,b;
    for(int i=s.size()-1;i>=0;i--){
        a.push_back(s[i]-'0');
    }
    for(int i=0;i<s.size();i++){
        b.push_back(a[i]*2%10+t);
        t=a[i]*2/10;
    }
    if(t==1) b.push_back(1);
    vector<int> c=b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)
        puts("Yes");
    else
        puts("No");
    for (int i = 0; i <c.size(); ++i) {
        cout<<c[i];
    }
   cout<<endl;
    return 0;
}