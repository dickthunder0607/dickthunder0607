#include <iostream>
#include <string>

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
class Time {
private:
	int hour;
	int minute;
	int second;

public:
	Time() {

	}
	Time(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}

	void setTime(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}

	int getHour() {
		return hour;
	}

	void setHour(int hour) {
		this->hour = hour;
	}

	int getMinute() {
		return minute;
	}

	void setMinute(int minute) {
		this->minute = minute;
	}

	int getSecond() {
		return second;
	}

	void setSecond(int second) {
		this->second = second;
	}

	void previousSecond() {
		if (hour == 0 && minute == 0 && second == 0) {
			hour = 23;
			minute = 59;
			second = 59;
			return;
		}
		if (minute == 0 && second == 0) {
			hour--;
			minute = 59;
			second = 59;
			return;
		}
		if (second == 0) {
			minute--;
			second = 59;
			return;
		}
		second--;
	}

	void nextSecond() {
		if (hour == 23 && minute == 59 && second == 59) {
			hour = 0;
			minute = 0;
			second = 0;
			return;
		}
		if (minute == 59 && second == 59) {
			hour++;
			minute = 0;
			second = 0;
			return;
		}
		if (second == 59) {
			minute++;
			second = 0;
			return;
		}
		second++;
	}

	void display() {
		string hour = to_string(this->hour);
		string minute = to_string(this->minute);
		string second = to_string(this->second);
		if (hour.length() == 1)
			hour = "0" + hour;
		if (minute.length() == 1)
			minute = "0" + minute;
		if (second.length() == 1)
			second = "0" + second;
		cout << hour + ":" << minute + ":" + second << endl;
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

	Time t1(12, 15, 23);
	t1.display();

	cout << endl;

    return 0;

}
