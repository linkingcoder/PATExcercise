#include <iostream>
#include <unordered_map>
using namespace std;
bool check(char c)
{
    if (c >= '0' && c <= '9') return true;
    if (c >= 'A' && c <= 'Z') return true;
    if (c >= 'a' && c <= 'z') return true;
    return false;
}

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z') return c + 32;
    return c;
}
/*int main(){
    string str;
    getline(cin,str);
    unordered_map<string,int> m;
    string word="";
    string w;
    int cnt=-1;
    for (int i = 0; i < str.size(); ++i) {
        if(check(str[i])) {
            string word;
            int j=i;
            while(j<str.size()&& check(str[j])) word=word+ to_lower(str[j++]);
            m[word]++;
            i=j;
        }
    }


    for(auto h:m){
        if(h.second>cnt||h.second==cnt&&h.first>word){
            w=h.first;
            cnt=h.second;
        }
    }
    cout<<w<<" "<<cnt<<endl;
    return 0;
}*/