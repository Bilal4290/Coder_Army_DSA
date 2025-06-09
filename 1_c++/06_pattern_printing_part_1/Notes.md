1️⃣ Solid Rectangle Star Pattern ⭐

    🛠 Code in C++:

        #include <iostream>
        using namespace std;

        int validateInput(string prompt){
            int num;

            while(true){
                cout << prompt;
                cin >> num;

                if(!cin.fail() || cin.peek() == '\n'){
                    break;
                }

                cout << "Invalid input! Please enter a valid input." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            return num;
        }

        int main(){

            int end = validateInput("Enter end number: ");

            for(int row=1; row<=end; row++){
                for(int col=1; col<=end; col++){
                    cout << "*" << " ";
                }
                cout << endl;
            }

            return 0;
        }


    🖼️ Visualization:

        ⭐ ⭐ ⭐ ⭐ ⭐  
        ⭐ ⭐ ⭐ ⭐ ⭐  
        ⭐ ⭐ ⭐ ⭐ ⭐  
        ⭐ ⭐ ⭐ ⭐ ⭐  
        ⭐ ⭐ ⭐ ⭐ ⭐ 


2️⃣ Repeated Number Pattern 🔢

    🛠 Code in C++:

        #include <iostream>
        using namespace std;

        int validateInput(string prompt){
            int num;

            while(true){
                cout << prompt;
                cin >> num;

                if(!cin.fail() || cin.peek() == '\n'){
                    break;
                }

                cout << "Invalid input! Please enter a valid input." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            return num;
        }

        int main(){

            int end = validateInput("Enter end number: ");

            for(int row=1; row<=end; row++){
                for(int col=1; col<=end; col++){
                    cout << row << " ";
                }
                cout << endl;
            }

            return 0;
        }

    🖼️ Visualization:

        1️⃣ 1️⃣ 1️⃣ 1️⃣ 1️⃣  
        2️⃣ 2️⃣ 2️⃣ 2️⃣ 2️⃣  
        3️⃣ 3️⃣ 3️⃣ 3️⃣ 3️⃣  
        4️⃣ 4️⃣ 4️⃣ 4️⃣ 4️⃣  
        5️⃣ 5️⃣ 5️⃣ 5️⃣ 5️⃣ 


3️⃣ Increasing Number Pattern:

    🛠 Code in C++:

        #include <iostream>
        using namespace std;

        int validateInput(string prompt){
            int num;

            while(true){
                cout << prompt;
                cin >> num;

                if(!cin.fail() || cin.peek() == '\n'){
                    break;
                }

                cout << "Invalid input! Please enter a valid input." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            return num;
        }

        int main(){

            int end = validateInput("Enter end number: ");

            for(int row=1; row<=end; row++){
                for(int col=1; col<=end; col++){
                    cout << col << " ";
                }
                cout << endl;
            }

            return 0;
        }


    🖼️ Visualization:

        1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣  
        1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣  
        1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣  
        1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣  
        1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣  


4️⃣ Decreasing Number Pattern:

    🛠 Code in C++:

        #include <iostream>
        using namespace std;

        int validateInput(string prompt){
            int num;

            while(true){
                cout << prompt;
                cin >> num;

                if(!cin.fail() || cin.peek() == '\n'){
                    break;
                }

                cout << "Invalid input! Please enter a valid input." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            return num;
        }

        int main(){

            int end = validateInput("Enter end number: ");

            for(int row=1; row<=end; row++){
                for(int col=end; col>0; col--){
                    cout << col << " ";
                }
                cout << endl;
            }

            return 0;
        }


    🖼️ Visualization:

        5️⃣ 4️⃣ 3️⃣ 2️⃣ 1️⃣  
        5️⃣ 4️⃣ 3️⃣ 2️⃣ 1️⃣  
        5️⃣ 4️⃣ 3️⃣ 2️⃣ 1️⃣  
        5️⃣ 4️⃣ 3️⃣ 2️⃣ 1️⃣  
        5️⃣ 4️⃣ 3️⃣ 2️⃣ 1️⃣


5️⃣ Ascending Square Pattern:

    🛠 Code in C++:

        #include <iostream>
        using namespace std;

        int validateInput(string prompt){
            int num;

            while(true){
                cout << prompt;
                cin >> num;

                if(!cin.fail() || cin.peek() == '\n'){
                    break;
                }

                cout << "Invalid input! Please enter a valid input." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            return num;
        }

        int main(){

            int end = validateInput("Enter end number: ");

            for(int row=1; row<=end; row++){
                for(int col=1; col<=end; col++){
                    cout << col*col << " ";
                }
                cout << endl;
            }

            return 0;
        }


    🖼️ Visualization:

        1️⃣  4️⃣  9️⃣  1️⃣6️⃣  2️⃣5️⃣  
        1️⃣  4️⃣  9️⃣  1️⃣6️⃣  2️⃣5️⃣  
        1️⃣  4️⃣  9️⃣  1️⃣6️⃣  2️⃣5️⃣  
        1️⃣  4️⃣  9️⃣  1️⃣6️⃣  2️⃣5️⃣  
        1️⃣  4️⃣  9️⃣  1️⃣6️⃣  2️⃣5️⃣  


6️⃣ Continuous Number Pattern:

    🛠 Code in C++:

        #include <iostream>
        using namespace std;

        int validateInput(string prompt){
            int num;

            while(true){
                cout << prompt;
                cin >> num;

                if(!cin.fail() || cin.peek() == '\n'){
                    break;
                }

                cout << "Invalid input! Please enter a valid input." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            return num;
        }

        int main(){

            int end = validateInput("Enter end number: ");
            int count=1;
            for(int row=1; row<=end; row++){
                for(int col=1; col<=end; col++){
                    cout << count << " ";
                    count++;
                }
                cout << endl;
            }

            return 0;
        }

        🔵 Another approach:

            #include <iostream>
            using namespace std;

            int validateInput(string prompt){
                int num;

                while(true){
                    cout << prompt;
                    cin >> num;

                    if(!cin.fail() || cin.peek() == '\n'){
                        break;
                    }

                    cout << "Invalid input! Please enter a valid input." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                }

                return num;
            }

            int main(){

                int end = validateInput("Enter end number: ");

                for(int row=1; row<=end; row++){
                    for(int col=1; col<=end; col++){
                        cout << ((row-1)*end)+col << " ";
                    }
                    cout << endl;
                }

                return 0;
            }


    🖼️ Visualization:

        1️⃣   2️⃣    3️⃣   4️⃣   5️⃣  
        6️⃣   7️⃣    8️⃣   9️⃣   🔟  
        1️⃣1️⃣ 1️⃣2️⃣ 1️⃣3️⃣ 1️⃣4️⃣ 1️⃣5️⃣  
        1️⃣6️⃣ 1️⃣7️⃣ 1️⃣8️⃣ 1️⃣9️⃣ 2️⃣0️⃣  
        2️⃣1️⃣ 2️⃣2️⃣ 2️⃣3️⃣ 2️⃣4️⃣ 2️⃣5️⃣  


7️⃣ Alphabet Row Pattern:

    🛠 Code in C++:

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

                cout << "Invalid input! Please enter a valid input." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            while(true){
                if(num > 0 && num < 27){
                    break;
                }

                cout << "Invalid input! Number must be exist between 1 and 26." << endl;
                cout << prompt;
                cin >> num;

                while(true){
            
                    if(!cin.fail() && cin.peek() == '\n'){
                        break;
                    }
            
                    cout << "Invalid input! Please enter a valid input." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << prompt;
                    cin >> num;
                }
            }

            return num;
        }

        int main(){

            int end = validateInput("Enter end number: ");
            char ch='A';
            for(int row=1; row<=end; row++){
                for(int col=1; col<=end; col++){
                    cout << ch << " ";
                }
                ch++;
                cout << endl;
            }

            return 0;
        }


    🖼️ Visualization:

        🅰 🅰 🅰 🅰 🅰  
        🅱 🅱 🅱 🅱 🅱  
        🅲 🅲 🅲 🅲 🅲  
        🅳 🅳 🅳 🅳 🅳  
        🅴 🅴 🅴 🅴 🅴  


8️⃣ Alphabet Sequence Pattern:

    🛠 Code in C++:

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

                cout << "Invalid input! Please enter a valid input." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }

            while(true){
                if(num > 0 && num < 27){
                    break;
                }

                cout << "Invalid input! Number must be exist between 1 and 26." << endl;
                cout << prompt;
                cin >> num;

                while(true){
            
                    if(!cin.fail() && cin.peek() == '\n'){
                        break;
                    }
            
                    cout << "Invalid input! Please enter a valid input." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << prompt;
                    cin >> num;
                }
            }

            return num;
        }

        int main(){

            int end = validateInput("Enter end number: ");
            for(int row=1; row<=end; row++){
                char ch='A';
                for(int col=1; col<=end; col++){
                    cout << ch << " ";
                    ch++;
                }
                cout << endl;
            }

            return 0;
        }


    🖼️ Visualization:

        🅰 🅱 🅲 🅳 🅴  
        🅰 🅱 🅲 🅳 🅴  
        🅰 🅱 🅲 🅳 🅴  
        🅰 🅱 🅲 🅳 🅴  
        🅰 🅱 🅲 🅳 🅴  