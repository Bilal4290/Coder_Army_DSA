🔢 What is an Array?

    An array is a 📦 container that stores multiple values 🧮 of the same type 🧩 in a single variable, instead of declaring separate variables for each value.

    📦 Array Example:

        Let’s say you want to store the marks of 5 students:

        Without array:

            🎯 marks1 = 90
            🎯 marks2 = 85
            🎯 marks3 = 88
            🎯 marks4 = 76
            🎯 marks5 = 95

        With array:

            📦 marks = [90, 85, 88, 76, 95]

        Now, you can access each element with an index like:

            marks[0] 👉 90
            marks[4] 👉 95


🤔 Why Array Was Needed?

    The Problem Before Arrays:

        Imagine you want to store and manage 100 scores.
        Without an array, you'd need:

            score1, score2, ..., score100 😵‍💫

    Problems:

        ❌ Hard to manage
        ❌ Difficult to loop through
        ❌ Takes too much memory and time


    ✅ How Array Solves It :

        🎯 Stores many values in 1 variable
        🔁 Easy to loop through with index
        🧹 Organized and efficient memory use
        🛠️ Simplifies code


🧠 Simple Diagram


    Index:    0     1     2     3     4
            ┌────┬────┬────┬────┬────┐
    Array:  | 90 | 85 | 88 | 76 | 95 |
            └────┴────┴────┴────┴────┘
            ↑                  ↑
        marks[0]         marks[4]


🛠️ How to Declare an Array in C++ 

    Syntax:

        data_type array_name[size];

    Example:

        int numbers[5]; // Declares an integer array with 5 elements


    ✅ 5 Different Ways to Initialize Arrays :

        Here are 5 different and valid ways to initialize arrays:

        🔹 1. Full Initialization with Size :

            💻 Code:

                int arr[5] = {6, 8, 5, 1, 9};

            ✅ All values are given.
            ⛔ Extra values beyond 5 will cause error.


        🔹 2. Full Initialization without Size :

            💻 Code:

                int arr[] = {6, 8, 5, 1, 9};

            ✅ Size is automatically determined (here, size = 5).

        
        🔹 3. Declare Only (Uninitialized) :

            💻 Code:

                int arr[5];

            ❗ Memory is allocated, but values are garbage (random).
            You must assign values manually.


        🔹 4. Partial Initialization :

            💻 Code:

                int arr[5] = {6, 8};

            ✅ First 2 values set, rest = 0
            Result: {6, 8, 0, 0, 0}


        🔹 5. All Zeros Initialization :

            💻 Code:

                int arr[5] = {0};

            ✅ All values = 0
            Same as: {0, 0, 0, 0, 0}


        ❌ Invalid Examples :

            ❌ Invalid – No Size + Partial Initialization

                int arr = {6, 8}; // ❌ Not an array! This is an error.



🛠️ How to loop an Array in C++ 

    🖨️ 1. Using a for loop (classic way) 

        💻 Code:

            int arr[] = {10, 20, 30, 40, 50};
            int size = sizeof(arr) / sizeof(arr[0]);

            for (int i = 0; i < size; i++) {
                std::cout << arr[i] << " ";
            }

        ✅ Most common method
        ✅ Works with any array


    🔁 2. Using while loop

        💻 Code:

            int i = 0;
            while (i < size) {
                std::cout << arr[i] << " ";
                i++;
            }

    
    🔁 3. Using do-while loop

        💻 Code:

            int i = 0;
            do {
                std::cout << arr[i] << " ";
                i++;
            } while (i < size);


    🌟 4. Using Range-based for loop (C++11+)

        💻 Code:

            for (int element : arr) {
                std::cout << element << " ";
            }

        ✅ Cleaner & modern
        ❗ Only works with arrays where size is known at compile-time


    🧮 5. Using std::begin() and std::end() (C++11+)

        💻 Code:

            #include <iterator>

            for (auto it = std::begin(arr); it != std::end(arr); ++it) {
                std::cout << *it << " ";
            }


📦 What is Contiguous Memory Location?

    In arrays, elements are stored next to each other in memory.

    ✅ Contiguous Memory:

        int arr[4] = {10, 20, 30, 40};

        Memory:

            Index:    0     1     2     3
                    ┌────┬────┬────┬────┐
                    | 10 | 20 | 30 | 40 |
                    └────┴────┴────┴────┘
            Address: 100  104  108  112   ➡️ (Assuming 4 bytes per int)

            ✅ Only first address is needed.
            ✅ Remaining elements are accessed using:

                Address of arr[i] = base_address + (i * size_of_element)


    ❌ If Not Contiguous (like a Linked List):

        Node 1: [10 | addr1]
        Node 2: [20 | addr2]
        Node 3: [30 | addr3]
        Node 4: [40 | NULL]

        Here:

            Each element is stored anywhere in memory
            You need to store the address of the next element with each value

    💬 In Simple Words:

        ✅ Contiguous arrays → Need just the first address + size
        ❌ Non-contiguous structures → Need to store every address


🔢 Why Array Indexing Starts from 0?

    💡 Short Answer:

        Indexing starts from 0 to make address calculation more efficient and to match how memory works at the hardware level.

    🧮 Formula for Memory Address of arr[i]:

        If indexing starts from 0:

            Address = base_address + i × size

            ➡️ Simple, direct, and fast

        If indexing starts from 1:

            Address = base_address + (i - 1) × size

            ➡️ Requires extra subtraction operation each time


    📌 Reason 1: Efficiency of Operation :

        Starting from 0 avoids subtraction, which means:

            ✅ Fewer CPU instructions
            ✅ Faster computation
            ✅ Simpler compiler and hardware logic


🧠 Memory Requirements of Arrays

    When you declare an array, memory is allocated contiguously based on:

        Total Memory = size of data type × number of elements

    Example:

        int arr[5];  // Assume 4 bytes per int
    

    👉 Total memory = 4 × 5 = 20 bytes
    👉 Stored in one block: e.g., from address 1000 to 1019


🔢 Why Different Data Types Use Different Bytes 

    📦 What is a Byte?

        1 Byte = 8 bits

        The more bits, the more range the data type can hold.
        Our computer memory is byte addressable not bit addressable


    📏 Common Data Types & Their Memory Sizes (in bytes)

        Data Type	Size (Bytes)	Size (Bits)	    Typical Range
        bool	    1 byte	        8 bits	        true (1) or false (0)
        char	    1 byte	        8 bits	        ASCII characters (0 to 255)
        int	        4 bytes	        32 bits	        ~ -2.1 billion to +2.1 billion
        float	    4 bytes	        32 bits	        ~ 7 decimal digits (e.g., 3.14)
        double	    8 bytes	        64 bits	        ~ 15 decimal digits (e.g., 3.141592...)
        string	    Varies	        Depends     	Dynamic length (uses heap internally)


    ⚠️ Sizes can vary based on compiler and architecture (32-bit vs 64-bit)
    Use sizeof(type) in C++ to check actual size.

    In C++:

        string is a class (not primitive)
        It uses dynamic memory (heap) to store characters
        Its size depends on the number of characters
        Each character = 1 byte
        Plus extra internal memory (like length, capacity, etc.)






