#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int fact =1;

	for(int i=1 ; i<=n; i++){
		fact *=i;

	}

	cout<<n<<" is a fact:"<<fact<<endl;

	return 0;

}
