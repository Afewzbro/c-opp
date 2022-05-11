#include<iostream>
using namespace std;
class Time{
    private :
        int hr,min,sec;
        int dftime;//time diference
    public :
        void timeInput(){
            cout<<"Enter the hour : ";
            cin>>hr;
            cout<<"Enter the minute : ";
            cin>>min;
            cout<<"Enter the second : ";
            cin>>sec;
        }
        void timeDifference(){
            dftime=hr*3600+min*60+sec;
            cout<<"The difference between 00:00 is "<<dftime<<" seconds.";
        }
};
int main(){
    Time time1;
    time1.timeInput();
    time1.timeDifference();
}