#include<iostream>
#include<vector>
using namespace std;

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int Partition(vector<int>& arr, int leftindex, int pivotindex) {

	int low = leftindex - 1;
	int high = pivotindex - 1;

	for (int i = leftindex; i <= high; i++)
	{
		if (arr[i] <= arr[pivotindex])
		{
			low++;
			Swap(&arr[low], &arr[i]);
	 }
	}
	Swap(&arr[low + 1], &arr[pivotindex]);
	return low + 1;
}

void Quicksort(vector<int>& arr, int leftindex, int pivotindex) {

	if (leftindex < pivotindex) 
	{
		int p = Partition(arr, leftindex, pivotindex);

		Quicksort(arr, leftindex, p - 1);
		Quicksort(arr, p + 1, pivotindex);
	}
	
}

int main()
{
	cout << "Sorted array: " << endl;
	vector<int> array = { 1,6,200,3,5 };


	Quicksort(array, 0, 4);
	for (int i = 0; i < array.size(); i++)
		cout << array[i] << " ";


	return 0;
}
