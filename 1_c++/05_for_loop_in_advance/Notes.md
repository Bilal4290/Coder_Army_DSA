1️⃣ Print numbers from 101 to 200:

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

        return num;
    }

    int main(){

        int start,end;
        start = validateInput("Enter start number: ");

        while(true){
            end = validateInput("Enter end number: ");

            if(end >= start){
                break;
            }

            cout << "Invalid range! End number must be greater than or equal to start number." << endl;
            
        }

        for(int i=start; i<=end; i++){
            cout << i << " ";
        }

        return 0;
    }



2️⃣ Print alphabets a to z:

   #include <iostream>
    using namespace std;


    int main(){
    
    
        for(char ch='a'; ch<='z'; ch++){
            cout << ch << " ";
        }

        return 0;
    }


3️⃣ Print numbers in reverse order:

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

        return num;
    }

    int main(){
    
        int num;

        while(true){

            num = validateInput("Enter a number: ");

            if(num > 0){
                break;
            }

            cout << "Invalid Input! Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(1000,'\n');
        }

        for(int i=num; i >= 1; i--){
            cout << i << " ";
        }

        return 0;
    }




4️⃣ Print numbers from 1 to 100 with a difference of 3:

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

            return num;
        }

        int main(){

            int start,end;
            start = validateInput("Enter start number: ");

            while(true){
                end = validateInput("Enter end number: ");

                if(end >= start){
                    break;
                }

                cout << "Invalid range! End number must be greater than or equal to start number." << endl;
                
            }

            for(int i=start; i<=end; i=i+3){
                cout << i << " ";
            }

            return 0;
        }



5️⃣ Multiplication Table:

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

                cout << "Invalid input! Please enter a positive number." << endl;
                cout << prompt;
                cin >> num;

            }

            return num;
        }

    

        int main(){

            int num = validateInput("Enter a number: ");
            int end = validateInput("Enter end number: ");

            for(int i=1; i<=end; i++){
                cout << num << " x " << i << " = " << num*i << endl;
            }

            return 0;
        }


6️⃣ Calculate the Power of a Number:

        #include <iostream>9
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

            return num;
        }

        double calculatePower(int base,int exponent){
        
            double power = base;
            if(exponent < 0){
                for(int i=exponent; i < -1; i++){
                    power=power*base;
                }
            }else if(exponent > 0){
                for(int i=1; i < exponent; i++){
                    power=power*base;
                }
            }

            if(exponent < 0){
                power = 1.0 / power;
            }

            return power;
        }

    

        int main(){

            int base = validateInput("Enter base number: ");
            int exponent = validateInput("Enter exponent number: ");

        if(base == 0){
                if(exponent > 0){
                    cout << "The power of " << base << " is 0." << endl;
                }else if(exponent == 0){
                    cout << "The power of " << base << " is 1." << endl;
                }else if(exponent < 0){
                    cout << "Zero cannot be raised to a negative power." << endl;
                }
                return 0;
        }

            if(base < 0 && exponent == 0 || base > 0 && exponent == 0){
                cout << "The power of " << base << " is 1." << endl;
            }

            double result = calculatePower(base,exponent);
        
            cout << "The power of " << base << " is " << result << "." << endl;

    
            return 0;
        }

  

7️⃣ Sum of Squares of n Natural Numbers

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

        int num = validateInput("Enter base number: ");

        int sum = 0;

        for(int i = 1; i <= num; i++){
            sum = sum + (i*i);
        }

        cout << "Sum: " << sum;

        return 0;
    }




8️⃣ Fibonacci Series:

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

            int last = 0, previous = 1;

            cout << last << " " << previous << " ";

            for(int i=2; i < num; i++){
                int current = previous + last;
                cout << current << " ";
                last = previous;
                previous = current;
            }

            return 0;
        }













    