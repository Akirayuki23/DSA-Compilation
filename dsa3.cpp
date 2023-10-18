#include <iostream>
using namespace std;

int main(){
	
	string add1, add2, add3, add4, add5;
	string name1, name2, name3, name4, name5;
	int num1, num2, num3, num4, num5;
	string gender1, gender2, gender3, gender4, gender5;
	int num;
	
	cout<<"01"<<endl;
	cout<<"enter first name"<<endl;
	cin>>name1;
	cout<<"enter your age"<<endl;
	cin>>num1;
	cout<<"enter your address"<<endl;
	cin>>add1;
	cout<<"enter your gender"<<endl;
	cin>>gender1;
	cout<<endl;
	
	
	cout<<"02"<<endl;
	cout<<"enter second name"<<endl;
	cin>>name2;
	cout<<"enter your age"<<endl;
	cin>>num2;
	cout<<"enter your address"<<endl;
	cin>>add2;
	cout<<"enter your gender"<<endl;
	cin>>gender2;
	cout<<endl;
	
	
	cout<<"03"<<endl;
	cout<<"enter third name"<<endl;
	cin>>name3;
	cout<<"enter your age"<<endl;
	cin>>num3;
	cout<<"enter your address"<<endl;
	cin>>add3;
	cout<<"enter your gender"<<endl;
	cin>>gender3;
	cout<<endl;
	
	
	cout<<"04"<<endl;
	cout<<"enter fourth name"<<endl;
	cin>>name4;
	cout<<"enter your age"<<endl;
	cin>>num4;
	cout<<"enter your address"<<endl;
	cin>>add4;
	cout<<"enter your gender"<<endl;
	cin>>gender4;
	cout<<endl;
	
	
	cout<<"05"<<endl;
	cout<<"enter fifth name"<<endl;
	cin>>name5;
	cout<<"enter your age"<<endl;
	cin>>num5;
	cout<<"enter your address"<<endl;
	cin>>add5;
	cout<<"enter your gender"<<endl;
	cin>>gender5;
	cout<<endl;
	
	
	string names [] = {name1, name2, name3, name4, name5};
	int age [] = {num1, num2, num3, num4, num5};
	string address [] = {add1, add2, add3, add4, add5};
	string gender [] = {gender1, gender2, gender3, gender4, gender5};
	
	cout<<"choose a number 1, 2, 3, 4, or 5"<<endl;
	cin>>num;
	
	
	if(num==1){
		cout<<names[0]<<endl;
		cout<<age[0]<<endl;
		cout<<address[0]<<endl;
		cout<<gender[0]<<endl;
	}
	
	 else if(num==2){
		cout<<names[1]<<endl;
		cout<<age[1]<<endl;
		cout<<address[1]<<endl;
		cout<<gender[1]<<endl;
	}
	
		else if(num==3){
		cout<<names[2]<<endl;
		cout<<age[2]<<endl;
		cout<<address[2]<<endl;
		cout<<gender[2]<<endl;
	}
	
		else if(num==4){
		cout<<names[3]<<endl;
		cout<<age[3]<<endl;
		cout<<address[3]<<endl;
		cout<<gender[3]<<endl;
	}
	
		else if(num==5){
		cout<<names[4]<<endl;
		cout<<age[4]<<endl;
		cout<<address[4]<<endl;
		cout<<gender[4]<<endl;
	}
	return 0;
}
