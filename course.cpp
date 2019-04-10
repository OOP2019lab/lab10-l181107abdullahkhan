#include"course.h"
#include"student.h"

course::course(string n,string i){
	coursename=n;
	id=i;
	sc=0;
	s[0]=nullptr;
	s[1]=nullptr;
	s[2]=nullptr;
	s[3]=nullptr;
}

void course::print(){

	cout<<coursename<<endl;
	cout<<id<<endl;
}
void course::addstudent(student* c){

	s[sc]=c;
	sc++;

}
void course::removestudent(student* c)
{

	for(int i=0;i<sc;i++)
	{
		if(s[i]==c)
		{
			for(int j=0;j<sc-i;j++)
			{
				s[j]=s[j+1];
			}

		}
		sc--;




}




course::~course()
{
	/*for(int i=0;i<sc;i++)
	{
		delete s[i];
		s[i]=nullptr;
	}*/
}