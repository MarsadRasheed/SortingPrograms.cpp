#include <iostream>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0; i<size; i++){
		cout<<arr[i] << "  ";
	}
}

void getArray(int arr[],int size){
	
	for(int i=0;i<size; i++){
        cout<<"Enter "<< i+1 << " element : " ;
		cin>>arr[i];
	}
}

void insertionSort(int arr[],int size){

	int j,temp;	
	for( int i=1; i<size; i++){
		temp = arr[i];
		j = i-1;
		while( j>=0 && temp  < arr[j] ){
			arr[j+1] = arr[j];
			j= j-1;
		}
		arr[j+1] = temp;
	}
}

int main(){
	
	int size;
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	int arr[size];
	
	getArray(arr,size);	
	
	insertionSort(arr,size);
	
	cout<<"\nAfter insertion, array is : \t";	
	
	printArray(arr,size);

}
