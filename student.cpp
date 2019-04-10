#include"student.h"
#include"course.h"

student::student(string u, string n, string r ){
	noOfc=0;
	username=u;
	name=n;
	roll_no=r;
	ptr[0]=nullptr;
	ptr[1]=nullptr;
	
}



void student::addcourse(course* a){
	int k=0;
	for(int i=0;i<noOfc;i++)
	{
		if(ptr[i]==a)
		{
			cout<<"already taken";
			k=1;
		}
	}
	if(k==0)
	{
	if(noOfc>2)
		cout<<"max courses taken"<<endl;
	else 
		{
			ptr[noOfc]=a;
			a->addstudent(this);
			cout<<"course added"<<endl;
			noOfc++;
	    }

	}

	
}

void student::print(){
	cout<<username<<endl;
	cout<<name<<endl;
	cout<<roll_no<<endl;
	for(int i=0;i<2;i++)
	{
		if (ptr[i] != nullptr)
			cout<<ptr[i]->coursename<<endl;
	}
}
void student::removecourse(course* c){
	bool f=false;
	for(int i=0;i<noOfc;i++)
	{
		if(ptr[i]==c)
		{
			if(i==0)
			{
				ptr[i]=ptr[i+1];
				ptr[i+1]=nullptr;
				f=true;
				removestudent(*this);
				noOfc--;
			}
			else if(i==1)
			{
				ptr[i]=nullptr;
				f=true;
				removestudent(*this);
				noOfc--;
			}

		}
		if(f==false)
		{
			cout<<"course not taken"<<endl;
		}

	}





}
student::~student(){
	/*for(int i=0;i<noOfc;i++)
	{
		delete ptr[i];
		ptr[i]=nullptr;
	}*/
}
