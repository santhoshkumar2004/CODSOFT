#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	int number=(rand()%100)+1;
	int guess=0;
	do{
		cout<<"Enter your guess ";
		cin>>guess;
		if(guess>number){
			cout<<"too high"<<endl;
		}
		else if(guess<number){
			cout<<"too low"<<endl;
		}
		else {
			cout<<"your guess is correct";
		}
	}while(guess!=number);
}


