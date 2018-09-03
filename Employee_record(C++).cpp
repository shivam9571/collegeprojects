#include <iostream>
#include <stdlib.h>
using namespace std;


class personal
{
  char *name,*status;
  int age;
public:
  personal()
{
      age=0;
      name=new char[10];
      status=new char[10];

}
 void getpersonal()
{   cout<<"\n\t\tEnter Personal Details \n\n ";
    cout<<"\nEnter Name : ";
    cin>>name;
    cout<<"\nEnter Status : ";
    cin>>status;
    cout<<"\nEnter Age : ";
    cin>>age;
}
 void showpersonal()
  {
      cout<<"\n\nName : ";
      cout<<name;
      cout<<"\nStatus : ";
      cout<<status;
      cout<<"\nAge : ";
      cout<<age;
  }
};

class professional
{
     char *post;

public:
     int id;
     professional()
     {
           post=new char[10];
           id=0;

     }
     void  getprofessional()
{   cout<<"\n\t\tEnter Professional Details \n\n ";
    cout<<"\nEnter ID : ";
    cin>>id;
    cout<<"\nEnter Post : ";
    cin>>post;

}
     void showprofessional()
  {
      cout<<"\nID : ";
      cout<<id;
      cout<<"\nPost : ";
      cout<<post;

  }

};
class academy
{
     char *year,*university;
     float percentage;
    public:
     academy()
         {
         year=new char[10];
         university=new char[10];
         percentage=0;

        }
     void  getacademy()
    {   cout<<"\n\t\tEnter Academic Details \n\n ";
        cout<<"\nEnter Year : ";
        cin>>year;
        cout<<"\nEnter University : ";
        cin>>university;
        cout<<"\nEnter Percentage : ";
        cin>>percentage;

    }
     void  showacademy()
        {
            cout<<"\nYear : ";
            cout<<year;
            cout<<"\nUniversity : ";
            cout<<university;
            cout<<"\nPercentage : ";
            cout<<percentage;

        }

};

class alldata:public personal,public professional,public academy
{
public:
 void getdata()
{
     getpersonal();
     getprofessional();
     getacademy();
}
    void showdata()
{
        showpersonal();
        showprofessional();
        showacademy();
}

};

int main()
{
  alldata *obj;
  obj = new alldata[100];

  char c2;
  int choice,c=0,r,flag,i=0;
do{
      cout<<"\n\t\t\tMAIN MENU\n\n1.Enter Details\n2.Display Details\n";
      cout<<"\n3.Search Data \n4.Exit\n\n Enter Choice : ";
      cin>>choice;
      switch(choice)
      {


      case 1 : do {
             cout<<"\nRecord No. "<<c+1<<"\n\n\n";
              obj[c].getdata();
              c++;
              cout<<"\n\t\t\t\t\t\tInsert Data Again ? (Y/N) : ";
              cin>>c2;
              }while(c2=='y'||c2=='Y');
               break;
      case 2 : for(i=0;i<c;i++)
               obj[i].showdata();
               break;
      case 3 : cout<<"\nEnter ID : ";
            cin>>r;
             flag=0;
             for(i=0;i<c;i++)
            {
            if(r==obj[i].id)
                {
                obj[i].showdata();
                    flag=1;
                    break;
                 }
             }
        if(flag==0)
        cout<<"Not found";
        break;


      case 4 : exit(0);
      }
}while(choice!=4);





    return 0;
}