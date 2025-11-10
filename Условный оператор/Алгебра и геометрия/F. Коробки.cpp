#include <iostream>

int main()
{
    int a1, b1, c1, a2, b2, c2, box1[3], box2[3], tmp;

    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    box1[0] = a1;
    box1[1] = b1;
    box1[2] = c1;

    box2[0] = a2;
    box2[1] = b2;
    box2[2] = c2;

    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++) 
        {
            if (box1[j] > box1[j + 1])
            {
                tmp = box1[j];
                box1[j] = box1[j + 1];
                box1[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if (box2[j] > box2[j + 1])
            {
                tmp = box2[j];
                box2[j] = box2[j + 1];
                box2[j + 1] = tmp;
            }
        }
    }

    if (box1[0] == box2[0] && box1[1] == box2[1] && box1[2] == box2[2])
        std::cout << "Boxes are equal";
    else if (box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2])
        std::cout << "The first box is smaller than the second one";
    else if (box1[0] >= box2[0] && box1[1] >= box2[1] && box1[2] >= box2[2])
        std::cout << "The first box is larger than the second one";
    else
        std::cout << "Boxes are incomparable";

    return 0;
}