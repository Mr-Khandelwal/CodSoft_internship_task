//                    #Task 2
/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/

#include<iostream>
using namespace std;

double addition(double a,double b)
{
    return a+b;
}
double substraction(double a,double b)
{
    return a-b;
}
double Multiplication(double a,double b)
{
    return a*b;
}
double Division(double a,double b)
{
    return a/b;
}

int main()
{
    double x,y;
    char choice;
    char a;
    double result;
    cin>>x;
    do
    {
        cin>>choice;
        switch(choice)
        {
        case '+':
            cin>>y;
            result = addition(x,y);
            cout<<"Addition of two no = "<<result;
            break;

        case '-':
            cin>>y;

            result = substraction(x,y);
            cout<<"substraction of two no = "<<result;
            break;

        case '/':
            cin>>y;
            if(y==0)
            {
                cout<<x<<" can't divide by 0 ";
            }
            result = Division(x,y);
            cout<<"Division of two no = "<<result;
            break;

        case '*':
            cin>>y;
            result = Multiplication(x,y);
            cout<<"Multiplication of two no = "<<result;
            break;

        default:
            cout<<"Invalid opertaor";
        }
        cout<<"\nDo you want to continue (Y/N) : ";
        cin>>a;
        x=result;
    }while(a=='Y' || a=='y');
    return 0;
}
