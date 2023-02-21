#include <iostream>
using namespace std;
void header();
void login();
int LoginOptions(int option);
string Signup(int Password,string Name,string Role);
main()
{
  int option;

    
}
void header()
{
    cout << "*********************************************";
    cout << "           HOTEL MANAGEMENT SYSTEM           ";
    cout << "*********************************************";
}
void login()
{
    cout << "                 LOGIN MENU                  ";
    cout << "*********************************************";
}
int LoginOptions(int option)
{
    
    header();
    cout << "\n";
    login();
    cout << "1. Signin to the Account.";
    cout << "2. Signup for the Account.";
    cout << "3. Exit the Login Menu.";
    
    cout << "Select any option:";
    cin >> option;
    
}
string Signup(int Password,string Name,string Role)