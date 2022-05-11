#include<iostream>
using namespace std;
bool isPerfect(int x){
    int y=0;
    bool z=false;
    
    for(int i=1;i<x;i++){
        if(x%i==0){
            y+=i;
            
        }
        
    }
    if(y==x){
        z=true;
    }
    return z;
} 
int main(){
    int count=0;
    int a[100];
    for(int i=1;i<=1000;i++){
        if(isPerfect(i)==true){
            a[count]=i;
            count++;
        }
    }
    cout<<"These are the perfect numbers : ";
    
    
    while(count!=-1){
         cout<<a[count]<<",";
         count--;
     }

}