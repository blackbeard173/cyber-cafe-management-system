#include <stdlib.h>

#include <stdio.h>

#include <stdio.h>

#include <iostream>

#include <stdio.h>

#include <conio.h>

#include <fstream>

using namespace std;

/*
*************************************
FEATURES~

    ->Master Entry
        -> Member Entry
        -> Computer Entry
    ->Cafe Management
        -> Booking
        -> Charges
        -> Return
    ->Exit
*************************************
*/

/*
*************************************
MODULES~

    -> Login process module
    -> Master Entry for member
    -> Master Entry For computers
    -> Allotment of computers (Log In)
    -> Log out Module
    -> Charges Module
*************************************
*/

// CLASSES

// Login module
class login
{
public:
    string username;
    void user_name()
    {
        cout << "LOG IN:\n";
        cout << "Enter username: ";
        // cin >> username;
        getline(cin, username);
        // getline() is a standard string library function that is used to read a string or a line from an input stream
    }
    void pass_word()
    {
        string password;
        cout << "Enter the password\n";
        // cin >> password;
        getline(cin, password);
    }
};

// registration module
class registration
{
    string user_full_name, user_name, email, id, pass;

public:
    void user_details_in()
    {
        cout << "REGISTRATION:\n";
        cout << "Enter your full name: ";
        // cin >> user_name;
        getline(cin, user_name);
        cout << "Enter email: ";
        // cin >> email;
        getline(cin, email);
        cout << "Enter new password: ";
        // cin >> pass;
        getline(cin, pass);
        cout << "Your registration is successful.\nYou can Log In with your new account.\n";
    }
};

// member entry module
class member_entry
{
    string member, date, time, show;
    int member_no, check;

public:
    void add_new_member()
    {
        cout << "\nEnter how many members do you want to enter: ";
        cin >> ws;
        //  Typing “cin>>ws” after “cin” statement tells the compiler to ignore buffer and also to discard all the whitespaces before the actual content of string or character array.
        cin >> member_no;
        cout << "Enter date(dd/mm/yyyy): ";
        // cin >> date;
        cin >> ws;
        getline(cin, date);
        cout << "Enter time(hh:mm AM/PM): ";
        //cin >> time;
        getline(cin, time);
        cout << "\n";
    }
    // show member
    void show_member()
    {
        cout << "Members List";
        // Display the members list
    }
    // delete file
    void delete_file()
    {
        // Option to delete the stored file
        cout << "\nDo you really want to delete recorded file?\n1. Yes\n2. No\n ";
        cin >> check;
        if (check == 1)
        {
            cout << "\nYour file has been deleted.\n";
            getch(); //getch() is a predefined non-standard function in “conio.h” header. It is used to tell the compiler to wait until the user enters a character. This is often used at the end of the main function (before the return statement) so that we can see the output. If we don’t use getch() at the end, the program is executed but we cannot see the output.
        }
        else if (check == 2)
        {
            cout << "\nFile deletion canceled.\n";
            getch();
        }
        else
        {
            delete_file();
        }
    }
};

// computer entry module
class computer_entry
{
    string computer, user, date, time, show;
    int check, comp_no, i;

public:
    int trigger_computer_entry = 0;
    void add_new_computer()
    {
        cout << "\nEnter how many members do you want to enter:";
        cin >> ws;
        cin >> comp_no;
        if (comp_no > 0)
        {
            cout << "Enter date(dd/mm/yyyy): ";
            cin >> ws;
            // cin >> date;
            getline(cin, date);
            cout << "Enter time(hh:mm AM/PM): ";
            // cin >> time;
            getline(cin, time);
            for (i = 0; i < comp_no; i++)
            {
                cout << "\nEnter new member name: ";
                // cin >> user;
                getline(cin, user);
                cout << "\nEnter alloted computer name: ";
                // cin >> computer;
                getline(cin, computer);
                cout << user << " is alloted with " << computer << " computer." << endl;
            }
        }
    }
    // show computer
    void show_computer()
    {
        // Display Computers list
    }
    // delete file
    void delete_file()
    {
        cout << "\nDo you really want to delete recorded file?\n1. Yes\n2. No\n";
        cin >> ws;
        cin >> check;
        if (check == 1)
        {
            cout << "\nYour file has been deleted.\n";
            getch();
        }
        else if (check == 2)
        {
            cout << "\nFile delete canceled\n";
            getch();
        }
        else
        {
            delete_file();
        }
    }
};

// charge module
class charge
{
    string computer, user, date, time, show;
    int check, comp_no, i;
};

/*
// Login Module
void login()
{
    char username, password;
    cout << "Username:";
    cin >> username;
    cout << "Your number is: " << username;
}

// Member Data
void member_entry()
{
    char username;
    printf("Username:\n");
    scanf("%s", &username);
}

// Computer Data
void computer_entry()
{
    string computer, user, date, time;
    int comp_no;
    cout << "\nEnter how many members do you want to enter:";
    cin >> comp_no;
}

// Logout
void logout() {}

// Main
int main()
{
    // cout << "Hello World";
    member_entry();
    computer_entry();
    return 0;
}
*/

int main()
{
    // Renames the console Window
    system("title CYBER CAFE MANAGEMENT");
}
