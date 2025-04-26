#include<iostream>
#include<cmath>

using namespace std;

int isDigit(int num){
	int count_digit=0;

	while(num>0){
		count_digit++;
		num = num/10;
	}

	return count_digit;

}

int cubSum(int num){
	int sum = 0, lastDig;

	int temp = num;

	while(num>0){
		lastDig = num % 10;
		sum +=pow(lastDig, isDigit(temp));
		num = num/10;
		
	}

	return sum;

}

bool isArmstrong(int num){
	int cubeValue = cubSum(num)

		if(num == cubeValue){
			return true;
		}
		else if ( num == 0){
			return true;
		}
		else{
			return false;
		}

}


int main()
{
	int num;
	cin>>num;

	cout<<isArmstrong(num)<<endl;

	return 0;

}

