#include<iostream>
using namespace std;

void firstandlastIndex (string s,char ch,int *fs,int *ls ){
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *fs=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==ch){
            *ls=i;
            break;
        }
    }
}
int main(){

    string s = "aaabac";
    char ch = 'a';
    int fs= -1;
    int ls= -1;

    int *pf= &fs;
    int *pl= &ls;
    firstandlastIndex(s,ch,pf,pl);
    cout<<*pf<<" "<<*pl<<endl;
    cout<<fs<<" "<<ls;
    return 0;

}