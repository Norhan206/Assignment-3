#include <vector>
#include<iostream>
using namespace std;

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(vector<int>& arr) {

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[min] > arr[j])
                min = j;

        Swap(&arr[i], &arr[min]);
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

int main() {
    cout << "Sorted array: " << endl;
    vector<int> array = { 1,3,6,200,5 };

    selectionSort(array);


}