1…...#include<iostream>
using namespace std;
struct employee{
char name;
int age;
char qualification;
int telno;
int address;
}
int main()
{
employee p1;
cout<<"Enter your name "<<endl;
cin>>p1.name;
cout<<"Enter your age "<<endl;
cin>>p1.age;
cout<<"Enter your qualification "<<endll;
cin>>p1.qualification;
cout<<"Enter your telephone number "<<endl;
cin>>p1.telno;
cout<<"Enter address"<<endl;
cin>>p1.address;

employee p2;
out<<"Enter your name "<<endl;
cin>>p2.name;
cout<<"Enter your age "<<endl;
cin>>p2.age;
cout<<"Enter your qualification "<<endll;
cin>>p2.qualification;
cout<<"Enter your telephone number "<<endl;
cin>>p2.telno;
cout<<"Enter address"<<endl;
cin>>p2.address;

employee p3;
out<<"Enter your name "<<endl;
cin>>p3.name;
cout<<"Enter your age "<<endl;
cin>>p3.age;
cout<<"Enter your qualification "<<endll;
cin>>p3.qualification;
cout<<"Enter your telephone number "<<endl;
cin>>p3.telno;
cout<<"Enter address"<<endl;
cin>>p3.address;
cout<<"\n\nEmployees Details"<<endl;
cout<<"The first employee details are \n name :"<<p1.name<<endl;
cout<<"Age :"<<p1.age<<endl;
cout<<"Qualification :"<<p1.qualification<<endl;
cout<<"Telephone number :"<<p1.telno;
cout<<"Address : "<<p1.address<<endl;

cout<<"\nThe first employee details are \n name :"<<p2.name<<endl;
cout<<"Age :"<<p2.age<<endl;
cout<<"Qualification :"<<p2.qualification<<endl;
cout<<"Telephone number :"<<p2.telno;
cout<<"Address : "<<p2.address<<endl;
cout<<"\nThe first employee details are \n name :"<<p3.name<<endl;
cout<<"Age :"<<p3.age<<endl;
cout<<"Qualification :"<<p3.qualification<<endl;
cout<<"Telephone number :"<<p3.telno;
cout<<"Address : "<<p3.address<<endl;
return 0;
}




2……
#include<iostream>
using namespace std;
struct employee{
char firstname;
char surname;
int grosspay;
int hours_worked;
};
int main()
{
employee first1;
cout<<"Enter Your surname "<<endl;
cin>>first1.surname;
cout<<"Enter your first name "<<endl;
cin>>first1.firstname;
cout<<"\n\n Work Rate is 20% per hour"<<endl;
cout<<"To calculate gross pay please Enter number of hours"<<endl;
cin>>first1.hours_worked;
first1.grosspay=first1.hours_worked*0.2;
cout<<"Your gross pay is : "<<first1.grosspay<<endl;
return 0;

}

