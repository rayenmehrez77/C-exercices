#include <iostream>
using namespace std;


int main() {
    string name;
    int age;
    string city, country;
    int monthlySalary, yearlySalary;
    char gender;
    bool isMarried;
    int num1, num2, num3;

    cout << "How old are you ?" << endl;
    cin >> age;

    cout << "After 5 years you will be " << age + 5 << endl;


    cin >> num1;
    cout << " + " << endl;
    cin >> num2;
    cout << " + " << endl;
    cin >> num3;
    cout << "----------------------------" << endl;

    cout << "Total = " << num1 + num2 + num3 << endl;

    cout << "Name: ";
    cin >> name;

    cout << "Age: ";
    cin >> age;

    cout << "City: ";
    cin >> city;

    cout << "Country: ";
    cin >> country;

    cout << "Monthly salary: ";
    cin >> monthlySalary;

    cout << "Yearly Salary: ";
    cin >> yearlySalary;

    cout << "Gender: ";
    cin >> gender;

    cout << "isMarried: true or false ";
    cin >> isMarried;

    cout << "*****************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " Years " << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthlySalary << endl;
    cout << "Yearly Salary: " << yearlySalary << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "*****************************" << endl;

    return 0;
}

