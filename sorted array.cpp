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

void Display2 (struct array arr2){
	cout<<"\nelements are :"<<endl;
	for(int i=0; i<arr2.length; i++)
	{
		cout<<arr2.A[i]<<endl;;
	}
}

void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x = *y;
	*y = temp;
}

void InsertSort(struct array *arr, int x){
	
	int i= arr->length-1;
	if(arr->length == arr->size)
	return;
	
	while(arr->A[i]>x){
		arr->A[i+1] = arr->A[i];
		i--;
	}
	arr->A[i+1] = x;
	arr->length++;
}

int isSorted(struct array arr){
	for(int i=0; i<arr.length-1 ; i++){
		if(arr.A[i]>arr.A[i+1])
		return 0;
	}
	return 1;
}

void Rearrange(struct array *arr2){
	int i=0;
	int j=arr2->length-1;
	while (i<j){
		while(arr2->A[i]<0)i++;
		while(arr2->A[j]>=0)j--;
		if(i<j)	swap(&arr2->A[i], &arr2->A[j]);
	}
}


int main()
{
	array arr = {{2, 3, 5, 10, 15}, 10, 5};
	
//	insert an element in array
	array arr2 = {{2, 3, -5, 10, -15}, 10, 5};
	InsertSort(&arr, 6);
	Display (arr);
	
//	check whether the array is sorted or not
    cout<<endl;
	cout<<"result : "<<isSorted(arr);
	Display (arr);
	
	
//	-ve elements on left side
	Rearrange(&arr2);
	Display(arr2);

}
