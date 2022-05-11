#include<iostream>
using namespace std;
int i,j;

bool check(int a){
    int soduk[3][3];
    int c=0;
    bool ch=false;
    for(int k=0;k<3;k++){
        for(int l=0;l<3;l++){
            if(a==soduk[k][l])
                c++;
        }
    }
    if(c==2)
        ch=true;
    return ch;
}
int main(){
    int a;
    int soduk[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter the value of soduk "<<i<<" "<<j;
            cin>>soduk[i][j];
            a=soduk[i][j];
            if(check(a)==true){
                cout<<"yaragim iki defa girdin";
            }
        }
    }
}