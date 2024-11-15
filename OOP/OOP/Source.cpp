#include <iostream>

using namespace std;
class Rectangle {

private:

    double length;

    double width;

public:


    Rectangle(double l, double w) : length(l), width(w) {}
    double area() {

        return length * width;

    }

};
class Circle {

private:

    double radius;

public:


    Circle(double r) : radius(r) {

        cout << "Circle object is created with radius : " << radius << endl;

    }


    double area() {

        return 3.14 * radius * radius;

    }

   

    ~Circle() {

        cout << "Circle object with radius " << radius << " is destroyed"<< endl;

    }

};
class BankAccount {

private:

    string accountNumber;

    double balance;

public:

    BankAccount(string accNum, double bal) : accountNumber(accNum), balance(bal) {}

  

    void deposit(double amount) {

        balance += amount;

        cout << "Deposit successful.Current balance : " << balance << endl;

    }


    void withdraw(double amount) {

        if (amount > balance) {

            cout << "Insufficient funds!" << endl;

        }
        else {

            balance -= amount;

            cout << "Withdrawal successful.Current balance : " << balance << endl;

        }

    }

};
class Math {
public:
    static double PI;
    static double getPI() {
        return PI;
    }
};
double Math::PI = 3.14;
int main() {
    cout << Math::getPI();
    return 0;

    cout << endl;

    BankAccount account("123456789", 5000);


    account.deposit(2000);

    account.withdraw(3000);
 
    Circle circle(7.0);

    cout << "Area of the circle : "<< circle.area() << endl;


    Rectangle rect(5.0, 3.0);

    cout << "Area of the rectangle : " << rect.area() << endl;



    return 0;

}