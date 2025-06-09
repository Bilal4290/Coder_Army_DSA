1️⃣ Right-Angled Triangle Star Pattern:

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

                cout << "Invalid Input! Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }

            return num;
        }


        int main(){

            int num = validateInput("Enter end number: ");

            for(int row=1; row<=num; row++){
                for(int col=1; col<=row; col++){
                    cout << "* ";
                }
                cout << endl;
            }

            return 0;
        }

    🖼️ Visualization:

        ⭐  
        ⭐ ⭐  
        ⭐ ⭐ ⭐  
        ⭐ ⭐ ⭐ ⭐  
        ⭐ ⭐ ⭐ ⭐ ⭐


2️⃣ Inverted Right-Angled Triangle Star Pattern:

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

                cout << "Invalid Input! Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }

            return num;
        }


        int main(){

            int num = validateInput("Enter end number: ");

            for(int row=1; row<=num; row++){
                for(int col=1; col<=num-(row-1); col++){
                    cout << "* ";
                }
                cout << endl;
            }

            return 0;
        }

    🖼️ Visualization:

        ⭐ ⭐ ⭐ ⭐ ⭐  
        ⭐ ⭐ ⭐ ⭐  
        ⭐ ⭐ ⭐  
        ⭐ ⭐  
        ⭐  


3️⃣ Ascending Number Triangle Pattern:

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

                cout << "Invalid Input! Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }

            return num;
        }


        int main(){

            int num = validateInput("Enter end number: ");

            for(int row=1; row<=num; row++){
                for(int col=1; col<=row; col++){
                    cout << col << " ";
                }
                cout << endl;
            }

            return 0;
        }

    🖼️ Visualization:

        1️⃣  
        1️⃣ 2️⃣  
        1️⃣ 2️⃣ 3️⃣  
        1️⃣ 2️⃣ 3️⃣ 4️⃣  
        1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣  


4️⃣ Inverted Number Triangle Pattern:

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

                cout << "Invalid Input! Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }

            return num;
        }



        int main(){

            int num = validateInput("Enter end number: ");

            for(int row=1; row<=num; row++){
                for(int col=1; col<=num-(row-1); col++){
                    cout << col << " ";
                }
                cout << endl;
            }

            return 0;
        }

    🖼️ Visualization:

        1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣  
        1️⃣ 2️⃣ 3️⃣ 4️⃣  
        1️⃣ 2️⃣ 3️⃣  
        1️⃣ 2️⃣  
        1️⃣  

    
5️⃣ Descending Reverse Number Triangle Pattern:

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

                cout << "Invalid Input! Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }

            return num;
        }


        int main(){

            int num = validateInput("Enter end number: ");

            for(int row=num; row>=1; row--){
                for(int col=num; col>=row; col--){
                    cout << col << " ";
                }
                cout << endl;
            }

            return 0;
        }

    🖼️ Visualization:

        5️⃣  
        5️⃣ 4️⃣  
        5️⃣ 4️⃣ 3️⃣  
        5️⃣ 4️⃣ 3️⃣ 2️⃣  
        5️⃣ 4️⃣ 3️⃣ 2️⃣ 1️⃣  

    
6️⃣ Repeated Number Triangle Pattern:

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

                cout << "Invalid Input! Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }

            return num;
        }

        int main(){

            int num = validateInput("Enter end number: ");

            for(int row=1; row<=num; row++){
                for(int col=1; col<=row; col++){
                    cout << row << " ";
                }
                cout << endl;
            }

            return 0;
        }

    🖼️ Visualization:

        1️⃣  
        2️⃣ 2️⃣  
        3️⃣ 3️⃣ 3️⃣  
        4️⃣ 4️⃣ 4️⃣ 4️⃣  
        5️⃣ 5️⃣ 5️⃣ 5️⃣ 5️⃣

    
7️⃣ Descending Reverse Triangle Pattern:

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

                cout << "Invalid Input! Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }

            return num;
        }

        int main(){

            int num = validateInput("Enter end number: ");

            for(int row=1; row<=num; row++){
                for(int col=row; col>=1; col--){
                    cout << col << " ";
                }
                cout << endl;
            }

            return 0;
        }

    🖼️ Visualization:

        1️⃣  
        2️⃣ 1️⃣  
        3️⃣ 2️⃣ 1️⃣  
        4️⃣ 3️⃣ 2️⃣ 1️⃣  
        5️⃣ 4️⃣ 3️⃣ 2️⃣ 1️⃣  

    
8️⃣ Alphabet Triangle Pattern:

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

                cout << "Invalid Input! Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(1000,'\n');
            }

            while(true){
                if(num > 0 && num < 27){
                    break;
                }

                cout << " Invalid input! Number must be in range of 1 and 26." << endl;
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

            int num = validateInput("Enter end number: ");
            char ch = 'A';
            for(int row=1; row<=num; row++){
                for(int col=1; col<=row; col++){
                    cout << ch << " ";
                }
                ch++;
                cout << endl;
            }

            return 0;
        }

    🖼️ Visualization:

        🅰  
        🅱 🅱  
        🅲 🅲 🅲  
        🅳 🅳 🅳 🅳  
        🅴 🅴 🅴 🅴 🅴 

    