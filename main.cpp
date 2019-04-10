
#include"course.h"
#include"student.h"




	void main()
{
	student *S1=new student("anum@yahoo.com","Anum","11-1351");
	student *S2=new student("sara@gmail.com","Sara","12-6462");
	student *S3=new student("sana@hotmail.com","Sana","11-4531");
	student *S4=new student("zara@yahoo.com","Zara","12-4342");
	student *S5=new student("hira@github.com","Hira","11-5940");

	course *C1=new course("OOP", "CS102");
	course *C2=new course("PF", "CS101");
	course *C3=new course("AI", "CS365");

	S1->addcourse(C1);
	S1->addcourse(C2);
	S1->addcourse(C1);
	S1->addcourse(C3);
	S2->addcourse(C2);
	S3->addcourse(C2);
	S4->addcourse(C2);
	S5->addcourse(C2);
	//C1->addStudent(S5);
	
	cout<<*S1; // this should print name RollNo and courses taken by S1;
	cout<<*C2; // this should print name and ID and list of student taking C2
	cout<<*C1; // this should print name and ID and list of student taking C2
	
	S5->dropcourse(C1);
	S4->dropcourse(C3);
	//C1->task3_dropstudent(S1);
	system("pause");
	
}
