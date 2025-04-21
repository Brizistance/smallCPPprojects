#include <iostream>
#include <cmath>
using namespace std;


int main(){
    srand(time(NULL));
    int num;
    num = rand() % 100 + 1; //Generates a number between 1-100
    int guess;
    int tries;
    tries = 0;
    
    do{
        cout << "Enter number between 1-100: " << endl;
        cin >> guess;
        tries++;
        if (guess > num){
            cout << "Too high!" << endl;
        }
        else if (guess < num){
            cout << "Too low!" << endl;
        }
        else {
            cout << "Correct!" << endl;
            cout << "Attempts: " << tries << endl;
        }
    } while (guess != num);
    

    
    
    return 0;
}
