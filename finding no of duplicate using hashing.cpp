#include<iostream>
using namespace std;

int main(){
	int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
	int H[20];
	int n=11;  
	
	for(int i=0; i<n; i++){
	
		H[A[i]]++;
    }   
    for (int i=1; i<=20; i++){
    	if(H[i]>1)
    	cout<<"duplicate elements "<<H[i]<<endl;
	}
}
