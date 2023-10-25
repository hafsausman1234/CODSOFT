#include <iostream>
using namespace std;
int main()
{
    float num1, num2, A, S, M, D;
    char choice;
    cout << "***************A SIMPLE CALCULATOR**************" << endl;
    cout << "Enter the values of num1 and num2:" << endl;
    cin >> num1 >> num2;
    cout << "Press the following keys according to your choice.........:" << endl;
    cout << "'a' for ADDITION:" << endl;
    cout << "'b' for SUBTRACTION:" << endl;
    cout << "'c' for MULTIPLICATION:" << endl;
    cout << "'d' for DIVISION:" << endl;
    cout << "Finally 'e' for EXITING THE PROGRAM:" << endl;
    while (choice != 'e')
    {
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 'a':
        {
            A = num1 + num2;
            cout << "The addition of num1 and num2 gives the answer:" << num1 << "+" << num2 << "=" << A << endl;
            break;
        }
        case 'b':
        {
            S = num1 - num2;
            cout << "The subtraction of num1 and num2 gives the answer:" << num1 << "-" << num2 << "=" << S << endl;
            break;
        }
        case 'c':
        {
            M = num1 * num2;
            cout << "The multiplication of num1 and num2 gives the answer:" << num1 << "*" << num2 << "=" << M << endl;
            break;
        }
        case 'd':
        {
        	if(num2==0)
        	{
        		cout<<"Can't divide by zero!"<<endl;
        		break;
			}
        	else
        	{
               D = num1 / num2;
               cout << "The division of num1 and num2 gives the answer:" << num1 << "/" << num2 << "=" << D << endl;
               break;
            }
        }
        case 'e':
        {
            cout << "exiting the program!" << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice!" << endl;
            break;
        }
        }
    }
    return 0;
}