#include<iostream>
using namespace std;

struct array{
	int *A;
	int size;
	int length;
	
};

void Display (struct array arr){
	cout<<"elements are :"<<endl;
	for(int i=0; i<arr.length; i++)
	{
		cout<<arr.A[i];
	}
}


int main()
{
	array arr;
	cout<<"enter size of array :";
	scanf("%d", &arr.size);
	
	arr.A = new int (arr.size);
	arr.length = 0;
	int n;
	cout<<"enter number of numbers : ";
	scanf("%d", &n);
	cout<<"enter all elements : ";
	for(int i=0;i<n; i++)
	scanf("%d", &arr.A[i]);
	arr.length = n;
	Display (arr);
	
}
