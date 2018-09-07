#include <iostream>
using namespace std;
class student1
{
private:

	        string name;
	        string standard;
	        char div;
	        string DOB;
public:
	        int roll;
	        student1()
			{
	        	        name="";
	        	        roll=0;
	        	        standard="";
	        	        div='C';
	        	        DOB="";
			}
	        student1(student1 &a)
	        {
	        	this->name=a.name;
	        	this->roll=a.roll;
	        	this->standard=a.standard;
	        	this->div=a.div;
	        	this->DOB=a.DOB;
	        }
	        void getdata()
	        {
	        	cout<<"enter roll number"<<endl;
	        	        cin>>roll;

	        	        cout<<"Enter name";
	        	        cin>>name;

	        	        cout<<"enter your standard"<<endl;
	        	        cin>>standard;

	        	        cout<<"enter your div"<<endl;
	        	        cin>>div;
	        	        cout<<"enter you DOB"<<endl;
	        	        cin>>DOB;
	        }
	     /*   void display()
	        {
	        	cout<<"Your name is :- "<<name<<endl;
	        	cout<<"Your roll no is:- "<<roll<<endl;
	        	cout<<"Your standard is:- "<<standard<<endl;
	        	cout<<"Your division is:- "<<div<<endl;
	        	cout<<"Your DOB is:- "<<DOB<<endl;

	        }
	        */
	       friend class student2;
};
class student2
{
private:
    string bloodGroup;
            string address;
            string telno;
            string dl_no;
public:
           /* student2()
{
            	bloodGroup="";
            	        address="";
            	        telno="";

}*/
            void getdata(student1 &x)
            {
            	x.getdata();
            	cout<<"enter your blood group:- "<<endl;
            	        cin>>bloodGroup;

            	        cout<<"enter address";
            	        cin>>address;

            	        cout<<"enter your telephone number:- "<<endl;
            	        cin>>telno;

            	        cout<<"enter your driving license number:- "<<endl;
            	        cin>>dl_no;
            }
            void display(student1 &y)
            {
            	//y.display();
                cout<<"Your name is :- "<<y.name<<endl;
	        	cout<<"Your roll no is:- "<<y.roll<<endl;
	        	cout<<"Your standard is:- "<<y.standard<<endl;
	        	cout<<"Your division is:- "<<y.div<<endl;
	        	cout<<"Your DOB is:- "<<y.DOB<<endl;
	        	cout<<"Your Blood Group is:- "<<bloodGroup<<endl;
	        	cout<<"Your Address is:- "<<address<<endl;
	        	cout<<"Your telephone number  is:- "<<telno<<endl;
	        	cout<<"Your driving license no is:- "<<dl_no<<endl;
            }
};
int main()
{
	int i=0,j,choice,r,no,flag=0;
	char ch;
	student1 s1[100];
	student2 s2[100];

do{

	cout<<"1.INPUT \n 2.DISPLAY \n 3.UPDATE \n 4.DELETE \n 5.SEARCH"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice)
		   {
		case 1:
			{
				cout<<"enter no of records:- "<<endl;
				cin>>no;
				for(i=0;i<no;i++)
				{
				s2[i].getdata(s1[i]);
    		     i++;
				}
		       break;
			}
		case 2:
		{
			for(j=0;j<i;j++)
			{
				s2[j].display(s1[j]);
			}
			break;
		}
		case 3:
		{
			cout<<"Enter roll no to be updated:- "<<endl;
			cin>>r;
			for(j=0;j<i;j++)
			{
			if(s1[j].roll==r)
			{
				flag=1;
				break;
			}
		}
			if(s1[j].roll==r)
			{
				s2[i].getdata(s1[i]);
			}
			else
			{
				cout<<"Record Not Found"<<endl;
			}
		   }
		case 4:
		{
			cout<<"Enter Your Roll Number:- "<<endl;
			cin>>r;
			for(j=0;j<i;j++)
					{
						if(s1[j].roll==r)
						{
							flag=1;
							break;
						}
		            }
			if(flag==1)
			{
				for(j=0;j<i;j++)
				{
					s1[j]=s1[j++];
					s2[j]=s2[j++];
				}

			i--;
			cout<<"Record found and Deleted"<<endl;
			}
			else
			{
				cout<<"Record Not Found"<<endl;
			}
			break;
		}
		case 5:
		{
			cout<<"Enter Your Roll Number:- "<<endl;
						cin>>r;
						for(j=0;j<i;j++)
								{
									if(s1[j].roll==r)

									{
										flag=1;
										break;
									}
					            }
						if(s1[j].roll==r)
						{
							cout<<"Record Found"<<endl;
						}
						else
							cout<<"Record Not Found"<<endl;
		}
		default:
			cout<<"Wrong Choice"<<endl;
		   }
	cout<<"Do you want to continue"
			<<endl;
	cin>>ch;
}while(ch=='y' || 'Y');
	return 0;
}
