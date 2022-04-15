#include <iostream>
#include <string>
using namespace std;
//This is a comment
/*Same as this
*/
int main() {
    cout << "Hello this is my first cpp" <<endl;
    cout << "Video 24:50\n";
    int year = 2022;
    double price = 9999.99
    char status = 'N';
    string make = "Civic"
    string model = "Honda";
    bool for_sale = true;
    for_sale = false;
    string car = make+" "+ model
    price = price*0.9;
    cout << "Year" << year << endl;
    cout << "Price: " << price << endl;
    cout << "Status: " << status << endl;
    cout << "New: " << model << endl;
    cout << "Availability: " << for_sale << endl;
    string name;
    cout << "Please enter your name: ";
    getline(cin,name);
    cout << "Welcome " << name;
    int age;
    cout << "Please enter your age: ";
    cin << age;
    cout << "Your age is " << age;
    cout << endl;
    string item;
    double price;
    int quantity;
    double total;
    cout << "Which item do you want to buy?";
    getline(cin,item);
    cout << "What is the price for each? $";
    cin >> price;
    cout << "How many do you want to buy?: ";
    cin >> quantity;
    cout >> endl;
    total = price*quantity;
    cout << "item: " << item << endl;
    cout << "price: " << price << endl;
    cout << "x " << quantity << endl;
    cout << "Your total is: $" << total << endl;
    cout << endl;
    int total = 1;
    total++;//increment
    total--;//decrement
    cout << total;
    int temperature;
    cout << "Please enter the temperature(C): ";
    cin << "temperature";
    if (temperature > 30) {
    cout << "It is HOT outside";
    }
    else if (temperature > 30) {
    cout << "It is COLD outside";
    }
    else {
    cout << "It is WARM outside";
    }
    int month;
    cout << "Enter the month (1-12):"
    cin >> monthl;
    switch (month) {
        case 1:
        cout << "Its Jan.";
        break;
        case 2:
        cout << "Its Feb.";
        break;
        case 3:
        cout << "Its Mar.";
        break;
        case 4:
        cout << "Its Apr.";
        break;
        case 5:
        cout << "Its May";
        break;
        case 6:
        cout << "Its Jun.";
        break;
        case 7:
        cout << "Its Jul.";
        break;
        case 8:
        cout << "Its Aug.";
        break;
        case 9:
        cout << "Its Sep.";
        break;
        case 10:
        cout << "Its Oct.";
        break;
        case 11:
        cout << "Its Nov.";
        break;
        case 12:
        cout << "Its Dec.";
        break;
        default:
            cout << "Enter a correct number";
    }
    cout << endl;
    return 0;
