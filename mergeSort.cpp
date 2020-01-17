#include <iostream>
using namespace std;

void arrayPrint(int size,int array[]){
	
	for(int i=0; i<size; i++){
		cout<< array[i] << "    ";
	}
	
}

void merge(int array[],int first,int mid, int last){
	
	int i,j,k;
	
	int sizeL = mid - first + 1;
	int sizeR = last - mid;
	
	int arrayL[sizeL];
	int arrayR[sizeR];

	for(i=0; i<sizeL; i++){
		arrayL[i] = array[i+first-1];
	}
	
	for(j=0; j<sizeR; j++){
		arrayR[i] = array[mid+j+1];
	}
	
	i=0;j=0;k=0;
	
	while( i <= sizeL && j <= sizeR ){
		if( arrayL[i] <= arrayR[j]){
			array[k] = arrayL[i];
			i++;
		}else{
			array[k] = arrayR[j];
			j++;
		}
		k++;
	}
	
	while( i < sizeL ){
		array[k] = arrayL[i];
		i++;
		k++;
	}
	
	while( j < sizeR ){
		array[k] = arrayR[j];
		k++;
		j++;
	}
	
}


void mergeSort(int array[],int first,int last){
	
	if( first < last ){
		int mid = (last+first) / 2;
    
		mergeSort(array,first,mid);
		mergeSort(array,mid+1,last);
		merge(array,first,mid,last);
		
	}
}

int main(){
	
	int arraySize;
	int array[arraySize];
	
	cout<<"Enter size of the array : ";
	cin>>arraySize;
	
	for(int i=0; i<arraySize; i++){
		cout<<"Enter " << i+1 << " array element : ";
		cin>>array[i];
	}
	
	arrayPrint(arraySize,array);
	cout<<endl;
	mergeSort(array,1,arraySize);
	arrayPrint(arraySize,array);
	
}
