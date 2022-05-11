#include<iostream>
using namespace std;
struct Clubs{
    string clubs[4]={"PSG","LIV","FCB","MUN"};
    
};
struct Score{
    Clubs scores,points;
    
};
class Match{
    private :
        string clubs[4]={"PSG","LIV","FCB","MUN"};
        Score matchDay[6];
        //table[][5]=the 5 number indicates win, loose, tie, GA, and points respectively
        int table[4][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
        int num=0;
    public :
        void takeScore(){
            for(int i=0;i<6;i++){
            for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                if(j!=k){
                    cout<<clubs[j]<<" vs "<<clubs[k];
                    cin>>matchDay[i].scores.clubs[j]>>matchDay[i].scores.clubs[k];
                    if(matchDay[i].scores.clubs[j] > matchDay[i].scores.clubs[k]){
                        matchDay[i].points.clubs[j]=table[j][num]+1;++num;
                       
                        
                        ++num;
                        (matchDay[i].scores.clubs[j] - matchDay[i].scores.clubs[k]=table[j][num])+=table[j][num];
                        (matchDay[i].scores.clubs[k] - matchDay[i].scores.clubs[j]=table[k][num])+=table[k][num];
                        ++num;
                    }if else(matchDay[i].scores.clubs[j] == matchDay[i].scores.clubs[k]=table[j][num]){
                        table[j][num]+=1;
                        table[k][num]+=1;
                    }else{
                         matchDay[i].points.clubs[k]=table[k][num]+1;++num;
                    }
                }
            }
        }
        }}
        void calPoint(){
            for(int i=0;i<6;i++){
            for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                
            }
        }
        }}
};
int main(){
    Match matchs;
    string clubs[4]={"PSG","LIV","FCB","MUN"};
    matchs.takeScore();
}