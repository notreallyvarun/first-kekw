#include<bits/stdc++.h>
using namespace std;
char matrix[3][3] ={'1','2','3','4','5','6','7','8','9' };
char player = 'X';
void Draw(){
    cout<<"YOU ARE PLAYING TICK TAK TOE!!!"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}

void TogglePlayer(){
    if(player == 'X'){
        player = 'O';
    }
    else{
        player = 'X';                                   
    }
}
char Check(){
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X' || 
            matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X'||
            matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X'||
            matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X'||
            matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X'||
            matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X'||
            matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X'||
            matrix[3][1]=='X' && matrix[2][2]=='X' && matrix[1][3]=='X'){
                return 'X';
                    
            }
            if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O' || 
            matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O'||
            matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O'||
            matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O'||
            matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O'||
            matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O'||
            matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O'||
            matrix[3][1]=='O' && matrix[2][2]=='O' && matrix[1][3]=='O'){
                return 'O';
            }    
            }
        }
        return '/';
    }

    

void Input(){
    int a;
    cout<<"Press the number where you want to place your marker : ";
    cin>>a;     
    if(a==1){
        matrix[0][0]=player;
    }
    else if(a==2){
        matrix[0][1]=player;
    }
    else if(a==3){
        matrix[0][2]=player;
    }
    else if(a==4){
        matrix[1][0]=player;
    }
    else if(a==5){
        matrix[1][1]=player;
    }
    else if(a==6){
        matrix[1][2]=player;
    }
    else if(a==7){
        matrix[2][0]=player;
    }
    else if(a==8){
        matrix[2][1]=player;
    }
    else if(a==9){
        matrix[2][2]=player;
    }

}
int main(){
    Draw();
    while(1){
        Input();
        Draw();
        if(Check() == 'X'){
            cout<<"X wins!"<<endl;
            break;
        }
        if(Check() == 'O'){
            cout<<"O wins!"<<endl;
            break;
        }
        TogglePlayer();
        Check();
    }
    system("pause");
    return 0;
}