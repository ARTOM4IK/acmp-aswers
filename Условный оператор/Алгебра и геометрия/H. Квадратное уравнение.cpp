#include <iostream>
#include <cmath>

int main() 
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a == 0) 
    {
        if (b == 0) 
        {
            if (c == 0)
            {
                std::cout << -1 << std::endl;
            }
            else
            {
                std::cout << 0 << std::endl;
            }
        } 
        else 
        {
            double root = -double(c) / b;
            std::cout << 1 << std::endl;
            std::cout << root << std::endl;
        }
        return 0;
    }

    int discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double sqrt_discr = std::sqrt(discriminant);
        double root1 = (-b + sqrt_discr) / (2.0 * a);
        double root2 = (-b - sqrt_discr) / (2.0 * a);

        if (root1 < root2)
        {
            std::cout << 2 << std::endl;
            std::cout << root1 << std::endl << root2 << std::endl;
        } 
        else
        {
            std::cout << 2 << std::endl;
            std::cout << root2 << std::endl << root1 << std::endl;
        }
    } 
    else if (discriminant == 0) 
    {
        double root = -b / (2.0 * a);
        std::cout << 1 << std::endl;
        std::cout << root << std::endl;
    } 
    else 
    {
        std::cout << 0 << std::endl;
    }

    return 0;
}