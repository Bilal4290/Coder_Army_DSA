🗺️ Day 4/180 => If-Else and For Loop :

    🟢 If-else:

        ✅ Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
        ✅ Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
        ✅ Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
        ✅ Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

    🟢 For Loop:

        ✅ Print “India will win the World Cup 2023”, 20 times.
        ✅ Print all Odd numbers from 1 to n, take n as an input from the user.
        ✅ Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.



✅ Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

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
        int num = getValidInput("Enter a number: ");

        cout << "Numbers from 1 to " << num << " that are divisible by 4: ";

        for(int i=1; i <= num; i++){
            if(i % 4 == 0){
                cout << i << " ";
            }
        }

    

        return 0;
    }


