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
//   iterative version
int BinarySearch(struct array arr, int key){
	int l,mid,h;
	l = 0 ;
	h = arr.length-1;
	while(l<=h)
	{
		mid = (l+h)/2;
		if(key == arr.A[mid])
		return mid;
		else if(key <= arr.A[mid])
		h = mid-1;
		else
		l = mid+1;
	}
	return -1;
}
// recursive 
int RBinSearch(int a[], int l, int h, int key){
	int mid;
	if(l<=h){
		mid = (l+h)/2;
		if(key == a[mid])
		return mid;
		else if (key < a[mid])
		return RBinSearch(a, l , mid-1 , key);
		else 
		return RBinSearch(a, mid+1, h, key);
	}
	return -1;
}

int main()
{
	array arr = {{2, 3, 6, 8, 1}, 10, 5};
	
	cout<<"the num is at index : "<<BinarySearch(arr, 8)<<endl;   //for iterative
	cout<<"the num is at index : "<<RBinSearch(arr.A, 0, arr.length, 2)<<endl;   //recursion
	Display (arr);
	
}
