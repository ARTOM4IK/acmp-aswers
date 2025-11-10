#include <iostream>
#include <cmath>
 
struct Point 
{
    long long x, y;    
};
 
int Square( int x1, int y1, int x2, int y2, int x3, int y3)
{
    return fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}
 
int main()
{
    Point p[4];
     
    for (int i = 0; i < 4; i++)
    {
        std::cin >> p[i].x;
        std::cin >> p[i].y;
    }
     
    if (Square(p[0].x, p[0].y, p[1].x, p[1].y, p[2].x, p[2].y) == Square(p[0].x, p[0].y, p[1].x, p[1].y, p[3].x, p[3].y) + Square(p[0].x, p[0].y, p[3].x, p[3].y, p[2].x, p[2].y) + Square(p[3].x, p[3].y, p[1].x, p[1].y, p[2].x, p[2].y))
    {
        std::cout << "In";
    }
    else
    {
        std::cout << "Out";
    }
    return 0;
}