#pragma once;
#include<iostream>
using namespace std;
#include<string>
class course;
#include"course.h"
class student{

	string name;
	string username;
	string roll_no;
	int noOfc;
	course *ptr[2];


public:
	friend class course;
	student();
	student(string,string,string);
	~student();
	void print();
	void addcourse(course*);
	void removecourse(course*);
	friend ostream &operator<<(ostream &out ,const student &obj){
		out<<"The Name of student is : "<<obj.name<<endl;
		out<<"The Username of student is : "<<obj.username<<endl;
		out<<"The roll no of student is : "<<obj.roll_no<<endl;
		out<<"The courses of student is : "<<endl;
		for(int i=0;i<obj.noOfc;i++){
			out<<obj.ptr[i]<<" ";
		}
		return out;
	
	}


};