🗺️ Day 2/180 => Flowchart and PseudoCode :

    🟢 Create Flowchart and write pseudocode:

        ✅ Two numbers are given, find their Product.
        ✅ Two numbers are given a and b, find a divided by b.
        ✅ Find the square of a number.
        ✅ Two numbers a and b are given, find which is greater, if both are equal print the same.
        ✅ A number is given, find if it is positive or negative or zero.
        ✅ Find the factorial of a given number.


✅ Find sum of two numbers:

   #include<iostream>
    using namespace std;


    int main(){
        int num1,num2;

        cout << "Enter first number: ";
        cin >> num1;

        if(cin.fail()){
            cout << "Invalid Input! Please enter numbers only." << endl;
            return 1;
        }

        cout << "Enter second number: ";
        cin >> num2;

        if(cin.fail()){
            cout << "Invalid Input! Please enter numbers only." << endl;
            return 1;
        }

        int sum = num1+num2;

        cout << "The sum of " << num1 << " and " << num2 << " is " << sum << ".";
        return 0;
    }



✅ Find Average of two numbers:


    #include <iostream>
    #include <string>  
    using namespace std;


    int getValidInput(string prompt){
        int num;
        while(true){
            cout << prompt;
            cin >> num;

            if(!cin.fail()){
                break;
            }

            cout << "Invalid Input! Please, enter a valid number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        return num;
    }

    int main() {
        // Use function to get valid inputs
        int num1 = getValidInput("Enter first number: ");
        int num2 = getValidInput("Enter second number: ");

        int sum = num1 + num2;
        double average = sum / 2.0;  // Ensure floating-point division

        cout << "The average of " << num1 << " and " << num2 << " is " << average << "." << endl;
        return 0;
    }


✅ Find cube of a number:

    #include <iostream>
    #include <string>  
    using namespace std;


    int getValidInput(string prompt){
        int num;
        while(true){
            cout << prompt;
            cin >> num;

            if(!cin.fail() && cin.peek() == '\n'){
                break;
            }

            cout << "Invalid Input! Please, enter a valid number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        return num;
    }

    int main() {
        // Use function to get valid inputs
        int num = getValidInput("Enter a number: ");

        int cube = num*num*num;

        cout << "The cube of " << num << " is " << cube << "." << endl;
        return 0;
    }


✅ Check a number is even or odd:

    #include <iostream>
    #include <string>  
    using namespace std;


    int getValidInput(string prompt){
        int num;
        while(true){
            cout << prompt;
            cin >> num;

            if(!cin.fail() && cin.peek() == '\n'){
                break;
            }

            cout << "Invalid Input! Please, enter a valid number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        return num;
    }

    int main() {
        // Use function to get valid inputs
        int num = getValidInput("Enter a number: ");

        if(num % 2 == 0){
            cout << num << " is even.";
        }else{
            cout << num << " is odd.";
        }
    
        return 0;
    }


✅ Check a number is positive negative or zero:

    #include <iostream>
    #include <string>  
    using namespace std;


    int getValidInput(string prompt){
        int num;
        while(true){
            cout << prompt;
            cin >> num;

            if(!cin.fail() && cin.peek() == '\n'){
                break;
            }

            cout << "Invalid Input! Please, enter a valid number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        return num;
    }

    int main() {
        // Use function to get valid inputs
        int num = getValidInput("Enter a number: ");

        if(num > 0){
            cout << num << " is a positive number.";
        }else if(num == 0){
            cout << num << " is zero.";
        }else{
            cout << num << " is a negative number.";
        }
    
        return 0;
    }


✅  Print a number n times:

    #include <iostream>
    #include <string>  
    using namespace std;


    int getValidInput(string prompt){
        int num;
        while(true){
            cout << prompt;
            cin >> num;

            if(!cin.fail() && cin.peek() == '\n'){
                break;
            }

            cout << "Invalid Input! Please, enter a valid number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        return num;
    }

    int main() {
        // Use function to get valid inputs
        int num = getValidInput("Enter a number: ");
        
        for(int i=1; i <= num; i++){
            cout << i << endl;
        }
    
        return 0;
    }


✅ Sum of n natural numbers:

    #include <iostream>
    #include <string>  
    using namespace std;


    int getValidInput(string prompt){
        int num;
        while(true){
            cout << prompt;
            cin >> num;

            if(!cin.fail() && cin.peek() == '\n'){
                break;
            }

            cout << "Invalid Input! Please, enter a valid number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        return num;
    }

    int main() {
        // Use function to get valid inputs
        int num = getValidInput("Enter a number: ");
        
        int sum = 0;

        for(int i=1; i <= num; i++){
            sum += i;
        }

        cout << sum << endl;
    
        return 0;
    }


✅ Check a number is prime or not:

    #include <iostream>
    #include <string>  
    using namespace std;


    int getValidInput(string prompt){
        int num;
        while(true){
            cout << prompt;
            cin >> num;

            if(!cin.fail() && cin.peek() == '\n'){
                break;
            }

            cout << "Invalid Input! Please, enter a valid number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        return num;
    }

    int main() {
        // Use function to get valid inputs
        int num = getValidInput("Enter a number: ");
        
        if(num < 2){
            cout << num << " is not a prime number.";
            return 0;
        }

        for(int i=2; i < num; i++){
            if(num % i == 0){
                cout << num << " is not a prime number.";
                return 0;
            }
        }

        cout << num << " is a prime number.";
    
        return 0;
    }


✅ Find factorial of a number:

    #include <iostream>
    #include <string>  
    using namespace std;


    int getValidInput(string prompt){
        int num;
        while(true){
            cout << prompt;
            cin >> num;

            if(!cin.fail() && cin.peek() == '\n'){
                break;
            }

            cout << "Invalid Input! Please, enter a valid number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        return num;
    }

    int main() {
        // Use function to get valid inputs
        int num = getValidInput("Enter a number: ");

        if (num < 0) {
            cout << "Factorial is not defined for negative numbers!";
            return 0;
        }

        long long product=1;
        
        for(int i=1; i <= num; i++){
            product *= i;
        }

        cout << "Factorial of " << num << " is " << product << ".";
    
        return 0;
    }


