#include<iostream>
using namespace std;
class EmployeeInfo{
    private : 
        double payment,compensation,daycomp,daypun,punishment;
        int idNo;
    public :
        void getInfo(){
            cout<<"Enter the id of  Employee : "<<endl;
            cin>>idNo;
            cout<<"Enter the salary : "<<endl;
            cin>>payment;
            cout<<"Enter the amount of day did extra in the month : "<<endl;
            cin>>daycomp;
            cout<<"Enter the day he missed : "<<endl;
            cin>>daypun;
        } 
        void calcpayment(){
            compensation=0.05*payment*daycomp;
            punishment=payment/30*daypun;
            payment=compensation+payment-punishment;

        }
        void showInfo(){
            cout<<"The employee who have the ID NO "<<idNo<<" have been compensated "<<
            compensation<<" and punished "<<punishment<<" and total amount of salary is "<<payment;
        }
};
int main(){
    int pay;
    EmployeeInfo employee1,employee2;
    employee1.getInfo();
    employee1.calcpayment();
    employee2.getInfo();
    employee2.calcpayment();
    employee1.showInfo();
    employee2.showInfo();

    
    

}