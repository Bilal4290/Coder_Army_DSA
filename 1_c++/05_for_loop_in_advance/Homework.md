🗺️ Day 5/180: For Loop in advance :

    ✅ Print number from 280 to 250 with the help of for loop.
    ✅ Print char from ‘A’ to ‘Z’ with the help of a for loop.
    ✅ Print char from ‘Z’ to ‘A’ with the help of a for loop.
    ✅ There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
    ✅ Print Sum of square of first n natural number.
    ✅ Print Sum of cube of first n natural number
    ✅ Print n’th Fibonacci number.


✅ Print Sum of cube of first n natural number:

    #include <iostream>
        using namespace std;

        int validateInput(string prompt){
            int num;

            while(true){
                cout << prompt;
                cin >> num;

                if(!cin.fail() && cin.peek() == '\n'){
                    break;
                }

                cout << "Invalid Input! Please enter a number." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            while(true){
                if(num > 0){
                    break;
                }

                cout << "Invalid Input! Please enter a positive number." << endl;
                cout << prompt;
                cin >> num;
            }

            return num;
        }



    

        int main(){

            int num = validateInput("Enter a number: ");

            int sum = 0;

            for(int i = 1; i <= num; i++){
                sum = sum + (i*i*i);
            }

            cout << "Sum: " << sum;

            return 0;
        }
