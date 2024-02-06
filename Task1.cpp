#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int variable, number, range;
    char result;
    srand(time(0));
    do{
        cout << "\t\t\t\t$$ GUESS THE NUMBER GAME $$" << endl;
        cout << "Enter your range from 0 to :";
        cin >> range;
        variable = rand() % range + 1;
        do{
            cout << "Guess the number: ";
            cin >> number;

            if (number == variable){
                cout << "\t\t\t**Couguralation you got the write number ** " << endl;
            }
            else if (number < variable){
                cout << "\t\tYou are too slow! Go HIGHER" << endl;
            }
            else if (number > variable){
                cout << "\t\tYou are going to far! Make it LOWER" << endl;
            }
        } while (number != variable);
        cout << "do you want to play again[y/n]:";
        cin >> result;
        cout << endl;
    } while (result == 'y' || result == 'Y');
    cout << "\t\t\t\t\t! GAME OVER !";
    return 0;
}