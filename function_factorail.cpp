#include<iostream>
using namespace std;
int factorial(int n){
	int ans= 1;
	for(int i=1;i<=n;i++){
		ans= ans*i;
}
return ans;
}//using function for factorial problem sloving//
int main(){
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
		cout<<factorial(n+1)<<endl;
	cout<<factorial(n-2)<<endl;
	cout<<factorial(n+5)<<endl;
	cout<<factorial(n-3)<<endl;

}
