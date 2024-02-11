#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int number=0;
    int count=0,geussnumber=0;
    srand(time(0));
    number=(rand()%100)+1;
    while(number!=geussnumber)
    {
        cout<<"enter the geussnumber:";
        cin>>geussnumber;
        if(number>geussnumber)
        {
            cout<<"the number is too low \n";
            count++;
        }
        else if(number<geussnumber)
        {
            cout<<"the number is too high \n";
            count++;
        }
        else{
            cout<<"the number is found \n";
            break;
        }
    }
cout<<"the number is found in "<<count<<" counts";
return 0;
}