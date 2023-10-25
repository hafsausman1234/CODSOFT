#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int Random_number, guessed_number, trials = 0;
    srand(time(0));
    Random_number = rand() % 100 + 1;
    cout << "**************WELCOME TO NUMBER GUESSING GAME***************" << endl;
    do
    {
        cout << "Enter your guess between 1 and 100:" << endl;
        cin >> guessed_number;
        trials++;
        if (guessed_number > Random_number)
        {
            cout << "Your guessed number is too high!" << endl;
        }
        else if (guessed_number < Random_number)
        {
            cout << "Your guessed number is too low!" << endl;
        }
        else
        {
            cout << "Congratulations!, you have guessed the number right in " << trials << " trials " << endl;
        }
    } while (guessed_number != Random_number);
    return 0;
}
