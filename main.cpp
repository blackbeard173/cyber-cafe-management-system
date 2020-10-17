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
        cout << "\nLOG IN:\n";
        cout << "\nEnter username:\n";
        cin >> ws;
        // cin >> username;
        getline(cin, username);
        // getline() is a standard string library function that is used to read a string or a line from an input stream
    }
    void pass_word()
    {
        string password;
        cout << "\nEnter the password:\n";
        cin >> ws;
        // cin >> password;
        getline(cin, password);
        cout << "\nYou are logged in.\n"
             << endl;
    }
};

// registration module
class registration
{
    string user_full_name, user_name, email, id, pass;

public:
    void user_details_in()
    {
        cout << "\nREGISTRATION:\n";
        cout << "\nEnter your full name:\n";
        cin >> ws;
        // cin >> user_name;
        getline(cin, user_name);
        cout << "\nEnter email:\n";
        cin >> ws;
        // cin >> email;
        getline(cin, email);
        cout << "\nEnter new password:\n";
        cin >> ws;
        // cin >> pass;
        getline(cin, pass);
        cout << "\nYour registration is successful.\nYou can Log In with your new account.\n";
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
        }
    }
    // show computer
    void show_computer()
    {
        // Display Computers list
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
    string username, date, time, show;
    float n, i, amount, months;

public:
    void take_charges()
    {
        cout << "\nTAKE CHARGES: \n";
        cout << "\n\t-:Membership cost:-\nFor <=5 months per month rs. 150\nFor >5 and <=9 months per month rs. 130\nFor >9 months per month rs. 100";
        cout << "\nEnter from how many members you want to take charges: ";
        cin >> ws;
        cin >> n;
        if (n > 0)
        {
            cout << "Enter date(dd/mm/yyyy): ";
            cin >> ws;
            getline(cin, date);
            cout << "Enter time(hh:mm AM/PM): ";
            getline(cin, time);
            cout << date << "\t" << time << "\n";
            for (i = 0; i < n; i++)
            {
                cout << "Enter member name: ";
                cin >> ws;
                getline(cin, username);
                cout << "Take charges for(in number of months): ";
                cin >> months;
                if (months <= 5)
                {
                    amount = months * 150;
                }
                else if (months > 5 && months <= 9)
                {
                    amount = months * 130;
                }
                else if (months > 9)
                {
                    amount = months * 100;
                }
                cout << "\t" << username << " paid for " << months << " months from " << date << " and paid of rs. " << amount << "\n";
            }

            cout << show << endl;
        }
    }

    void show_charges()
    {
        cout << "\nSHOWING CHARGES: \n";
        cout << show << endl;
        getch();
    }
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
    //
    login login;
    registration registration;
    member_entry member_entry;
    computer_entry computer_entry;
    charge charge;
    //
    /*
    login ob1;
    registration ob2;
    member_entry ob3;
    computer_entry ob4;
    member_booking ob5;
    charge ob6;
    */
    //
    cout << "\n\n\t\t\t\tWELCOME TO CYBER CAFE\n\n";
    cout << "\t\t\t\t";
    cout << "\n\t1.Log In\n\t2.Registration\n\t3.Exit\n ";
    int x;
    int t;
    cin >> ws;
    cin >> x;

    switch (x)
    {
    case 1:
    // user name
    A:
        login.user_name();
        // password
        login.pass_word();
        goto B;
        break;
    case 2:
        //user details
        registration.user_details_in();
        goto A;
        break;
    case 3:
        cout << "\n\tThank you. Visit Again.\n";
        break;

    default:
        cout << "Please enter a valid expression.";
        main();
        break;
    }

B:
{
    cout << "Profile: " << login.username << "\n";
    int i;
    char n2;
    cout << "\n1. Master Entry\n2. Cafe Management\n3. Logout\n";
    cin >> n2;
    switch (n2)
    {
    case '1':
    {
        goto master_entry;
        break;
    }
    case '2':
    {
        goto cafe_management;
        break;
    }
    case '3':
    {
        cout << "\nLogging out";
        cout << "\nYou've successfully logged out.\n";
        goto A;
    }
    default:
    {
        goto B;
        break;
    }
    }

master_entry:
{

    char n3;
    cout << "Profile: " << login.username << "\n\n"
         << "MASTER ENTRY: \n";
    cout << "\n1. Member Entry\n2. Computer Entry\n3. Back\n";
    cin >> n3;
    switch (n3)
    {
    case '1':
    {
        goto member_entry;
        break;
    }
    case '2':
    {
        goto computer_entry;
        break;
    }
    case '3':
    {
        goto B;
    }
    default:
    {
        goto master_entry;
    }
    }
}

    //master entry start

member_entry:
{
    char m1;
    cout << "Profile: " << login.username << "\n\n"
         << "MEMBER ENTRY: \n";
    cout << "\n1. Add new mumber\n2. Show member\n3. Delete Record\n4. Back\n";
    cin >> m1;
    switch (m1)
    {
    case '1':
    {
        member_entry.add_new_member();
        goto member_entry;
        break;
    }
    case '2':
    {
        member_entry.show_member();
        goto member_entry;
        break;
    }
    case '3':
    {
        member_entry.delete_file();
        goto member_entry;
        break;
    }
    case '4':
    {
        goto master_entry;
        break;
    }
    default:
    {
        goto member_entry;
        break;
    }
    }
}

computer_entry:
{
    char m2;
    cout << "Profile: " << login.username << "\n\n"
         << "COMPUTER ENTRY: \n";
    cout << "\n1. Add new computer\n2. Show computer\n3. Delete Record\n4. Back\n";
    cin >> m2;
    switch (m2)
    {
    case '1':
    {
        computer_entry.add_new_computer();
        goto computer_entry;
        break;
    }
    case '2':
    {
        computer_entry.show_computer();
        goto computer_entry;
        break;
    }
    case '3':
    {
        computer_entry.delete_file();
        goto computer_entry;
        break;
    }
    case '4':
    {
        goto master_entry;
        break;
    }
    default:
    {
        goto computer_entry;
        break;
    }
    }
}
    //master entry end

cafe_management:
{
    char n4;
    cout << "Profile: " << login.username << "\n\n"
         << "CAFE MANAGEMENT: \n";
    cout << "\n1. Charges\n2. Back\n";
    cin >> n4;
    switch (n4)
    {
    case '1':
    {
        goto charges;
        break;
    }
    case '2':
    {
        goto B;
        break;
    }
    default:
    {
        goto cafe_management;
        break;
    }
    }
}
//cafe management start
charges:
{
    char m4;
    cout << "Profile: " << login.username << "\n\n"
         << "CHARGES: \n";
    cout << "\n1. Take Charges\n2. Show Charges\n3. Back\n";
    cin >> m4;
    switch (m4)
    {
    case '1':
    {
        cout << "Profile: " << login.username;
        charge.take_charges();
        break;
    }
    case '2':
    {
        cout << "Profile: " << login.username;
        charge.show_charges();
        goto charges;
        break;
    }
    case '3':
    {
        goto cafe_management;
        break;
    }
    default:
    {
        goto charges;
        break;
    }
    }
}
    //cafe management end
}
}