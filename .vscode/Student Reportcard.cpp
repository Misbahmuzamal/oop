#include<iostream>
#include<fstream>
using namespace std;
class Student {
	private:
		string Name,Rollno,Grade;
	public:
		Student():Name(""),Rollno(""),Grade("") {
		}
		void setRollno(string rollno) {
			Rollno=rollno;
		}
		void setName(string name) {
			Name=name;
		}
		void setGrade(string grade) {
			Grade=grade;
		}
		string getRollno() {
			return Rollno;
		}
		string getName() {
			return Name;
		}
		string getGrade() {
			return Grade;
		}
};
int main() {
	Student s;
	int val;
	cout<<"Student Reportcard Generator\n";
	cout<<"******************************\n";
	cout<<"1.ReportCard\n";
	cout<<"2.Exit\n";
	cin>>val;
	bool exit=false;
	if(val==1) {
		string name,rollno;
		cout<<"Enter name of student:";
		cin>>name;
		s.setName(name);
		cout<<"Enter rollno of student:";
		cin>>rollno;
		s.setRollno(rollno);
		int Physics,Chemistry,math,total,avg;
		cout<<"Enter physics marks:";
		cin>>Physics;
		cout<<"Enter Chemistry marks:";
		cin>>Chemistry;
		cout<<"Enter Math marks:";
		cin>>math;
		total=Physics+Chemistry+math;
		avg=total/3;
		if(avg>=90 && avg<=100) {
			s.setGrade("A");
		}
		else if(avg>=80 && avg<=90) {
			s.setGrade("B");
		}
		else if(avg>=70 && avg<=80) {
			s.setGrade("C");
		}
		else if(avg>=60 && avg<=70) {
			s.setGrade("D");
		}
		else {
			s.setGrade("F");
		}
		cout<<s.getGrade();
		fstream out("C:\\Users\\sam\\Desktop\\oop\\.vscode\\ storedata", ios::app);
		out<<"name:"<<s.getName()<<"\n"<<"RollNo:"<<s.getRollno()<<"\n"<<"Grade:"<<s.getGrade()<<"\n";
		cout<<"\ndata store in the file";

	} 
	else if (val == 2) {
        cout << "Good Luck!" << endl;
        exit=true;
        return 0;
    }
    else {
        cout << "Invalid choice. Please try again." << endl;
    }
	return 0;
}

