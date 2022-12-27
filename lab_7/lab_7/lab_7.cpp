
#include <iostream>
using namespace std;

#define PI 3.14;
#define CIRCLE_AREA(r) r * r * PI;

    static float circleArea(int radius) {
        return radius * radius * PI;
    }

    static void sayHello() {
        cout << "Hello";
    }

    int main()
    {
        int r = 5;

        cout << CIRCLE_AREA(r);
        cout << endl;

        cout << circleArea(r) << endl;

        sayHello();
    }

