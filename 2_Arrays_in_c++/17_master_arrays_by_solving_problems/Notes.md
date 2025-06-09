🔍 Problem 1️⃣  : Search element in an array

    Given an array arr[] and an element target, check whether target is present in the array. If yes, return its index (or indices), else return -1.

    ✅ 1. Brute Force Approach – Linear Search:

        🔧 Algorithm:

            🔵 Traverse the array from start to end.
            🔵 Compare each element with the target.
            🔵 Return the index if found; else return -1.

        💻 Code:

            #include <iostream>
            using namespace std;

            int linearSearch(int arr[], int size, int target)
            {
                for(int i=0; i < size; i++)
                {
                    if(arr[i] == target)
                    {
                        return i;
                    }
                }
                return -1;
            }

            int main()
            {
                int numbers[] = {5, 8, 2, 4, 9};
                int size = sizeof(numbers) / sizeof(numbers[0]);
                int target = 4;

                int index = linearSearch(numbers, size, target);

                if(index != -1)
                {
                    cout << "Target found at index" << index << endl;
                }
                else
                {
                    cout << "Target not found" << endl;
                }

                return 0;
            }

    
    ⏱ Time Complexity: O(n)
    📦 Space Complexity: O(1)

    ✅ Use when the array is unsorted.

    📝 Note : 

        ❗ Problem: sizeof(arr) inside the function:

            🛑 In the function parameter int arr[], the array decays to a pointer (int* arr).
            🛑 So sizeof(arr) gives you the size of the pointer, not the array.
            🛑 On most systems, sizeof(arr) will be 8 bytes (for 64-bit) or 4 bytes (for 32-bit).
            🛑 sizeof(arr[0]) gives size of one int (usually 4 bytes).
            🛑 So you get n = 8 / 4 = 2, which is incorrect unless the array size is exactly 2.

        🧠 Memory Trick:

            ✅ Inside a function, arr[] becomes a pointer, not the full array.
            ✅ You can only get the actual array size using sizeof in the same scope where the array is declared.



🔍 Problem 2️⃣ : Search element in an array

    ✅ 1. Brute Force – Using Extra Array

        💻 Code:

            #include <iostream>
            #include <vector>
            using namespace std;

            vector<int> reverseArray(int arr[], int size)
            {
                vector<int> reversed(size);

                int i = size-1, j = 0;

                while(i >= 0)
                {
                    reversed[j] = arr[i];
                    j++;
                    i--;
                }

                return reversed;
            }

            int main()
            {
                int numbers[] = {2,4,5,8,9};
                int size = sizeof(numbers) / sizeof(numbers[0]);

                vector<int> reversed = reverseArray(numbers,size);

                cout << "Reversed Array : "; 

                for(int val : reversed)
                    cout << val << " ";

                return 0;
            }


    ✅ 2. Optimized – In-Place Two Pointer Swap (Best Approach)

        🔧 Logic:

            🔵 Use two pointers: one at the beginning, one at the end.
            🔵 Swap elements and move toward center.

        💻 Code:

            #include <iostream>
            using namespace std;

            void reverseArray(int arr[], int size)
            {
                int start = 0, end = size - 1;

                while(start < end)
                {
                    swap(arr[start], arr[end]);
                    start++;
                    end--;
                }
            }

            int main()
            {
                int numbers[] = {2,4,5,8,9};
                int size = sizeof(numbers) / sizeof(numbers[0]);

                reverseArray(arr, size);

                cout << "Reversed array : ";

                for(int i = 0; i < size; i++)
                    cout << arr[i] << " ";
                            
                return 0;
            }


        ⏱ Time: O(n)
        📦 Space: O(1) — in-place

        ✅ Most efficient
        ✅ No extra space
        ✅ Works with large data

        📝 Note:

            🔵 arr[] is actually a pointer to the first element of the array.
            🔵 When you pass arr to the function, you're passing the address of the original array.
            🔵 So any changes made to arr[i] inside the function are reflected in the original array in main().



🔍 Problem 3️⃣ : Find missing number in an array

    Given an array arr[] of size n, containing n distinct integers from 1 to n+1 (i.e., one number missing), find the missing number.

    ✅ 1. Brute Force – Using Nested Loops

        🔧 Logic:

            For every number from 1 to n+1, check if it is present in the array.

        💻 Code:

            #include <iostream>
            using namespace std;

            int findMissingNo(int arr[], int size)
            {
                for(int i=1; i<=size+1; i++)
                {
                    bool found = false;
                    for(int j=0; j<size; j++)
                    {
                        if(arr[j] == i)
                        {
                            found = true;
                            break;
                        }
                    }

                    if(!found) return i;
                }
                return -1;
            }

            int main()
            {
                int numbers[] = {1,2,3,5};
                int size = sizeof(numbers) / sizeof(numbers[0]);

                int missingNo = findMissingNo(numbers,size);

                cout << "Missing No : " << missingNo << endl; 

                return 0;
            }


        ⏱ Time: O(n^2)
        📦 Space: O(1)
        ✅ Simple to understand
        ❌ Very slow for large arrays


    ✅ 2. Optimized – Sum Formula Approach

        🔧 Logic:

            🔵 Sum of 1 to n+1 is (n+1)*(n+2)/2
            🔵 Subtract sum of array from this to find missing number.

        💻 Code:

            #include <iostream>
            using namespace std;

            int findMissingNo(int arr[], int size)
            {
                // sum to size+1 
                long long totalSum = ((size+1) * (size+2)) / 2;

                // sum of array
                long long  arraySum = 0;

                for(int i=0; i < size; i++)
                {
                    arraySum += arr[i];
                }

                int missingNo = totalSum - arraySum;

                return missingNo;
            }

            int main()
            {
                int numbers[] = {1,2,3,5};
                int size = sizeof(numbers) / sizeof(numbers[0]);

                int missingNo = findMissingNo(numbers,size);

                cout << "Missing No : " << missingNo << endl; 

                return 0;
            }


        ⏱ Time: O(n)
        📦 Space: O(1)
        ✅ Efficient
        ❌ Risk of overflow for large n (use long long)


🔍 Problem 4️⃣ : Search element in an array

    ✅ 1. Brute Force

        💻 Code:

            #include <iostream>
            #include <vector>
            using namespace std;

            int fibonacciFun(int fibonacciNo)
            {
                if (fibonacciNo <= 0) return 0;
                if (fibonacciNo == 1) return 0;
                if (fibonacciNo == 2) return 1;

                // Create array for fibonacci series
                vector<int> fibonacciArray(fibonacciNo);

                fibonacciArray[0] = 0;
                fibonacciArray[1] = 1;

                for(int i=2; i < fibonacciNo; i++)
                {
                    fibonacciArray[i] = fibonacciArray[i-1] + fibonacciArray[i-2];
                }

                return fibonacciArray[fibonacciNo - 1]; 
            }

            int main()
            {
                int fibonacciNo;
                cout << "Enter the nth fibonacci number: " << endl;
                cin >> fibonacciNo;

                int fibonacci = fibonacciFun(fibonacciNo);

                cout << fibonacci;

                return 0;
            }


        ⏱ Time complexity : O(n)
        📦 Space complexity : O(n)


🔍 Problem 5️⃣ : Rotate an array by 1

    Given an array of size n, rotate it right by 1 (last element becomes the first).

    ✅ 1. Using Extra Space (New Array)

        🔧 Logic:

            🔵 Create a new array.
            🔵 Copy last element to first position.
            🔵 Copy others from index 0 to n-2.

        💻 Code:

            #include <iostream>
            #include <vector>
            using namespace std;

            vector<int> rotateByOne(int nums[], int size)
            {
                vector<int> rotatedArray(size);

                int i = 0, j=1;

                rotatedArray[0] = nums[size-1];

                while(i < (size-1))
                {
                    rotatedArray[j] = nums[i];
                    i++;
                    j++;
                }


                return rotatedArray;
            }

            int main()
            {
                int numbers[] = {2,4,5,8,9};
                int size = sizeof(numbers) / sizeof(numbers[0]);

                vector<int> rotatedArray = rotateByOne(numbers,size);

                for(int val : rotatedArray)
                {
                    cout << val << " ";
                }

                
                return 0;
            }

        ⏱ Time: O(n)
        📦 Space: O(n)
        ✅ Easy to implement
        ❌ Extra memory used



    ✅ 2.  Shifting Elements One by One

        🔧 Logic:

            🔵 Store the last element.
            🔵 Shift all elements one position to the right.
            🔵 Place the last element at index 0.

        💻 Code:

            #include <iostream>
            using namespace std;

            void rotateByOne(int nums[], int size)
            {
                if (size <= 1) return; 
                
                int lastElem = nums[size-1];

                for(int i=size-2; i >= 0; i--)
                {
                    nums[i+1] = nums[i];
                }

                nums[0] = lastElem;
            }

            int main()
            {
                int numbers[] = {2,4,5,8,9};
                int size = sizeof(numbers) / sizeof(numbers[0]);

                rotateByOne(numbers,size);

                for(int i=0; i < size; i++)
                {
                    cout << numbers[i] << " ";
                }

                
                return 0;
            }

        ⏱ Time: O(n)
        📦 Space: O(1)
        ✅ Simple
        ✅ In-place

    🛑 Segmentation Fault

        A segmentation fault (often abbreviated as segfault) is a runtime error that occurs when your program tries to access memory that it is not allowed to access.


🔍 Problem 6️⃣ : Find second largest element

    ✅ 1.  Better – Two Pass Linear Scan

        🔧 Logic:

            🔵 First pass to find the maximum.
            🔵 Second pass to find the largest element less than the maximum. 

        💻 Code:

            #include <iostream>
            using namespace std;

            int secondLargestFun(int arr[], int size)
            {
                // Find Largest
                int max = INT_MIN;
                for(int i=0; i < size; i++)
                {
                    if(arr[i] > max)
                    {
                        max = arr[i];
                    }
                }

                // Find Second Largest
                int secondMax = INT_MIN;
                for(int i=0; i < size; i++)
                {
                    if(arr[i] != max && arr[i] > secondMax)
                    {
                        secondMax = arr[i];
                    }
                }

                return secondMax;
            }

            int main()
            {
                int numbers[] = {2,4,5,8,9};
                int size = sizeof(numbers) / sizeof(numbers[0]);

                int secondLargest = secondLargestFun(numbers,size);

                cout << "Second Largest : " << secondLargest << endl;
                
                return 0;
            }

        ⏱ Time: O(n)
        📦 Space: O(1)
        ✅ Easy and efficient
        ❌ Requires two passes


    ✅ 2. Single Pass

        🔧 Logic:

            Maintain both max and secondMax in one pass.

        💻 Code:

            #include <iostream>
            using namespace std;

            int secondLargestFun(int arr[], int size)
            {
                if(size < 2) return -1;

                int max = INT_MIN, secondMax = INT_MIN;

                for(int i=0; i<size; i++)
                {
                    if(arr[i] > max)
                    {
                        secondMax = max;
                        max = arr[i];
                    }
                    else if(arr[i] > secondMax && arr[i] != max)
                    {
                        secondMax = arr[i];
                    }
                }

                return secondMax;
            }

            int main()
            {
                int numbers[] = {2,4,5,8,9};
                int size = sizeof(numbers) / sizeof(numbers[0]);

                int secondLargest = secondLargestFun(numbers,size);

                cout << "Second Largest : " << secondLargest << endl;
                
                return 0;
            }

        ⏱ Time: O(n)
        📦 Space: O(1)
        ✅ Best approach
        ✅ Single scan, constant space
        ✅ Works even with duplicates



🔍 Problem 7️⃣ : Find second smalles element

        🔧 Logic:

            Maintain both max and secondMax in one pass.

        💻 Code:

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



