🔢 Taking Input from User in C++

    ⭐ To take input, we use cin >>, which is called the Extraction Operator (>>).
    ⭐ It extracts data from the user's input (keyboard) and stores it in a variable.

    🖥️ Code: 

        #include <iostream>
        using namespace std;

        int main() {
            int a, b;  // Declaring two integer variables

            cout << "Enter your first number: ";  // Asking user for input
            cin >> a;  // Taking input and storing it in `a`

            cout << "Enter your second number: ";
            cin >> b;

            cout << "The sum is: " << a + b;  // Printing the sum
        }

    Explanation:

        🖥️ cin >> a; → Extracts keyboard input and stores it in a
        📥 cin >> b; → Extracts another number and stores it in b
        ➕ cout << a + b; → Displays the sum of a and b


🛠️ Operators in C++:

    🔄 Assignment Operator (=):

        Used to assign a value to a variable
    
            int x = 10; // Assigns 10 to x


    ⚖️ Comparison Operator (==):

        Checks if two values are equal
       
            int a = 5, b = 5;
            if (a == b) {  // ✅ This condition is true
                cout << "Both are equal!";
            }


🔀 Typecasting (Converting Data Types):

    Typecasting means converting one data type into another.

    ❌ Data Loss in Typecasting:

        If we convert a bigger data type into a smaller data type, we may lose data.

        🔍 Example: Typecasting int → char

            int num = 450;  // 450 in binary: 00000000 00000000 00000001 11001010
            char ch = (char)num;  // Only 8 bits remain
            cout << ch;  // ⚠️ Unexpected result due to data loss

            📉 Why Data Loss?

                int is 32 bits, but char is only 8 bits.
                The extra 24 bits are cut off, causing data loss.

    ✅ Safe Typecasting (Small → Large) Converting small data types into bigger ones is safe because the bigger data type can store all the information.

        🔍 Example:

            char ch = 'A';  // 'A' in ASCII = 65
            int num = (int)ch;  // ✅ No data loss
            cout << num;  // Output: 65

        📌 Safe Typecasting: 

            ✔️ char → int
            ✔️ int → float
            ✔️ float → double



🛑 Decision Making in C++ (if-else):

    🖥️ Syntax:

          if (condition) {
                // Execute this block if condition is true
            } else {
                // Execute this block if condition is false
            }  


    💰 Example: Job Offer Based on Package
  
            int main() {
                int package;
                cout << "Enter your package: ";
                cin >> package;

                if (package > 10) {  
                    cout << "Offer Accepted";  // If package is greater than 10 LPA
                } else {
                    cout << "Offer Rejected";  // If package is 10 or less
                }
            }


    🎓 Mark Grading System

            int main() {
                int marks;
                cout << "Enter your marks: ";
                cin >> marks;

                if (marks > 90 && marks < 101) {
                    cout << "A grade";
                } else if (marks > 80) {
                    cout << "B grade";
                } else if (marks > 60) {
                    cout << "C grade";
                } else if (marks > 32) {
                    cout << "D grade";
                } else if (marks > 0) {
                    cout << "Fail";
                } else {
                    cout << "Marks exist between 1 and 100";
                }
            }

        


    ➗ Check Even or Odd Number:


            int main() {
                int num;
                cout << "Enter a number: ";
                cin >> num;

                if (num % 2 == 0) {
                    cout << "Even Number";
                } else {
                    cout << "Odd Number";
                }
            }

        ✅ Explanation:

            ⭐ If a number is divisible by 2 (num % 2 == 0), it’s Even.
            ⭐ Else, it’s Odd.


    ➕➖ Check if Number is Positive, Negative, or Zero:

            int main() {
                int num;
                cout << "Enter a number: ";
                cin >> num;

                if (num == 0) {
                    cout << "Number is zero";
                } else if (num > 0) {
                    cout << "Number is positive";
                } else {
                    cout << "Number is Negative";
                }
            }

        ✅ Explanation:

            ⭐ num == 0 → Zero
            ⭐ num > 0 → Positive
            ⭐ num < 0 → Negative


    
    🅰️ Check if a Character is a Vowel or Consonant
   
            int main() {
                char character;
                cout << "Enter a character: ";
                cin >> character;

                if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
                    character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
                    cout << "Character is vowel";
                } else {
                    cout << "Character is consonant";
                }
            }



🔁 Loops in C++ (Introduction):

    ⭐ Loops allow us to execute a block of code multiple times without writing repetitive code manually. They are useful when we need to iterate over numbers, arrays, or perform repetitive tasks.

    ⭐ C++ provides 3 types of loops:

        ✅ for Loop – Used when the number of iterations is known.
        ✅ while Loop – Used when the number of iterations is not known beforehand.
        ✅ do-while Loop – Similar to while, but guarantees at least one execution.


    📌 for Loop Syntax in C++:

        for(initialization; condition; update){
            // Loop body (code to be executed)
        }

        💡 Explanation of each part:

            ✅ Initialization → Runs once before the loop starts. (e.g., int i = 1;)
            ✅ Condition → Checked before every iteration. If true, the loop runs.
            ✅ Update → Modifies the loop variable after each iteration (e.g., i++).


    📊 How for Loop Works Internally:

        🔍 Let's analyze this loop step by step:

            for (int i = 1; i <= 5; i++) {
                cout << i << " ";
            }

        🔍 Step-by-step Execution:

                       ||===> Value Before Condition
                       ||
            Iteration	i 	    Condition (i <= 5)	     Executes cout << i?     After Update (i++)
            1st	        1	    ✅ true (1 ≤ 5)	        Prints 1	            2
            2nd	        2	    ✅ true (2 ≤ 5)	        Prints 2	            3
            3rd	        3	    ✅ true (3 ≤ 5)	        Prints 3	            4
            4th	        4	    ✅ true (4 ≤ 5)	        Prints 4	            5
            5th	        5	    ✅ true (5 ≤ 5)	        Prints 5	            6
            6th	        6	    ❌ false (6 > 5)	        Stops execution	        Loop Ends

        ✅ Final Output:

            1 2 3 4 5


    📝 Print Numbers from 1 to 5:

            int main() {
                for (int count = 1; count <= 5; count++) {
                    cout << count << " ";
                }
            }

        ✅ Correct Output:

            1 2 3 4 5


    🟢 Print Squares from 1 to n:


        ✅ Fixed Code:

            int main() {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                
                for (int i = 1; i <= num; i++) {
                    cout << i * i << " ";
                }
            }

        📌 Example Run:

            Input: n = 5
            Output: 1 4 9 16 25


    🔵 Print All Even Numbers Up to n:

        int main() {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            
            for (int i = 2; i <= n; i += 2) {
                cout << i << " ";
            }
        }

        📌 Example Run:

            Input: n = 10
            Output:  2 4 6 8 10


        🛠 Alternative Way to Print Even Numbers:

            ⭐ Using if condition inside a for loop:

                int main() {
                    int n;
                    cout << "Enter a number: ";
                    cin >> n;
                    
                    for (int i = 1; i <= n; i++) {
                        if (i % 2 == 0) {  // Checks if `i` is even
                            cout << i << " ";
                        }
                    }
                }

            📌 Example Run:

                Input: n = 10
                Output:  2 4 6 8 10
                
            👉 Which method is better?

                Method 1 (i += 2) is better because it reduces the number of iterations.

      

        
