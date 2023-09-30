#include <iostream>

using namespace std;
/*int main(){
    int N;
    cin>>N;
    string gname,gid,bname,bid;
    int gmax=-1,bmin=101;
    for (int i = 0; i < N; ++i) {
        string name;
        string sex;
        string  ID;
        int score;
        cin>>name>>sex>>ID>>score;
        if(sex=="M"&&score<bmin){
            bname=name;
            bmin=score;
            bid=ID;
        }
        if(sex=="F"&&score>gmax){
            gname=name;
            gmax=score;
            gid=ID;
        }
    }
    if (bmin!=101&&gmax!=-1){
        cout<<gname<<" "<<gid<<endl;
        cout<<bname<<" "<<bid<<endl;
        cout<<gmax-bmin<<endl;
    } else if(bmin==101){
        cout<<gname<<" "<<gid<<endl;
        cout<<"Absent"<<endl;
        cout<<"NA"<<endl;
    } else if(gmax==-1){
        cout<<"Absent"<<endl;
        cout<<bname<<" "<<bid<<endl;
        cout<<"NA"<<endl;
    }
    return 0;
}*/


