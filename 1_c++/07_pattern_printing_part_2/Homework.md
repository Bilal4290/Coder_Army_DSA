🗺️ Day 9/180: Pattern Printing-2 :


First Pattern:
       
     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5 
     1 2 3 4 5 6 

     Solution:

        #include <iostream>
        using namespace std;

        int main(){

            for(int row=1; row<=6; row++){
                for(int col=1; col<=row; col++){
                    cout << col << " ";
                }
                cout << endl;
            }

            return 0;
        }





Second Pattern:
   
    A
    A B
    A B C
    A B C D
    A B C D E

    Solution:

        #include <iostream>
        using namespace std;

        int main(){

            for(int row=1; row<=5; row++){
                char ch='A';
                for(int col=1; col<=row; col++){
                    cout << ch << " ";
                    ch++;
                }
                cout << endl;
            }

            return 0;
        }


     

Third Pattern:
     
       10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15

       Solution:

            #include <iostream>
            using namespace std;

            int main(){

                for(int row=10; row<=15; row++){
                    for(int col=10; col<=row; col++){
                        cout << col << " ";
                    }
                    cout << endl;
                }

                return 0;
            }




Fourth Pattern:

      A B C D
      A B C
      A B
      A

      Solution:

        #include <iostream>
        using namespace std;

        int main(){

            for(int row=1; row<=4; row++){
                char ch = 'A';
                for(int col=1; col<=4-(row-1); col++){
                    cout << ch << " ";
                    ch++;
                }
                cout << endl;
            }

            return 0;
        }
