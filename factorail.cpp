#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans= 1;
	for(int i=1;i<=n;i++){
		ans= ans*i;
	}
	cout<<"factorail of"<<n<<"is:"<<ans<<endl;
	
	cin>>n; //multipal times factorail hoy to without function //
	ans= 1;
	for(int i=1;i<=n;i++){
		ans= ans*i;
	}
	cout<<"factorail of"<<n<<"is:"<<ans<<endl;
	
	cin>>n;
    ans= 1;
	for(int i=1;i<=n;i++){
		ans= ans*i;
	}
	cout<<"factorail of"<<n<<"is:"<<ans<<endl;

}
