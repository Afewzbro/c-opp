#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class Sort{
    private :
        float num1,num2,num3,temp;
    public :
        void numInput(){
            cout<<"Enter the 3 nummbers : "<<endl;
            cin>>num1>>num2>>num3;
        }
        void sort(){
            if (num2 < num1)
                swap(num1, num2);
            if (num3 < num2){
                swap(num2, num3);
                if (num2< num1)
                    swap(num2, num1);
            }
        }
        void display(){
            cout<<fixed<<setprecision(2)<<"The order for the following three number is : "<<num1<<","<<num2<<","<<num3;
        }
};
int main(){
    Sort s;
    s.numInput();
    s.sort();
    s.display();
}