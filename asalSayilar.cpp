#include<iostream>
using namespace std;
class PrimeNumber{
    private :
        int num,j=0,k=0;
        int primeNum[10000],compNum[10000];
        bool z=false;
    public :
        void get(){
            cout<<"Enter the number : ";
            cin>>num;
        }
        bool isPrime(){
            for(int i=2;i<num;i++){
                if(num%i==0){
                    z=true;
                }
                break;
            }
        }
        void primeNumbers(){
            for(int l=3;l<=10000;l++){
            for(int i=2;i<l;i++){
                if(l%i==0){
                    compNum[j]=l;
                }else{
                    primeNum[k]=l;
                }
            }}
        }
};
int main(){
    PrimeNumber num1;
    num1.get();
    if(num1.isPrime()==false){
        cout<<"It is prime number.";
    }else
        cout<<"It is prime number.";
    num1.primeNumbers();
}
