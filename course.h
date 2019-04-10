#pragma once;
#include<iostream>
using namespace std;
class student;
#include"student.h"
class course{
	string coursename;
	string id;
	student* s[4];
	int sc;
	void addstudent(student*);
	void removestudent(student*);

public:
	
	friend class student;
	course();
	course(string,string);
	~course();
	void print();
	friend ostream &operator<<(ostream &out,const course &obj){
		out<<obj.coursename;
		out<<obj.id;
		for(int i=0;i<obj.sc;i++)
		{
			out<<obj.s[i];
		}
		return out;
	}
	
};
	
