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

void bubbleSort(int array[],int size){

	int temp = 0;
	for(int i=0; i<size; i++){
		for(int j=0; j<size-1; j++){
			if( array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

}
int main(){
	
	int size;
	int array[size];
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	getArray(array,size);
	bubbleSort(array,size);
	cout<<"Array in descending order : \t"; 
	printArray(array,size);
		
}
