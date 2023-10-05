#include <iostream>
using namespace std;

void DisplayBoard(char position[]); // function to display the board//
int checkWin(char position[]); // function to check the winner//
bool playAgain(); // function to ask if the players want to play again//
int main()
{
	char cont;
  do
  {
		
    int player = 1, input, k = -1;
    char position[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    DisplayBoard(position);

    while (k == -1)
    {
        player = (player % 2 == 0) ? 2 : 1; // first,player 1 will take turn and then player 2 //
        char mark = (player == 1) ? 'X' : 'O';
        cout << "Player 1: 'X'" << endl; // Assigning 'X' to player 1 //
        cout << "Player 2: 'O'" << endl; // Assigning 'O' to player 2 //
        // player input //
        cout << "Please enter position number for Player " << player << endl;
        cin >> input;

        if (input < 1 || input > 9)
        {
            cout << "Invalid input" << endl;
        }
        else if (position[input] == 'X' || position[input] == 'O')
        {
            cout << "Position already occupied" << endl;
        }
        else
        {
            position[input] = mark; // updation/it means the marks(X or O) will be placed in place of the position numbers //
            DisplayBoard(position); 

            int result = checkWin(position);

            if (result == 1)
            {
                cout << "Player " << player << " is the Winner" << endl;
                break;
            }
            else if (result == 0) // checking for draw // 
            {
                cout << "The Game is a draw" << endl;
                break;
            }
            player++;
        }
    }
    cout<<"Do you want to play another game,players? (y/n):"<<endl;
    cin>>cont;
  }while(cont=='y'|| cont=='Y');
  return 0;
}

void DisplayBoard(char position[])
{
    system("cls");
    cout << "\n\n";
    cout << "=== WELCOME TO THE TIC TAC TOE GAME ===\n\n";
    cout << "     |     |     \n";
    cout << "  " << position[1] << "  |  " << position[2] << "  |  " << position[3] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << position[4] << "  |  " << position[5] << "  |  " << position[6] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << position[7] << "  |  " << position[8] << "  |  " << position[9] << "  \n";
    cout << "     |     |     \n";
    cout << "\n\n";
}

int checkWin(char position[])
{
    if (position[1] == position[2] && position[2] == position[3])
    {
        return 1;
    }
    if (position[1] == position[4] && position[4] == position[7])
    {
        return 1;
    }
    if (position[7] == position[8] && position[8] == position[9])
    {
        return 1;
    }
    if (position[3] == position[6] && position[6] == position[9])
    {
        return 1;
    }
    if (position[1] == position[5] && position[5] == position[9])
    {
        return 1;
    }
    if (position[3] == position[5] && position[5] == position[7])
    {
        return 1;
    }
    if (position[2] == position[5] && position[5] == position[8])
    {
        return 1;
    }
    if (position[4] == position[5] && position[5] == position[6])
    {
        return 1;
    }
    int count = 0;

    for (int i = 1; i <= 9; i++)
    {
        if (position[i] == 'X' || position[i] == 'O')
        {
            count++;
        }
    }
    if (count == 9) // condition for draw //
    {
        return 0;
    }
    return -1;
}
bool playAgain()
{
	char choice;
	cout<<"Do you want to play another game,players? (y/n):"<<endl;
	cin>>choice;
	return (choice=='y' || choice=='Y');
}
    