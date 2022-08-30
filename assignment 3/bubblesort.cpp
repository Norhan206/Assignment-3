#include<iostream>
#include<vector>
using namespace std;


void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(vector<int>& arr)
{
    
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] > arr[j + 1])

                Swap(&arr[j], &arr[j + 1]);
        }
    }

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    
}

int main()
{
    cout << "Sorted array: " << endl;
    vector<int> array = {1,6,200,3,5};
    

    bubblesort(array);

   

    return 0;
}
