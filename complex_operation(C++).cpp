#include <iostream>
using namespace std;

class ABC

{
    int var1,var2;
public:
    ABC operator -(ABC &a);
    ABC operator +(ABC &a);
    ABC operator *(ABC &a);
    friend ostream &operator<<(ostream &,ABC &);
    friend istream &operator>>(istream &,ABC &);

};
ABC ABC::operator -(ABC &p)
{
    ABC p1;
    p1.var1=var1-p.var1;
    p1.var2=var2-p.var2;
    return p1;
}

ABC ABC::operator +(ABC &p)
{
    ABC p1;
    p1.var1=var1+p.var1;
    p1.var2=var2+p.var2;
    return p1;
}

ABC ABC::operator *(ABC &p)
{
     ABC p1;
     p1.var1=(var1*p.var1)-(var2*p.var2);
     p1.var2=(var1*p.var2)+(var2*p.var1);
     return p1;
}

ostream & operator <<(ostream &out,ABC &a)
{
    out<<" The Real is "<<a.var1<<endl;
    out<<" The Imaginary is "<<a.var2<<endl;
    return out;
}

istream & operator >>(istream &in,ABC &a)
{
    cout<<"Enter Real Part ";
    in>>a.var1;
    cout<<"Enter Imaginary Part ";
    in>>a.var2;
    return in;
}

int main()

{
    ABC a,b,c;
    int ch;
    char choice;
    do
    {

            cout<<"\n\n\t\t\t Complex Operation \n\n1.Subtract  \n\n2.Add  \n\n3.Multiply \n \n\n Enter A Choice : ";
            cin>>ch;
            switch(ch)
            {
            case 1: cout<<"Enter First Complex Number :\n\n";
                    cin>>a;
                    cout<<"\n\nEnter Second Complex Number :\n\n";
                    cin>>b;
                    c=a-b;
                    cout<<c;
                    break;
            case 2: cout<<"Enter First Complex Number :\n\n";
                    cin>>a;
                    cout<<"\n\nEnter Second Complex Number :\n\n";
                    cin>>b;
                    c=a+b;
                    cout<<c;
                    break;

            case 3: cout<<"Enter First Complex Number :\n\n";
                    cin>>a;
                    cout<<"\n\nEnter Second Complex Number :\n\n";
                    cin>>b;
                    c=a*b;
                    cout<<c;
                    break;
            }
            cout<<"\n Do You Want to Continue : ";
            cin>>choice;
    }while(choice=='Y'||choice=='y');


    return 0;