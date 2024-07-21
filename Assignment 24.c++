Functions in C++

1. Define a function to check whether a given number is a Prime number or not.
2. Define a function to find the highest value digit in a given number.
3. Define a function to calculate x raised to the power y.
4. Define a function to print Pascal Triangle up to N lines.
5. Define a function to check whether a given number is a term in a Fibonacci series or
not.
6. Define a function to swap data of two int variables using call by reference
7. Write a function using the default argument that is able to add 2 or 3 numbers.
8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle
9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.
10. Write functions using function overloading to add two numbers having different data
types.

Solution:-

1. #include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}

2. #include <iostream>
using namespace std;

int highestDigit(int num) {
    int maxDigit = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit > maxDigit) maxDigit = digit;
        num /= 10;
    }
    return maxDigit;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Highest digit: " << highestDigit(num) << endl;
    return 0;
}

3. #include <iostream>
using namespace std;

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    cout << "Enter base and exponent: ";
    cin >> x >> y;
    cout << x << " raised to the power " << y << " is: " << power(x, y) << endl;
    return 0;
}

4. #include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of lines for Pascal Triangle: ";
    cin >> n;
    printPascalTriangle(n);
    return 0;
}

5. #include <iostream>
using namespace std;

bool isFibonacci(int num) {
    if (num == 0 || num == 1) return true;
    int a = 0, b = 1, c = 0;
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }
    return (c == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isFibonacci(num))
        cout << num << " is a term in Fibonacci series." << endl;
    else
        cout << num << " is not a term in Fibonacci series." << endl;
    return 0;
}

6. #include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}

7. #include <iostream>
using namespace std;

int add(int a, int b, int c = 0) {
    return a + b + c;
}

int main() {
    int x, y, z;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum of two numbers: " << add(x, y) << endl;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "Sum of three numbers: " << add(x, y, z) << endl;
    return 0;
}

8. #include <iostream>
using namespace std;

const double PI = 3.14159;

// Area of Circle
double area(double radius) {
    return PI * radius * radius;
}

// Area of Rectangle
double area(double length, double breadth) {
    return length * breadth;
}

// Area of Triangle
double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, breadth, base, height;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << area(length, breadth) << endl;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height, true) << endl;

    return 0;
}

9. #include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int x1, x2;
    double y1, y2;
    cout << "Enter two integers: ";
    cin >> x1 >> x2;
    cout << "Maximum: " << max(x1, x2) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> y1 >> y2;
    cout << "Maximum: " << max(y1, y2) << endl;

    return 0;
}

10. #include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

double add(int a, double b) {
    return a + b;
}

double add(double a, int b) {
    return a + b;
}

int main() {
    int x1, x2;
    double y1, y2;
    cout << "Enter two integers: ";
    cin >> x1 >> x2;
    cout << "Sum: " << add(x1, x2) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> y1 >> y2;
    cout << "Sum: " << add(y1, y2) << endl;

    cout << "Enter one integer and one floating-point number: ";
    cin >> x1 >> y1;
    cout << "Sum: " << add(x1, y1) << endl;

    cout << "Enter one floating-point number and one integer: ";
    cin >> y1 >> x1;
    cout << "Sum: " << add(y1, x1) << endl;

    return 0;
}
