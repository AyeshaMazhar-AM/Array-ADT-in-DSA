#include<iostream>
using namespace std;

int main(){
	int A[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
	int low=6;
	int high = 19;
	int n = 11;
	int diff = low-0;
	
	for(int i=0; i<n; i++){
	if(A[i]-i !=diff)
	{
		while(diff<A[i]-i)
	{
	cout<<"missing element is "<<i+diff<<endl;
	diff++;
	}
}
}}
