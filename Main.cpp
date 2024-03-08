
/*
Program: Two players start from 0 and alternatively add a number from 1 to 10 to the sum whoever player reaches 100 wins the game.

Game : 1

Author: Karen Fady Nabil

ID: 20230291 

Section : No Section Yet

Version : 2.0  

Date : 28/2/2024

*/



#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    char flag = 'Y' ;

    while (flag == 'Y')
    {   

       cout << "==== 100 GAME ==== \n" ;

        int Sum = 0 ;
        int input_1 , input_2 ;
    
        while (Sum < 100)
     {
            cout << "Player 1 : Enter a number from 1 to 10 \n" ;
            cin >> input_1 ;

            while (input_1 < 1 or input_1 > 10) 
        {
            cout << "==== Invalid input ==== \n" ;
            cout << "Player 1 : Please enter a number from 1 to 10 \n" ;
            cin >> input_1 ;
        }

            while (Sum + input_1 > 100 )
        {
            cout << "==== Invalid input ====\n";
            cout << "Player 1 : This will make the sum exceed 100 please make sure to input a number that will reach exactly 100 \n";
            cin >> input_1 ;
        }
            
        Sum += input_1 ;

        
        cout << "The Sum after Player 1 has played = " << Sum << endl ;

        if (Sum == 100)
        {
           cout << "Player 1 YOU WON \n" ;
           break;
        }

        cout << "Player 2 : Enter a number from 1 to 10 \n" ;
        cin >> input_2 ;



        while (input_2 < 1 or input_2 > 10) 
        {
        cout << "==== Invalid input ====\n" ;
        cout << "Player 2 : Please enter a number from 1 to 10 \n" ;
        cin >> input_2 ;
        }
        while (Sum + input_2 > 100 )
        {
            cout << "==== Invalid input ====\n";
            cout << "Player 2 : This will make the sum exceed 100 please make sure to input a number that will reach exactly 100 \n";
            cin >> input_2 ;
        }
            
        Sum += input_2 ;

        
        cout << "The Sum after Player 2 has played = " << Sum << endl ;

        if (Sum == 100)
        {
           cout << "Player 2 YOU WON \n" ;
           break;
        }        
    
    }

    cout << "If you want to continue enter Y else type N \n" ;
    cin >> flag ; 

    flag = toupper(flag);
    

    if (flag == 'N' )
    {
        break;
    }
        
    else if (flag != 'Y' )
    {
        cout <<"==== Invalid input ====\n";
        cout <<"Please Enter a Valid Choice \n" ;
        cin >> flag ;
    }
    
    
    
        
 }
    
    return 0 ;
}