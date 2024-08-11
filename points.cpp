#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;
    friend void distance(Point a, Point b);

public:
    Point(int, int);
    void print()
    {
        cout << "The point is (" << x << "," << y << ")"<<endl;
    }
};

Point::Point(int a, int b)
{
    x = a;
    y = b;
}

void distance(Point a, Point b)
{
    float dist = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    cout << "The distance between the points is " << dist<<endl;
}

int main()
{
    Point a(1, 5);
    Point b(4, 6);
    a.print();
    b.print();
    distance(a, b);

    return 0;
}