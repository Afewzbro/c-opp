#include<iostream>
using namespace std;
class check{
    public :
        bool is_divisible(int x){
            int i=0,a;
            bool z=false;
            while(x!=0){
                int j=x/10;
                a=x-j;
                i+=a;
            }
            if(x%i==0){
                z=true;
            }
        return z;

        }
};


int main (){
    check c1;
     cout<<c1.is_divisible(75);
    
    return 0;

}