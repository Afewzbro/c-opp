#include<iostream>
#include<iomanip>
#include <algorithm>
using namespace std;
int main(){
    int home_goal,away_goal,l=0;//"l" is a type of the table where win, loose, and tie etc stored.
    int table[4][5];
    // std::for_each(std::begin(table), std::end(table),[](auto &row) { std::fill(std::begin(row), std::end(row), 0); });
    
    string clubs[4]={"PSG","LIV","FCB","MUN"};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i!=j){
                cout<<clubs[i]<<" vs "<<clubs[j]<<endl;
                cin>>home_goal>>away_goal;
                if(home_goal>away_goal){
                    table[i][l]+=1;l+=1;
                    table[j][l]+=1;
                    l+=2;
                    table[i][l]=table[i][l] + home_goal-away_goal;
                    table[j][l]=table[j][l] + away_goal-home_goal;                    
                    l+=1;
                    table[i][l]+=3;
                }else if(home_goal=away_goal){
                    l+=2;
                    table[i][l]+=1;
                    table[j][l]+=1;l+=2;
                    table[i][l]+=1;
                    table[j][l]+=1;                    
                }else{
                    table[j][l]+=1;
                    l+=1;
                    table[i][l]+=1;l+=2;
                    table[i][l]=table[i][l] + home_goal-away_goal;
                    table[j][l]=table[j][l] + away_goal-home_goal;l+=1;
                    table[j][l]+=3;
                    
                }
        }
    }}
    cout<<"UEFA Champions league table"<<endl;
    for(int i=0;i<4;i++){
        cout<<setw(5)<<clubs[i];
        for(int j=0;j<5;j++){
            cout<<setw(5)<<table[i][j];
        }
        cout<<endl;
    }
}