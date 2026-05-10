#include <iostream>
#include <string>
#include "PPP_support.h"

using namespace std;

int main()          // simple program to exercise operators
{
    cout << "Enter the name of the person you want to type to:\n";
    string first_name;                      // first_name is a variable of type string
    cin >> first_name;                     // read characters into first_name
    cout << "Dear " << first_name << ",\n";
    cout << "How are you? I am fine. I miss you.\n";
    string friend_name;                     // friend_name is another variable of type string
    cout << "Enter the name of another friend:\n";
    cin >> friend_name;                    // read characters into friend_name
    cout << "Have you seen " << friend_name << " lately?\n";  // friend_name is uninitialized
    cout << "What is the age of the recipient?\n";
    int age;                                // age is a variable of type int
    cin >> age;                           // read an integer into age
    if (age <= 0 || age >= 110) {
        cout << simple_error("You're kidding!\n");
    }
    if (age < 12) {
        cout << "Next year you will be " << age + 1 << ".\n";
    }
    else if (age == 17) {
        cout << "Next year you will be able to vote.\n";
    }
    else if (age > 70) {
        cout << "I hope you are enjoying retirement.\n";
    }
    cout << "Yours sincerely,\n\n\n";
    cout << "Graham\n";
}

