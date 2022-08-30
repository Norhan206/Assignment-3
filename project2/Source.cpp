#include <iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int left, int right , int mid) {

    int j = mid + 1;
    int i = left;
    int k = left;
    vector<int> temp(arr.size());

    while (j <= right && i <= mid) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }

    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;

    }
    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int org = left; org <= right; org++) {
        arr[org] = temp[org];
    }
}


void mergeSort(vector<int>& arr, int left, int right) {
    if (right>left) {
       
        int mid = (left + right) / 2;

        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

       
        merge(arr, left, right, mid);
    }

}

int main() {
    vector<int> array = { 1,5,3,200,6 };

    
    
    mergeSort(array, 0, 4); 

    cout << "Sorted array" << endl;
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }

    return 0;
}