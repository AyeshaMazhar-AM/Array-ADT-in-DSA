#include<iostream>
using namespace std;

struct array{
	int A[10];
	int size;
	int length;
	
};

void Display (struct array arr){
	cout<<"elements are :"<<endl;
	for(int i=0; i<arr.length; i++)
	{
		cout<<arr.A[i]<<endl;;
	}
}

void append (struct array *arr, int x){
	if (arr->length<arr->size)
	arr->A[arr->length++] = x;
}

void insert (struct array *arr, int index, int x){
	if( index>=0 && index<=arr->length)
	{
		for (int i= arr->length; i>index; i--)
		arr->A[i] = arr->A[i-1];
		arr->A[index] = x;
		arr->length++;
	}
}

int main()
{
	array arr = {{2, 3, 6, 8, 1}, 10, 5};
	append(&arr, 10);
	insert(&arr,2, 50);
	Display (arr);
	
}
