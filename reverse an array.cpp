#include<iostream>
using namespace std;

struct array{
	int A[10];
	int size;
	int length;
	
};

void Display (struct array arr){
	cout<<"\nelements are :"<<endl;
	for(int i=0; i<arr.length; i++)
	{
		cout<<arr.A[i]<<endl;;
	}
}

void Reverse(struct array *arr)
{
	int *B;
	int i,j;
	B = new int (arr->length);
	for (i=arr->length-1,j=0; i>=0; i--, j++){
		B[j] = arr->A[i];
	}
	for(int i=0; i<arr->length; i++){
		arr->A[i] = B[i];
	}
}

void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x = *y;
	*y = temp;
}

void Reverse2(struct array *arr){
	int i,j;
	for(i= 0,j=arr->length-1; i<j; i++,j--){
		swap(&arr->A[i], &arr->A[j]);
	}
}

int main()
{
	array arr = {{2, 3, 6, 8, 1}, 10, 5};
   
    Reverse(&arr);
	Display (arr);

	Reverse2(&arr);
	Display (arr);

}
