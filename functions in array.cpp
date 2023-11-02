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

int Get(struct array arr, int index){
	if (index>=0 && index<arr.length)
	return arr.A[index];
	return -1;
}

int Set(struct array *arr, int index, int x){    //passing address of array
	if (index>=0 && index<arr->length)
	arr->A[index] = x;
}

int Max(struct array arr){
	int max = arr.A[0];
	for(int i=1; i<arr.length; i++)
	{
		if(max<arr.A[i])
		max = arr.A[i];
		
	}
	return max;
}

int Min(struct array arr){
	int min = arr.A[0];
	for(int i=1; i<arr.length; i++)
	{
		if(min>arr.A[i])
		min = arr.A[i];
		
	}
	return min;
}

int Sum(struct array arr){
	int s = 0;
	for(int i=0; i<arr.length;i++)
	{
		s+=arr.A[i];
	}
	return s;
}

float Avg(struct array arr){
	return (float)Sum(arr)/arr.length;
}

int main()
{
	array arr = {{2, 3, 6, 8, 1}, 10, 5};
	
	//Get an element from an array
	cout<<"get an element : "<<Get(arr, 2);
	
	//set an element   
	Set(&arr, 2, 20);   
	Display (arr);
	
    //maximum element
	cout<<"maximum : "<<Max(arr)<<endl;
	
	//minimum element
	cout<<"minimum : "<<Min(arr)<<endl;
	
	//sum
	cout<<"sum is : "<<Sum(arr)<<endl;
	
	//Avg
	cout<<"Avg is : "<<Avg(arr)<<endl;
	
	
	
}
