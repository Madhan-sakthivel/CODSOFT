#include<iostream>
using namespace std;
int main()
{
    int a;
    double num1,num2,ans;
    cout<<"enter the number 1 and 2: ";
    cin>>num1>>num2;
    cout<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n";
    cout<<"enter your choose: ";
    cin>>a;
    switch (a)
    {
        case 1:
        ans=num1+num2;
        cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<ans;
        break;
         case 2:
        ans=num1-num2;
        cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<ans;
        break;
        case 3:
        ans=num1*num2;
        cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<ans;
        break;
        case 4:
        ans=num1/num2;
        cout<<"Division of "<<num1<<" and "<<num2<<" is "<<ans;
        break;
        default:
        cout<<"Invalid";
    }
    return 0;
}