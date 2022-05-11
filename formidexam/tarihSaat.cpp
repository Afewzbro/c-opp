#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class Saat{
    private :
        int hour,minutes,secondes;
    public:
        Saat():hour(0),minutes(0),secondes(0)
        {
            cout<<"constructer one"<<endl;
        }
        Saat(int hr/*if it was "hour"*/, int min, int sec){
            hour=hr;
            //if in the comment happen we shall use the below
            //this->hour=hr;
            minutes=min;
            secondes=sec;
            cout<<"constructer two"<<endl;
        }
        void display(){
            cout<<setw(2)<<setfill('0')<<hour<<" : "<<setw(2)<<setfill('0')<<minutes<<endl;
        }
        Saat &setMinutes(int min){
            if(min>=0 && min<60){
                minutes=min;
            }else
                throw invalid_argument("mf get out bitch!!");
            //the below is ardish function
            return *this;//is like that same as return minutes
        }
        //ardish foncton
        Saat &setHour(int hr){
            hour=hr;
            return *this;
        }
        Saat addTime(Saat s1,Saat s2){
            Saat NEW;
            NEW.hour = s1.hour + s2.hour;
            NEW.minutes = s1.minutes + s2.minutes;
            if(NEW.minutes>=60){
                NEW.hour+= NEW.minutes / 60;
                NEW.minutes = NEW.minutes%60;
            }
            return NEW;
        }

        int getHour(){ return hour;}
        int getMinute(){ return minutes;}
        int getSecond(){ return secondes;}
        Saat operator+(Saat& addition){
            Saat time;
            time.hour = hour + addition.hour;
            time.minutes = minutes + addition.minutes;
            return time;
        }

};
int main(){
    Saat s,s3;
    Saat s2(20,10,20);
    // the below is because of ardish function
    s.setHour(10).setMinutes(50);
    Saat sum = s3.addTime(s,s2);
    sum.display();
    Saat toplam = s + s2;


    

}