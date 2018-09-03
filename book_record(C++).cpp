#include<iostream>
#include<string.h>
using namespace std;
class book
{
float price;
int qty;
char *publication;


public:
char *author;
char *title;

 book()
{
     price=0;
     qty=0;
     author= new char[10];
     title=new char[10];
     publication= new char[10];
}
void getdata()
{
                cout<<"\nEnter Author : ";
                cin>>author;
                cout<<"\nEnter Title : ";
                cin>>title;
                cout<<"\nEnter Quantity : ";
                cin>>qty;
                cout<<"\nEnter Plublication";
                cin>>publication;
                cout<<"\nEnter Price";
                cin>>price;


}
void display()
{
    cout<<"\n\nAuthor : "<<author<<"\nTitle : "<<title<<"\nQuantity : "<<qty<<"\nPublication : "<<publication<<"\nPrice : "<<price;
}
void purchase()
{
    float bill;
    int q;

    cout<<"\nEnter Quantity : ";
    cin>>q;
    if(q<=qty)
    {
        bill=q*price;
        cout<<"Total Bill = "<<bill;
        qty=qty-q;


    }
    else
    {
        cout<<"\nRequired Copies Not in Stock\n";
    }
}
};
int main()
{
    book b[100];
    int c=0,i,ch,flag;
    char ch1,t[10],a[10];
    do
    {
        cout<<"\n\t\tMAIN MENU\n\n1.Enter Book Data\n2.Display Available Books\n3.Purchase Books\n\nEnter Choice : ";
        cin>>ch;
                switch (ch)
                {
                case 1:b[c].getdata();
                c++;
                break;
                case 2:
                    cout<<"\n\nBOOK SHOP";

                    for(i=0;i<c;i++)
                    {
                        b[i].display();

                    }
                    break;
                case 3:
                    cout<<"Enter Title or Name of Author : ";
                    cin>>t;
                    flag=0;
                    for(i=0;i<c;i++)
                    {
                        if((strcmp(t,b[i].title)) || (strcmp(t,b[i].author)))
                                {
                            flag=1;
                            break;
                                }
                    }
                    if (flag==1)
                        b[i].purchase();
                    else
                        cout<<"Sorry!You Haven't Purchased this Book\n";
                    break;
            }
                    cout<<"\n\nDo You Wanna Continue(y/n)";
                    cin>>ch1;
        }while(ch1=='y'||ch1=='Y');
        return 0;
}
