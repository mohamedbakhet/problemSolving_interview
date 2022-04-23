/*#include<iostream>
using namespace std;

void merge(int* arr, int start, int middle, int end) {
	auto const n1 = middle - start + 1;
	auto const n2 = end - middle;
	int* firstarr = new int[n1],
		* secandarr = new int[n2];
	// Copy data to temp arrays leftArray[] and rightArray[]
	for (int i = 0; i < n1; i++)
		firstarr[i] = arr[start + i];
	for (int j = 0; j < n2; j++)
		secandarr[j] = arr[middle + 1 + j];
	int indexOfSubArrayOne = 0, // Initial index of first sub-array
		indexOfSubArrayTwo = 0, // Initial index of second sub-array,
		indexOfMergedArray = start; // Initial index of merged array

	// Merge the temp arrays back into array[left..right]
	while (indexOfSubArrayOne < n1 && indexOfSubArrayTwo < n2) {
		if (firstarr[indexOfSubArrayOne] <= secandarr[indexOfSubArrayTwo]) {
			arr[indexOfMergedArray] = firstarr[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			arr[indexOfMergedArray] = secandarr[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}
	// Copy the remaining elements of
	// left[], if there are any
	while (indexOfSubArrayOne < n1) {
		arr[indexOfMergedArray] = firstarr[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}
	// Copy the remaining elements of
	// right[], if there are any
	while (indexOfSubArrayTwo < n2) {
		arr[indexOfMergedArray] = secandarr[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
}
void sort(int* arr, int start, int end) {
	if (start >= end)
		return;
	int middle = start + (end - start) / 2;
	sort(arr, start, middle);
	sort(arr, middle + 1, end);
	merge(arr, start, middle, end);
}
int main() {
	int n;
	cin >> n;
	int *arr= new int[n];

	for (int i = 0; i < n; i++)
	{
		
		cin >> arr[i];	
	}
	sort(arr,0,n-1);
	for (int i = 0; i < n; i++)
	{

		cout<<arr[i]<<" ";
	}
	return 0;
}


*/