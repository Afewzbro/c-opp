#include<iostream>
#include<iomanip>
using namespace std;
class Temprature{
    private:
        double celc,fahr,N=100;
    public :
        void fahrInput(){
            cout<<"Enter the Fahrenheit temprature value : ";
            cin>>fahr;
        }
        void celcInput(){
            cout<<"Enter the Celsius temprature value : ";
            cin>>celc;
        }
        void celcToFahr(){
            fahr=(celc*1.8)+32;
            cout<<"The Fahrenheit for the give "<<celc<<" Celsius is : "<<fahr;
        }
        void set(int i){
            celc=i;

        }
        void fahrToCelc(){
            celc=(fahr-32)/1.8;
            cout<<"The Celsius for the give "<<fahr<<" Fahrenheit is : "<<celc;
        }
        void display(){
            
            cout<<setw(5)<<celc<<static_cast<char>(167)<<"C : "<<fahr<<static_cast<char>(167)<<"F"<<endl;
        }            
};
int main(){
    Temprature temp1,temp[100];
    char ch;
    cout<<"Enter the temprature conversion you want for Fahrenheit press \"F\" for Celcius press \"C\" : ";
    cin>>ch;
    if(ch=='C' || ch=='F'){
        if(ch=='C'){
            temp1.fahrInput();
            temp1.fahrToCelc();
        }else{
            temp1.celcInput();
            temp1.celcToFahr();
        }
    }else
        cout<<"This program dosent operate the operation you want try again";
    for(int i=0;i<=100;i++){
        int x=i;
        temp[i].set(x);
    }
    cout<<"QUICK TEMPRATURE CHANGE"<<endl;
    cout<<" Celcius   Fahrenheit"<<endl;
    for(int i=0;i<=100;i++){
        temp[i].display();
    }
}