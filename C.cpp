#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
// someday
class Animal {
    private:
        string color;
    protected:
        string type;

    public:
        void eat() {
            cout << "I can eat." << endl;
        }

        void sleep() {
            cout << "I can sleep." << endl;
        }

        void setColor(string c) {
            color = c;
        }

        string getColor() {
            return color;
        }
};


class Flora: public Animal {
    public: 
        void setType(string t) {
            type = t;
        }

        void displayInfo(string c) {
            cout << "I am " << type << endl;
            cout << "My color is " << c << endl;
        }

};
// 18/9/2022*****************************************************
void showDate(int m, int d, int y) {
    cout << setfill('0');
    cout << setw(2) << m << '/' << d << '/' << y << endl;
    cin.get();

};

// 8/10/2022*******************************************************
// Function tính giai thừa của 1 số
long factorial (long a) {
    if (a > 1) {
        return (a * factorial(a-1));
    } else {
        return (1);
    }
}
// Khai bao function truoc (add code ở dưới hàm main)
void odd (int a);
void even (int a);


int main() {
//     //------------------------------- * (18/9/2022) *
//         //    (1)
//         // const int max = 12;
//         // const int space = 6;

//         // for(int i = 0; i <= max; i++) {
//         //     if (i % 2) {
//         //         cout << setiosflags(ios::left);
//         //     } else {
//         //         cout << resetiosflags(ios::left);
//         //     }
//         //     for(int j = 0; j <= max; j++) {
//         //         cout << setw(space) << i * j; // setw(num)- Configure the space between element.
//         //     }
//         //     cout << endl;
//         // }
//         // cin.get();
//         // cin.get();
//         //   (2)
//         // double x = 800000.0 / 81.0;
//         // cout << setiosflags(ios::fixed) << setprecision(2) << x << endl;
//         // cin.get();
//         //   (3)

//         //showDate(1,24,2022);

//         int a = 1, b = 6, c = 11;

//         int max = ((a > b) && (a > c)) ? a : (b > c) ? b : c;

//         cout << "Max is: " << max << endl;

// 25/9/2022***************************************************

//         int n = 10;
//         loop:
//             cout << n << endl;
//             n--;
//         if (n > 0) goto loop;
//         cout << "END" << endl;

// 2/10/2022 *****************************************************
        //  double z = 3;
        //  int x = static_cast<int>(z + 0.5); // Copy the value of double z to interger x (nearest value)
        //  cout << x << endl;

        // EX22:
            // const int SECRET_NUM = 11;
            // const double PAY_RATE = 18.35;

            // int one, two;
            // double first, second, hoursWorked;
            // one = 18;
            // two = 11;
            // first = 25;
            // second = first * 3.0;

            // second = 2 * static_cast<double>(SECRET_NUM);
            // double SECRET_NUM = SECRET_NUM + 3.0;
            // cout << first << " " << second << SECRET_NUM << endl;
            // double paycheck = hoursWorked * PAY_RATE;
            // cout << "Wages = " << paycheck << endl;

        // EX23:
            // const char STAR = '*';
            // const int PRIME = 71;
            // int count, sum;
            // double x;
            // count = 1;
            // sum = count + PRIME;
            // x /= 25.67;
            // int newNum = count * 1 + 2;
            // sum += count;
            // x = x + sum * count;
            // cout << " count = " << count << ", sum = " << sum
            // << ", PRIME = " << PRIME << endl;

        // EX24:
            // int temp;
            // string first, last;
            // cout << "Enter first name: ";
            // cin >> first;
            // cout << endl;
            // cout << "Enter last name: ";
            // cin >> last;
            // cout << endl;
            // cout << "Enter today's temperature: ";
            // cin >> temp;
            // cout << endl;
            // cout << first << " " << last << "Today's temperature is: " << temp << endl;

        // EX33:
            // const double X = 13.45; const int Y=34;
            // const char BLANK= ' ';
            // string firstName, lastName;
            // int num;
            // double salary;
            // cout << "Enter first name: "; 
            // cin >> firstName; 
            // cout << endl;
            // cout <<"Enter last name: "; 
            // cin >> lastName;
            // cout << endl;
            // cout <<"Enter a positive integer less than 70: ";
            // cin >> num;
            // cout << endl; 
            // salary = num * X;
            // cout << "Name: " << firstName << BLANK << lastName << endl;
            // cout << "Wages: $" << salary << endl; 
            // cout << "X = " << X << endl;
            // cout << "X+Y = " << X+Y << endl;

//3/10/2022 (On School)
            // cout << setw(7) << "*" << setw(20) << "*" << endl;
            // cout << setw(8) << "***" << setw(20) << "***" << endl;
            // cout << setw(9) << "*****" << setw(20) << "*****" << endl;
            // cout << setw(10) << "*******" << setw(20) << "*******" << endl;
            // cout << setw(11) << "*********" << setw(20) << "*********" << endl;

            // cout << '\n';

            // cout << setfill('_') ;
            // cout << setw(17) << "*" << endl;
            // cout << setfill('_') ;
            // cout << setw(17) << "**" << endl;
            // cout << setfill('_') ;
            // cout << setw(17) << "***" << endl;
            // cout << setfill('_') ;
            // cout << setw(17) << "****" << endl;

            // int c1, c2, c3;
            // cin >> c1 >> c2 >> c3;
            // if ((c1 <= 0) || (c2 <= 0) || (c3 <= 0)) {
            //     cout << "The side of a triangle can not be a negative value." << endl;
            // } else if ((c1 + c2 < c3) || (c1 + c3 < c2) || (c2 + c3 < c1)) {
            //     cout << "This is not a triangle." << endl;
            // } else {
            //     cout << "This is a triangle." << endl;
            // }

// 8/10/2022
        // long number;
        // cout << "Please type a number: " ;
        // cin >> number;
        // cout << "The factorial number is: " << factorial(number) << endl; // Giai thừa

        // int i = 1;
        // int count = 0;
        // while (i != 0) {
        //     if (count >= 5) {
        //         break;
        //     }
        //     cout << "Please type a random number: " ;
        //     cin >> i;
        //     odd(i);
        //     count++;
        // };


// 10/10/2022 (At school)*********************************
        // ---PT BAC 2---
        // double a, b, c, delta;
        // double x1, x2;
        // cout << "Nhap he so a: ";
        // cin >> a;
        // cout << "Nhap he so b: ";
        // cin >> b;
        // cout << "Nhap he so c: ";
        // cin >> c;

        // if (a == 0) {
        //     if (b == 0) {
        //         if (c == 0) cout << "Phuong trinh co vo so nghiem." << endl;
        //         else cout << "Phuong trinh vo nghiem." << endl;
        //     } else cout << "x = " << (-c/b) << endl;
        // } else {
        //     delta = b*b - 4*a*c;
        //     if (delta > 0) {
        //         x1 = (-b - sqrt(delta)) / (2*a);
        //         x2 = (-b + sqrt(delta)) / (2*a);
        //         cout << "X1 = " << x1 << endl;
        //         cout << "X2 = " << x2 << endl;
        //     } else if (delta == 0) {
        //         cout << "Phuong trinh co nghiem kep x = " << -b/(2*a) << endl;
        //     } else cout << "Phuong trinh vo nghiem.";
        // }

        // --- in sao ---
        // int line = 1;
        // int star = 1;
        // while (line <= 20) {
        //     while (star <= line) {
        //         star == 1 ? cout << setw(20) << "*" : cout << "*";
        //         star++;
        //     }
        //     star = 1;
        //     cout << '\n';
        //     line++; 
        // }

        return 0;

// 30/10/2022
        int a (5); // int a = 5;
}

// 8/10/2022
void odd (int a) 
{
    if ((a%2 != 0)) cout << "Number is odd.\n";
    else even(a);
}

void even(int a) 
{
    if ((a%2 == 0)) cout << "Number is even.\n";
    else odd(a);
}

// Abjsdbvsdbvskjdhbvisjdhvbkjdhbs