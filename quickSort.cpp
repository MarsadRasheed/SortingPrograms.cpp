#include <iostream>
using namespace std;

void getArray(int array[],int size){
	for(int i = 0; i<size; i++){
		cout<<"Enter "<< i+1 << " element : ";
		cin>>array[i];
	}
}

void printArray(int array[], int size){
	for(int i =0; i<size; i++){
		cout<<array[i] << "   ";
	}
}

 
int getPivot(int array[],int start,int end){	

	int pivot = array[end];
	int pivotIndex = start;
//	int temp = 0;
	for(int i=start; i<end; i++){
		if( array[i] <= pivot ){
/*			temp = array[i];
			array[i] = array[pivotIndex];
			array[pivotIndex] = temp;
*/			
			swap(array[i],array[pivotIndex]);
			pivotIndex = pivotIndex + 1;
			
		}
	}
	swap(array[end],array[pivotIndex]);
/*	temp = array[end];
	array[end] = array[pivotIndex];
	array[pivotIndex] = temp;
*/	return pivotIndex;
}

void swap(int number1 , int number2){
	int temp = number1;
	number1 = number2;
	number2 = temp;
}

void QuickSort(int array[],int start,int end){
	if( start < end){
		int pivot = getPivot(array,start,end);
		QuickSort(array,start,pivot-1);
		QuickSort(array,pivot+1,end);
	}
}

int main(){
	int size;
	int array[size];
	
	cout<<"Enter size of the array : ";
	cin>>size;
	getArray(array,size);
	QuickSort(array,0,size-1);
	printArray(array,size);
	
}
