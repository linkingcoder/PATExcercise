#include <iostream>
#include <cstdio>
using namespace std;
double A[1010];
double B[1010];
double C[2010];
int main(){
    int K1;
    cin>>K1;
    for (int i = 0; i <K1; ++i) {
        int N;
        double a;
        cin>>N>>a;
        A[N] = a;
    }
    int K2;
    cin>>K2;
    for (int i = 0; i <K2; ++i) {
        int N;
        double a;
        cin>>N>>a;
        B[N] = a;
    }
    int cnt=0;
    for (int i = 0; i < 1001;++i) {
        for (int j = 0; j < 1001; ++j) {
            C[j+i]=A[i]*B[j]+C[j+i];
        }

    }
    for (int i = 0; i < 2010; ++i) {
        if(C[i]!=0){
            cnt++;
        }
    }
    cout<<cnt;
    for (int i = 2010-1; i >=0; i--) {
        if(C[i]!=0){
            printf(" %d %.1f",i,C[i]);
        }
    }
    cout<<endl;
    return 0;
}