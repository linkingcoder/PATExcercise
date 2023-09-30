#include <iostream>
#include <cstdio>
    using namespace std;
    double A[1010];
    double B[1010];
/*    int main(){
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
        for (int i = 0; i < 1001; ++i) {
            for (int j = 0; j <1001 ; ++j) {
                A[i+j]=A[i]*B[j];
                if(A[i]!=0){
                    cnt++;
                }
            }
        }

        cout<<cnt;
        for (int i = 1001; i >=0; i--) {
            if(A[i]!=0){
                printf(" %d %.1f",i,A[i]);
            }
        }
        cout<<endl;
        return 0;
    }*/