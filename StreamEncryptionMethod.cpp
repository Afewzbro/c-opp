#include<iostream>
#include <string>
#include<cstring>
#include<cmath>
#include <bitset>
// key = 00110001 is equal to 1
using namespace std;
class ASCI{
    private: 
        int j,k,l=1,m;
        string sentence;
        char ch[1000];
        int a[1000];
        
    public :
        void input(){
            cout<<"Enter the sentence you want to change but not more than 100 : ";
            getline(cin,sentence);
        }
        void changeToASCI(){
            
            //for the asci code of the sentence
            for(int i=0;i<sentence.length();i++){
                ch[i]=sentence[i];
                cout<<int(ch[i])<<", ";
                bitset<8> j(ch[i]);
                cout<<j;
                
            }
        }
        void streamEncryption(){
            for(int i=0;i<sentence.length();i++){
                k=int(ch[i]);
                m=k^l;
                bitset<8> r(m);
                cout<<r;

            }
        }
        
};
int main(){
    ASCI a;
    a.input();
    a.changeToASCI();
    a.streamEncryption();

}