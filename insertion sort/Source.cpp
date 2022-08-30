#include<iostream>
#include<vector>
using namespace std;


void insertionSort(vector<int>& arr) {
    int index, tmp;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            tmp = arr[i];
            index = i;
            do {
                arr[index] = arr[index - 1];
                index--;

            }

            while (index > 0 && arr[index - 1] > tmp);
            arr[index] = tmp;
        }
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

int main()
{
    cout << "Sorted array: " << endl;
    vector<int> array = { 1,6,200,3,5 };


    insertionSort(array);



    return 0;
}