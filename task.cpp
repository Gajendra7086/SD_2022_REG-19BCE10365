#include <bits/stdc++.h>

using namespace std;
void print_bord(string b[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    char p1n;
    string player1[5];
    cout<<"Enter Player 1 Name:";
    cin>>p1n;
    cout<<"\nEnter 5 characters of player1 seperated by space:"<<endl;
    map<char,int> p1[5];
    for(int i=0;i<5;i++){
        cin>>player1[i];
    }
    char p2n;
    string player2[5];
    cout<<"Enter Player 2 Name:";
    cin>>p2n;
    cout<<"\nEnter 5 characters of player2 seperated by space:"<<endl;
    for(int i=0;i<5;i++){
        cin>>player2[i];
    }
   string bord[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==4){
                bord[i][j]=player1[j];
            }
            else if(i==0){
                bord[i][j]=player2[j];
            }
            else{
            bord[i][j]="-";
            }
        }
    }
    print_bord(bord);
    
    
}