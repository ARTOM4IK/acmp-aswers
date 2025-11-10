#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
	double x;
	double y;
};

double Square2 (Point p1, Point p2, Point p3)
{
    return p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y);
}

int main ()
{
    Point p[3];
    
    for (int i = 0; i < 3; i++)
    {
        cin >> p[i].x;
        cin >> p[i].y;
    }
    
	cout << fixed << fabs(Square2(p[0], p[1], p[2])) / 2;
    
    return 0;
}