#include<iostream>
using namespace std;
int gcd(int x,int y){
    if(y==0) return x;
    else if(x==y) return x;
    else return gcd(y,x%y);
}
int factor(int num){
    if(num==1) return 1;
    return num*factor(num-1);
    //5*factor(num-1)
    //5*4*factor(num-1)
    //5*4*3*factor(num-1)
    //5*4*3*2*factor(num-1)
}
int main(){
    cout<<gcd(21,9)<<endl;
    cout<<factor(6);
}