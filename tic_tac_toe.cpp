
#include<iostream>
#include<stdlib.h>
using namespace std;
int row,column;
char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
bool draw=false;
char turn='X';
void display()
{
    cout<<"Player-1 = X and Player-2 = O\n";
    cout<<arr[0][0]<<" | "<<arr[0][1]<<" | "<<arr[0][2]<<"\n";
    cout<<"__|___|__\n";
    cout<<arr[1][0]<<" | "<<arr[1][1]<<" | "<<arr[1][2]<<"\n";
    cout<<"__|___|__\n";
    cout<<arr[2][0]<<" | "<<arr[2][1]<<" | "<<arr[2][2]<<"\n";
}
void player()
{
    if(turn=='X')
    {
        cout<<"player-1 is going to play\n";
    }
    else if(turn=='O')
    {
        cout<<"player-2 is going to play\n";
    }
    cout<<"enter the choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        row=0,column=0;
        break;
        case 2:
        row=0,column=1;
        break;
        case 3:
        row=0,column=2;
        break;
        case 4:
        row=1,column=0;
        break;
        case 5:
        row=1,column=1;
        break;
        case 6:
        row=1,column=2;
        break;
        case 7:
        row=2,column=0;
        break;
        case 8:
        row=2,column=1;
        break;
        case 9:
        row=2,column=2;
        break;
        default:
        cout<<"invalid";
    }
    if(turn=='X' && arr[row][column]!='X' && arr[row][column]!='O')
    {
        arr[row][column]='X';
        turn='O';
    }
    else if(turn=='O' && arr[row][column]!='X' && arr[row][column]!='O')
    {
        arr[row][column]='O';
        turn='X';
    }
    else
    {
        cout<<"its already filled\n";
        player();
    }
   display();
}
bool gameover()
{
    for(int i=0;i<3;i++)
    if(arr[i][0]==arr[i][1] && arr[i][0]==arr[i][2] || arr[0][i]==arr[1][i] && arr[0][i]==arr[2][i])
    {
        return false;
    }
    else if(arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2] || arr[0][2]==arr[1][1] && arr[0][2]==arr[2][0])
    {
        return false;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]!='O' && arr[i][j]!='X')
            {
                return true;
            }
        }
    }
    draw=true;
    return false;
}
int main()
{
    cout<<"Welcome to tic-tac-toe game \n";
    while(gameover())
    {
        display();
        player();
        gameover();
    }
    if(turn=='X')
    {
        cout<<"O is a winner";
    }
    if(turn=='O')
    {
        cout<<"X is a winner";
    }
    return 0;
}
