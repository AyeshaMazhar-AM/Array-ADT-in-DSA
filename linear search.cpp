
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

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// linear search by transposition
int Linearsearch(struct array *arr, int key){
	for (int i= 0 ; i<arr->length; i++)
	{
		if(key==arr->A[i])
		{
			swap(&arr->A[i], &arr->A[i-1]);
			return i;
		}
	}
	return -1;
}

// linear search
int LinearSearch(struct array arr, int key){
	for (int i= 0 ; i<arr.length; i++)
	{
		if(key==arr.A[i])
		return i;
	}
	return -1;
}

int main()
{
	array arr = {{2, 3, 6, 8, 1}, 10, 5};
	
	cout<<"index : "<<Linearsearch(&arr, 3)<<endl;   // for linear search by transposition
	
	cout<<"index : "<<LinearSearch(arr, 5)<<endl;  // for linear search
//	Display (arr);
	
}
