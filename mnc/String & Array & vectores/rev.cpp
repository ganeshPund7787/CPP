#include<iostream>
using namespace std;

int main()
{
    int arr[] = {11,22,33,44,55,66,77,88,99};
    int i = 0, j = (sizeof(arr)/sizeof(arr[0]))-1;

    for(i=0; i<(sizeof(arr)/sizeof(arr[0]))/2; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    for(int i=0; i<8; i++) 
        cout << arr[i] << " ";
    return 0;
}
