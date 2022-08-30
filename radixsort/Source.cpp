#include<iostream>
#include<vector>
using namespace std;



int getMax(vector<int>& arr)
{
	int max = arr[0];
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] > max)
			max = arr[i];

	}
	return max;
}

void countsort(vector<int>& arr, int d)
{
	int count[10] = { 0 };
	vector<int> out(arr.size());

	for (int i = 0; i < arr.size(); i++)
		count[(arr[i] / d) % 10]++;

	for (int i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (int i = arr.size() - 1; i >= 0; i--)
	{
		out[count[(arr[i] / d) % 10] - 1] = arr[i];

		count[(arr[i] / d) % 10]--;
	}

	for (int i = 0; i < arr.size(); i++)
		arr[i] = out[i];
}


void radixsort(vector<int>& arr)
{
	int max = getMax(arr);
	for (int d = 1; max / d > 0; d *= 10)
		countsort(arr,d);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
}




int main() {
	cout << "Sorted array: " << endl;
	vector<int> array = { 1,6,200,3,5 };

	radixsort(array);


}