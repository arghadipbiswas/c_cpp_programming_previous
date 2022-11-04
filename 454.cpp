#include<iostream>
using namespace std;

class stu
{
    
    char name[20],add[20];
    int roll,zip;
    

    public:
    
    stu ();//Constructor
    ~stu();//Destructor
    void read();
    void disp();
};

stu :: stu()
{
	char name[20] = {'\0'},add[20] = {'\0'};
	int roll=0,zip=0;
    cout<<"\nThis is Student Details constructor called..........."<<endl;
}


void stu :: read()
    
{       
	    cout<<"\nEnter the student Name :: ";
        cin>>name;
        cout<<"\nEnter the student roll no :: ";
        cin>>roll;
        cout<<"\nEnter the student address :: ";
        cin>>add;
        cout<<"\nEnter the Zipcode :: ";
        cin>>zip;

        
}

void stu :: disp()
{
    cout<<"\nThe Entered Student Details are shown below ::---------- \n";
        cout<<"\nStudent Name :: "<<name<<endl;
        cout<<"\nRoll no   is :: "<<roll<<endl;
        cout<<"\nAddress is :: "<<add<<endl;
        cout<<"\nZipcode is :: "<<zip;
}

stu :: ~stu()
{
        cout<<"\n\nStudent Detail is Closed.............\n";
}


int main()
{
	int n,i;
	cout<<"Enter no. of students : ";
	cin>>n;
	stu s[n];//array of objects
	for(i=0;i<n;i++)
	{
	cout<<"\n\nEnter values for"<<i+1<<" "<<"students"<<endl;	
	s[i].read();//call of input()
	s[i].disp();
}
		
		
		   
    return 0;
}
