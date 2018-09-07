#include <bits/stdc++.h>

using namespace std;

class student
{
static int count;
char *name;
char *div;
char *std;

public:

int rollno;

student()
{
	rollno=0;
	name=new char[20];
	div=new char[10];
	std=new char[15];
}

	student(student &x)
	{
rollno=x.rollno;
strcpy(name, x.name);
strcpy(div, x.div);
strcpy(std, x.std);
}
	static void disp_count()
	{
		cout<<"No. of Students : "<<count;
	}

inline	void display()
	{
	cout<<"\n\n\nRoll Number : "<<rollno<<"\nName : "<<name<<"\nDivision : "<<div<<"\nYear : "<<std;

	}

~student()
{

}



friend class inserts;
}; //end class

class inserts
{
public :
    void getdata(student &);

};

void inserts::getdata(student &object)
{
    cout<<"\nEnter Roll No. :";
cin>>object.rollno;
cout<<"\nEnter Name : ";
cin>>object.name;
cout<<"\nEnter Divison : ";
cin>>object.div;
cout<<"\nEnter Year : ";
cin>>object.std;
	object.count++;
}


int student::count;

int main()

{


student *s;
s= new student[100];
inserts f[100];



	int i,c=0,flag=0,ch,r;
	char c1,c2;

	do{ system("cls");
		cout<<"\n\t\t\t\t\t STUDENT DATABASE MANAGEMENT SYSTEM\n";
		cout<<"\n\t\t\t\t\t\t 1:Insert Data \n\t\t\t\t\t\t 2:Display Data\n\t\t\t\t\t\t 3:Search Data";
		cout<<"\n\t\t\t\t\t\t 4:Modify Data \n\t\t\t\t\t\t 5:Delete Data \n\t\t\t\t\t\t 6.Exit\n";
		cout<<"\n\n\n SELECT OPTION(1-6) : ";
		cin>>ch;

		switch(ch)
		{
		case 1:  system("cls");
                cout<<"\n\t\t\t\t\t\t 1:Insert Data\n\n";
                do{
                cout<<"\nRecord No. "<<c+1<<"\n\n\n";
				f[c].getdata(s[c]);
				c++;
				cout<<"\n\t\t\t\t\t\tInsert Data Again ? (Y/N) : ";
				cin>>c2;
				}while(c2=='y'||c2=='Y');
				break;
		case 2: system("cls");
		         cout<<"\n\t\t\t\t\t\t 2:Display Data\n\n";
				for(i=0;i<c;i++)
				s[i].display();
				break;
		case 3: system("cls");
		         cout<<"\n\t\t\t\t\t\t 3:Search Data\n\n";
				cout<<"\nEnter the Roll NO. : ";
				cin>>r;
				flag=0;
				for(i=0;i<c;i++)
				{
					if(r==s[i].rollno)
					{
						s[i].display();
						flag=1;
						break;
					}
				}
				if(flag==0)
				cout<<"Not found";
				break;
		case 4: system("cls");
		         cout<<"\n\t\t\t\t\t\t 4:Modify Data\n\n";
				cout<<"\nEnter the Roll NO. : ";
				cin>>r;
				flag=0;
				for(i=0;i<c;i++)
			{
					if(r==s[i].rollno)
				{
					f[i].getdata(s[i]);
					flag=1;
					break;
				}
			}
		if(flag==0)
			cout<<"Not found";
		break;
		case 5: system("cls");
                 cout<<"\n\t\t\t\t\t\t 5:Delete Data\n\n";
		        cout<<"\nEnter the Roll NO. : ";
                cin>>r;
                flag=0;
                for(i=0;i<c;i++)
                {
                    if(r==s[i].rollno)
			{
				s[i].display();
				flag=1;
				delete []s;
				cout<<"\n\n\nData Is Successfully Destroyed";
				break;
			}
                }
        if(flag==0)
                cout<<"\n\t\t\t\t\t\tNot found";
		break;
		if(flag==1)
		{
			for(;i<c;i++)
			{
				s[i]=s[i+1];
			}
			c--;
			delete []s;

		}
		else
			cout<<"\n\t\t\t\t\t\tNot found";
		break;
		case 6 : system("cls");
               cout<<"\n\n\t\t\t\t THANKYOU FOR USING STUDENT DATABASE MANAGEMENT SYSTEM\n\n\n\n";

               exit(0);

        default: cout<<"\n Please Select a Valid Option\n\n\n\n\n\n\n\n\n\n";
		} //end switch

		cout<<"\n\t\t\t\t\tDo You Want To Select Other Options (Y/N)";
		cin>>c1;
	}while(c1=='y'||c1=='Y');

               if((c1=='N'||c1=='n'))
{
    system("cls");
            cout<<"\n\n\t\t\t\t THANKYOU FOR USING STUDENT DATABASE MANAGEMENT SYSTEM\n\n\n\n";


}



		return 0;
} //end main




