#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int random = rand() % 100 +1 ;
    int input;
    cout<<"Guess a number between 1 to 100 : ";
    cin >> input;

    while(random != input){
        if(input > random){
            cout << "Too high ! Try guessing lower\n";
            cout<<"Enter your new guess : ";
            cin >> input;
        }
        else if(input < random ){
            cout << "Nice try ! Guess a little higher\n";
            cout<<"Enter your new guess : ";
            cin >> input;
        }

    }
    cout << "You guessed the number . It is " << input ;
    return 0;
    
}