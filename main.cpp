#include <iostream>
using namespace std;

int main(){

    // variables 
    char employed,
         recentGrad;

    // Basic I/O

    cout << "Applying for a loan? Answer a few questions. Y = Yes, N = NO" << endl;
    cout << "Are you employed?" << endl;
    cin >> employed;
    cout << "Are you a recent college graduate?" << endl;
    cin >> recentGrad;


    // Program that takes user input to determine if user can qualify for loan.

    if (employed == 'Y')
    {
        if (recentGrad == 'Y')
        {
            cout << "You Qualify!" << endl;
        } else
        {
            cout << "You must be a recent college grad to recieve this loan" << endl;
        }
    } else {
        cout << "You must be a employed to recieve this loan." << endl;
    }

    return 0;
}