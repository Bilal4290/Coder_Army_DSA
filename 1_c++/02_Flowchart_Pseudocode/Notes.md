Flowchart & Pseudocode:

    A flowchart is a diagram that visually represents the steps of an algorithm using symbols like:
    
        🔷 Start/End (Oval)
        🔸 Input/Output (Parallelogram)
        🔹 Process (Rectangle)
        🔻 Decision (Diamond)

    A pseudocode is a simple way of writing an algorithm using plain English-like syntax, focusing on logic rather than a specific programming language.


Steps to Solve a Problem 🧠

    1️⃣ Understand the Problem → What needs to be solved?
    2️⃣ Focus on Input → What inputs are required?
    3️⃣ Think/Approach to Solve → How will the problem be solved?
    4️⃣ Write in Code → Convert logic into programming code.
    5️⃣ Error Fixing/Debugging → Find and fix mistakes.
    6️⃣ Optimize the Solution → Make it more efficient.



1️⃣ Flowchart & Pseudocode: Sum of Two Numbers:

    🔢 Input: Two numbers
    ➕ Process: Add the two numbers
    📤 Output: Display the sum

    Flowchart:
  
        ⭘ Start  
        ⬒ Input A, B  
        ⬛ Sum = A + B  
        ⬒ Output Sum  
        ⭘ End  

    Diagram:

        ⭘ Start  
        ↓  
        🔸 Input A, B  
        ↓  
        🔹 Sum = A + B  
        ↓  
        🔸 Output Sum  
        ↓  
        ⭘ End  

    Pseudocode:
    
        BEGIN  
            INPUT A, B  
            SUM ← A + B  
            OUTPUT SUM  
        END  



2️⃣ Flowchart & Pseudocode: Subtraction of Two Numbers:

    🔢 Input: Two numbers
    ➖ Process: Subtract the second number from the first
    📤 Output: Display the result

    Flowchart:
    
        ⭘ Start  
        ↓  
        🔸 Input A, B  
        ↓  
        🔹 Result = A - B  
        ↓  
        🔸 Output Result  
        ↓  
        ⭘ End 


    Pseudocode:
     
        BEGIN  
            INPUT A, B  
            RESULT ← A - B  
            OUTPUT RESULT  
        END  


3️⃣ Flowchart & Pseudocode: Average of Two Numbers:

    🔢 Input: Two numbers
    ➗ Process: Find the average
    📤 Output: Display the result

    Flowchart:
       
        ⭘ Start  
        ↓  
        🔸 Input A, B  
        ↓  
        🔹 Average = (A + B) / 2  
        ↓  
        🔸 Output Average  
        ↓  
        ⭘ End  


    Pseudocode:
       
        BEGIN  
            INPUT A, B  
            AVERAGE ← (A + B) / 2  
            OUTPUT AVERAGE  
        END 


4️⃣ Flowchart & Pseudocode: Cube of a Number:

    🔢 Input: A number
    🟦 Process: Multiply the number by itself three times
    📤 Output: Display the cube

    Flowchart:
     
        ⭘ Start  
        ↓  
        🔸 Input N  
        ↓  
        🔹 Cube = N * N * N  
        ↓  
        🔸 Output Cube  
        ↓  
        ⭘ End


    Pseudocode:
    
        BEGIN  
            INPUT N  
            CUBE ← N * N * N  
            OUTPUT CUBE  
        END  


5️⃣ Flowchart & Pseudocode: Even or Odd Number:

    🔢 Input: A number
    ❓ Process: Check if the number is divisible by 2
    📤 Output: Display "Even" or "Odd"

    Flowchart:
      
        ⭘ Start  
        ↓  
        🔸 Input N  
        ↓  
        🔻 N % 2 == 0?  
        ↙       ↘  
        Yes       No  
        🔸 Even    🔸 Odd  
        ↓        ↓  
        ⭘ End    ⭘ End 


    Pseudocode:
    
        BEGIN  
            INPUT N  
            IF N % 2 == 0 THEN  
                OUTPUT "Even"  
            ELSE  
                OUTPUT "Odd"  
        END  


6️⃣ Flowchart & Pseudocode: Number Comparison:

    🔢 Input: Two numbers
    ❓ Process: Compare if greater, smaller, or equal
    📤 Output: Display result

    Flowchart:
    
        ⭘ Start  
        ↓  
        🔸 Input A, B  
        ↓  
        🔻 A > B?  
        ↙       ↘  
        Yes       No  
        🔸 "A is greater"  
        ↓  
        ⭘ End  
        ↓  
        🔻 A < B?  
        ↙       ↘  
        Yes       No  
        🔸 "A is smaller"  
        ↓  
        ⭘ End  
        🔸 "A is equal to B"  
        ↓  
        ⭘ End  


    Pseudocode:
    
        BEGIN  
            INPUT A, B  
            IF A > B THEN  
                OUTPUT "A is greater"  
            ELSE IF A < B THEN  
                OUTPUT "A is smaller"  
            ELSE  
                OUTPUT "A is equal to B"  
        END


7️⃣ Flowchart & Pseudocode: Positive or Negative Number:

    🔢 Input: A number
    ❓ Process: Check if greater than 0
    📤 Output: Display "Positive" or "Negative"

    Flowchart:

        ⭘ Start  
        ↓  
        🔸 Input N  
        ↓  
        🔻 N > 0?  
        ↙       ↘  
        Yes       No  
        🔸 Positive   🔻 N == 0?  
        ↓        ↙      ↘  
        ⭘ End   Yes      No  
                🔸 Zero  🔸 Negative  
                ↓       ↓  
                ⭘ End   ⭘ End  


    Pseudocode:

        BEGIN  
            INPUT N  
            IF N > 0 THEN  
                OUTPUT "Positive"  
            ELSE IF N == 0 THEN  
                OUTPUT "Zero"  
            ELSE  
                OUTPUT "Negative"  
        END  


8️⃣ Flowchart & Pseudocode: Print a Number N Times:

    🔢 Input: Number, Times
    🔄 Process: Loop to print N times
    📤 Output: Display N

    Flowchart:

        ⭘ Start  
        ↓  
        🔸 Input N, Times  
        ↓  
        🔹 Count = 1  
        ↓  
        🔻 Count <= Times?  
        ↙       ↘  
        Yes       No  
        🔸 Print N   ⭘ End  
        ↓  
        🔹 Count++  
        ↓  
        🔁 Repeat 


    Pseudocode:

        BEGIN  
            INPUT N, Times  
            FOR Count ← 1 TO Times DO  
                OUTPUT N  
        END 


9️⃣ Flowchart & Pseudocode: Sum of N Natural Numbers:

    🔢 Input: A number N
    🔄 Process: Add numbers from 1 to N
    📤 Output: Display the sum

    Flowchart:

        ⭘ Start  
        ↓  
        🔸 Input N  
        ↓  
        🔹 Sum = 0, i = 1  
        ↓  
        🔻 i <= N?  
        ↙       ↘  
        Yes       No  
        🔹 Sum = Sum + i  
        ↓  
        🔹 i = i + 1  
        ↓  
        🔁 Repeat  
        ↓  
        🔸 Output Sum  
        ↓  
        ⭘ End 


    Pseudocode:

        BEGIN  
            INPUT N  
            SUM ← 0  
            FOR i ← 1 TO N DO  
                SUM ← SUM + i  
            OUTPUT SUM  
        END  

        ✅ Example: If N = 5, then SUM = 1 + 2 + 3 + 4 + 5 = 15


🔟 Flowchart & Pseudocode: Check if a Number is Prime:

    🔢 Input: A number N
    ❓ Process: Check if N is divisible by any number from 2 to (N-1)
    📤 Output: Display "Prime" or "Not Prime"

    Flowchart:

        ⭘ Start  
        ↓  
        🔸 Input N  
        ↓  
        🔻 N <= 1?  
        ↙       ↘  
        Yes       No  
        🔸 Not Prime  
        ↓        ↓  
        ⭘ End    🔹 i = 2  
                ↓  
        🔻 i < N?  
        ↙       ↘  
        Yes       No  
        🔻 N % i == 0?  
        ↙       ↘  
        Yes       No  
        🔸 Not Prime  🔹 i = i + 1  
        ↓         ↓  
        ⭘ End     🔁 Repeat  
                ↓  
                🔸 Prime  
                ↓  
                ⭘ End 


    Pseudocode:

        BEGIN  
            INPUT N  
            IF N <= 1 THEN  
                OUTPUT "Not Prime"  
            ELSE  
                FOR i ← 2 TO N-1 DO  
                    IF N % i == 0 THEN  
                        OUTPUT "Not Prime"  
                        STOP  
                OUTPUT "Prime"  
        END 

        ✅ Example:

            N = 7 → Prime ✅
            N = 8 → Not Prime ❌

