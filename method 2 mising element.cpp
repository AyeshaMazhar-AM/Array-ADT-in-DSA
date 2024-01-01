#include<iostream>
using namespace std;

int main(){
	int A[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
	int H[11];
	int l=1;
	int h = 12;
	int n = 10;
	
	for(int i=0; i<n; i++){
	H[A[i]]++;
}
	for (int i=l; i<=h; i++)
	{
		if(H[i]==0)
		cout<<"missing element is "<<i<<endl;
	}
}
