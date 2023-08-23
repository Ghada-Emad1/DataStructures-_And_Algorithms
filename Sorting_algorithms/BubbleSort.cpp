#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int array[], int n) {
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
   
}


int main() 
{
    cout<<"Enter number of elements : ";
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}