#include<iostream>
using namespace std;
int main()
//given number is prime or not//
{
int num;
cin>>num;

for(int i=2;i<num;i++){
	if(num%2 ==0){
		cout<<"not prime";
		break;
		
	}
}
cout<<"prime";
}
