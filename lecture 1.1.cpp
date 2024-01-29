/*

1. WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has following members:
- company_name
- manager_salary
- employee_salary
- total_staff
- total_annual_revenue
- can_terminate
- use all attributes accessibility in parent class and
child class properly.
- override a method myAccess() in both child
classes to display all parent class’s members value
accordingly.


enter your company name:-rnw
enter your total annual revenue:-400000000
enter your company terminate:-45
enter your maneger salary:-5000000
enter your total staff:-800
enter your emaploy salary:-90000
salary is :90000
name is :rnw
 revenue is :400000000
 terminate is :45
salary is :5000000
staff is :800
*/

#include<iostream>
using namespace std;

class Admin{
	public :
		int total_annual_revenue;
		int company_terminate;
		char company_name[40];
		
		void setdata(){
			cout<<"enter your company name:-";
			cin>>company_name;
			cout<<"enter your total annual revenue:-";
			cin>>total_annual_revenue;
			cout<<"enter your company terminate:-";
			cin>>company_terminate;
		}
		void myAccess(){
			cout<<"name is :"<<company_name<<endl;
			cout<<" revenue is :"<<total_annual_revenue<<endl;
			cout<<" terminate is :"<<company_terminate<<endl;
			
		}
	};
	class Maneger : public Admin
{
	public :
		int maneger_salary;
		int total_staff;
		
		void setdata(){
			cout<<"enter your maneger salary:-";
			cin>>maneger_salary;
			cout<<"enter your total staff:-";
			cin>>total_staff;
		}
		void myAccess(){
			cout<<"salary is :"<<maneger_salary<<endl;
			cout<<"staff is :"<<total_staff<<endl;
		}
};


class Emapolyy : public Maneger
{
	public  :
		int emaploy_salary;
		
		void setdata(){

		cout<<"enter your emaploy salary:-";
		cin>>emaploy_salary;
		
	}
		void myAccess(){
			cout<<"salary is :"<<emaploy_salary<<endl;
			
		}	
		
};

int main(){
	Emapolyy e1;
	e1.Admin::setdata();
	e1.Maneger::setdata();
	e1.Emapolyy::setdata();
	e1.Emapolyy::myAccess();
	e1.Admin::myAccess();
	e1.Maneger::myAccess();
	
	return 0;
	
	
	

}



