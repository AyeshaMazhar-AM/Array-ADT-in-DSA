
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

int Delete(struct array *arr, int index){
	int x = 0;
	if(index>=0 && index<=arr->length)
	{
		x = arr->A[index];
		for (int i = index; i<arr->length-1; i++)

		arr->A[i] = arr->A[i+1];
		arr->length--;
		return x;
	}
	return 0;
}

int main()
{
	array arr = {{2, 3, 6, 8, 1}, 10, 5};

	cout<<Delete(&arr, 2)<<endl;
	Display (arr);
	
}
