#include<iostream>
using namespace std;

int main(){
	int A[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
	int sum =0;
	int n = 12;
	for(int i=0; i<11; i++){
		sum+=A[i];
		
	}
	int s=n*(n+1)/2;
	cout<<s-sum<<endl;
	
}
