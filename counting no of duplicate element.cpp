#include<iostream>
using namespace std;

int main(){
	int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
	int n=11;
	int j;
	for(int i=0; i<n-1; i++){
	if(A[i] == A[i+1] )
	{
		j=i+1;
		while(A[j] == A[i])
		j++;
		cout<<"element is "<<A[i]<<" no of duplicate element is "<<j-i<<endl;
	i=j-1;
	}
	
}
}
