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

struct array* Merge(struct array *arr1, struct array *arr2){
	int i,j,k;
	i=j=k=0;
	struct array *arr3 = (struct array *)malloc(sizeof(struct array));

	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
			arr3->A[k++] = arr1->A[i++];
			else
			arr3->A[k++] = arr2->A[j++];
	}
	
	for(; i<arr1->length; i++)
	arr3->A[k++] = arr1->A[i];
	
	for(; j<arr2->length; j++)
	arr3->A[k++] = arr2->A[j];
	
	arr3->length = arr1->length + arr2->length;
	arr3->size = 10;
	
	return arr3;
	}


int main()
{
	array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
	array arr2 = {{3, 4, 7, 18, 23}, 10, 5};
	array *arr3;
	
	arr3 = Merge(&arr1, &arr2);
	Display (*arr3);
	return 0;
	
}
