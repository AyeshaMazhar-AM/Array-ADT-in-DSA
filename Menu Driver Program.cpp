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
		cout<<arr.A[i]<<endl;;
	}
}

void Insert (struct array *arr, int index, int x){
	if( index>=0 && index<=arr->length)
	{
		for (int i= arr->length; i>index; i--)
		arr->A[i] = arr->A[i-1];
		arr->A[index] = x;
		arr->length++;
	}
}

void append (struct array *arr, int x){
	if (arr->length<arr->size)
	arr->A[arr->length++] = x;
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


void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int Linearsearch(struct array *arr, int key){
	for (int i= 0 ; i<arr->length; i++)
	{
		if(key==arr->A[i])
		{
			swap(&arr->A[i], &arr->A[0]);
			return i;
		}
	}
	return -1;
}

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

int main()
{
	struct array arr1;
	int ch;
	int x, index;
	
	cout<<"Enter Size of array : "<<endl;
	scanf("%d,%d", &arr1.size);
	arr1.A = (int *)malloc(arr1.size*sizeof(int));
	do{
	
	cout<<"\nMenu : "<<endl;
	cout<<"1.Insert"<<endl;
	cout<<"2.append"<<endl;
	cout<<"3.Delete"<<endl;
	cout<<"4.search"<<endl;
	cout<<"5.Display"<<endl;
	cout<<"6.Exit"<<endl;
	
	cout<<"enter your choice :";
	cin>>ch;
	
	switch (ch) {
	case 1:
	cout<<"Enter an Element and Index"<<endl;
	scanf("%d,%d", &x, &index);
	Insert(&arr1, index, x);
	break;
		
	case 2:
	cout<<"Enter Element"<<endl;
	scanf("%d,%d", &x);
	append(&arr1, x);
	break;
	
	case 3:
	cout<<"Enter index"<<endl;
	scanf("%d,%d", &index);
	x = Delete(&arr1, index);
	cout<<"deleted element is :"<<x;
	break;
	
	case 4:
	cout<<"Enter key you want to search"<<endl;
	scanf("%d,%d", &x);
	index = Linearsearch(&arr1, x);
	cout<<"Element index is :"<<index;
	break;
	
	case 5:
	Display(arr1);
	}
	
	}while(ch<6);
	
	return 0;	
}
