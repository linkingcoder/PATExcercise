#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int g1,s1,k1;
    int g2,s2,k2;
    int g,s,k;
    scanf("%d.%d.%d",&g1,&s1,&k1);
    scanf("%d.%d.%d",&g2,&s2,&k2);
    k=(k1+k2)%29;
    s=(s1+s2+(k1+k2)/29)%17;
    g=(s1+s2+(k1+k2)/29)/17+g1+g2;
    cout<<g<<'.'<<s<<'.'<<k<<endl;


    return 0;
}