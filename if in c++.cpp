#include<iostream>
using namespace std;
int main(){
int age=0;
cout<<"enter age:"<<endl;
cin>>age;
if(age>1 && age=<10){
	cout<<"you are a chilled "<<endl;
}
else if(age>10 && age<18){
	cout<<"you are a teen"<<endl;
}
else if(age>=18 && age<=200){
	cout<<"you are an adult"<<endl;
}
else{
	cout<<"not of age"<<endl;
}
}
