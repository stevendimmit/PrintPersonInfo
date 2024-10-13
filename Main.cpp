#include <iostream>
#include <string>

using namespace std;


int main() {
    // decalare variables for person
    string firstName;
    string lastName;
    string streetAddress;
    string city;
    string zipCode;

    // persons information
    firstName = "Steven";
    lastName = "Dimmit";
    streetAddress = "123 Ocean Ave";
    city = "Ocean Grove";
    zipCode = "07756";

    // print stored information
    cout << "Person Information:" << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}

