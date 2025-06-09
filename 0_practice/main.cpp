#include <iostream>
using namespace std;

int secondSmallestFun(int arr[], int size)
{
    if(size < 2) return -1;

    int min = INT_MAX, secondMin = INT_MAX;

    for(int i=0; i < size; i++)
    {
        if(arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if(arr[i] > min && arr[i] < secondMin)
        {
            secondMin = arr[i];
        }
    }


    return secondMin;
}

int main()
{
    int numbers[] = {2,4,5,8,9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int secondSmallest = secondSmallestFun(numbers,size);

    cout << "Second Smallest : " << secondSmallest << endl;
    
    return 0;
}
