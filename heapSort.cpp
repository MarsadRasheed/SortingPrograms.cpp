#include <iostream> 

using namespace std; 

void heapify(int arr[], int n, int i) 
{ 
	int largest = i; 
	int l = 2*i + 1; 
	int r = 2*i + 2; 

	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	if (largest != i) 
	{ 
		swap(arr[i], arr[largest]); 

		heapify(arr, n, largest); 
	} 
} 


void miniHeapify(int array[],int size,int i){
	int smallest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;
	
	if( left < size && array[left] < array[smallest] ){
		smallest = left;
	}
	
	if( right < size && array[right] < array[smallest] ){
		smallest = right;
	}
	
	if( smallest != i){
		swap(array[smallest] , array[i]);
		miniHeapify(array,size,smallest);
	}
}

void heapSort(int arr[], int n) 
{ 
	for (int i = n / 2 - 1; i >= 0; i--) 
		heapify(arr, n, i); 

	for (int i=n-1; i>=0; i--) 
	{ 
		swap(arr[0], arr[i]); 

		heapify(arr, i, 0); 
	} 
} 
 
void deheapSort(int arr[], int n) 
{ 
	for (int i = n / 2 - 1; i >= 0; i--) {
		miniHeapify(arr, n, i); 
	}

	for (int i=n-1; i>=0; i--) 
	{ 
		swap(arr[0], arr[i]); 
		miniHeapify(arr, i, 0); 
	} 
} 

void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 

int main() 
{ 
	int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	heapSort(arr, n);	
	cout << "Sorted array is \n"; 
	printArray(arr, n); 

	deheapSort(arr, n);
	cout << "Sorted array is \n"; 
	printArray(arr, n); 
} 
