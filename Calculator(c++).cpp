#include <iostream>

using namespace std;


class calculator
{
    int a,b,res;
public:
    int sum(int a,int b)
    {

        res=a+b;
        cout<<res;
    }
      int sub(int a,int b)
    {

        res=a-b;
        cout<<res;
    }

      int mul(int a,int b)
    {

        res=a*b;
        cout<<res;
    }

      int div(int a,int b)
    {

        res=a/b;
        cout<<res;
    }

};

int main()
{
    int x,y;
    char ch,op;
    calculator obj;

    do
    {

        cout<<"\n\t\t\t Calculator \n\n";
        cout<<"\n Enter (Number 1 ,Operator ,Number 2) : ";
        cin>>x>>op>>y;
        cout<<" = ";
        switch(op)
        {
            case '+' : obj.sum(x,y);

                        break;
            case '-' : obj.sub(x,y);
                        break;
            case '*' : obj.mul(x,y);
                        break;
            case '/' : obj.div(x,y);
                        break;

        }
        cout<<"\n\n Do You Wanna Continue ";
        cin>>ch;
    }while(ch=='Y'||ch=='y');

    return 0;
}
