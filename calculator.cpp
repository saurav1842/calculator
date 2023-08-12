#include<iostream>
using namespace std;
float addFun(float, float);
float subFun(float, float);
float mulFun(float, float);
float divFun(float, float);
int main()
{
    float num1, num2, res;
    int choice;
    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>num1>>num2;
        }
        switch(choice)
        {
            case 1:
                res = addFun(num1, num2);
                cout<<"\nResult = "<<res<<endl;
                break;
            case 2:
                res = subFun(num1, num2);
                cout<<"\nResult = "<<res<<endl;
                break;
            case 3:
                res = mulFun(num1, num2);
                cout<<"\nResult = "<<res<<endl;
                break;
            case 4:
                res = divFun(num1, num2);
                cout<<"\nResult = "<<res<<endl;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
    }
    while(choice!=5);
    cout<<endl;
    return 0;
}
float addFun(float a, float b)
{
    return (a+b);
}
float subFun(float a, float b)
{
    return (a-b);
}
float mulFun(float a, float b)
{
    return (a*b);
}
float divFun(float a, float b)
{
    return (a/b);
}