#include<iostream>
using namespace std;
int main(){
	double num1,num2,result;
	char operation;
	cout<<"Enter your operation ";
	cin>>operation;
	cout<<"Enter first number ";
	cin>>num1;
	cout<<"Enter second number ";
	cin>>num2;
	switch(operation){
		case'+':
			result=num1+num2;
			break;
		case'-':
			result=num1-num2;
			break;
		case'*':
			result=num1*num2;
			break;
		case'/':
			if(num2!=0){
				result=num1/num2;
			}
			else{
				cout<<"Error and cannot divide by zero";
				return 1;
			}
			break;
		default:
			cout<<"Invalid operation";
			return 1;
	}
	cout<<"result "<<result;
	return 0;
}
