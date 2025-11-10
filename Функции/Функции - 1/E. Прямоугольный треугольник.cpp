#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
	int x;
	int y;
};

int Side(Point p1, Point p2)
{
    return pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2);
}

int main ()
{
    Point p[3];
    
    for (int i = 0; i < 3; i++)
    {
        cin >> p[i].x;
        cin >> p[i].y;
    }
    
	int a = Side(p[0], p[1]);
	int b = Side(p[1], p[2]);
	int c = Side(p[0], p[2]);
	
    if (a + b == c || b + c == a || a + c == b)
    {
        cout << "Yes";
    }
    
    else
    {
        cout << "No";
    }
    
    return 0;
}