#include<iostream>
using namespace std;
class ToolBooth{
    private : 
        int car=0;
        double payment=0;
    public :
        void payingCar(){
            car++;
            payment+=0.5;
        }
        void nonPayingCar(){
            car++;
        }
        void display(){
            cout<<"The amount of cars passed the bridge is : "<<car;
            cout<<" and money colllected is : "<<payment;
        }

};
int main(){
    ToolBooth m;
    char ch;
    do
    {
        cout<<"The car that passed if its payed press p if not n : ";
        cin>>ch;
        if(ch=='p'){
            m.payingCar();
        }else if(ch=='n'){
        m.nonPayingCar();}
        else
            break;
    } while (ch!=' ');
    
    
    
    m.display();
    return 0;
}