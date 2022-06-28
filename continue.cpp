#include<iostream>
using namespace std;
int main(){
//given number is prime or not//
int num;
cin>>num;
int i;
for(i=2;i<num;i++){
	if(i%2 !=0){
		continue;
	}
	cout<<i<<"";
}
}

