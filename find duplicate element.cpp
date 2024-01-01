#include<iostream>
using namespace std;

int main(){
	int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
	int n=11;
	int lastduplicate=0;
	
	for(int i=0; i<n; i++){
	if(A[i] == A[i+1] && A[i]!=lastduplicate)
	{
		cout<<"duplicate element is "<<A[i]<<endl;
	lastduplicate = A[i];
	}
}
}
