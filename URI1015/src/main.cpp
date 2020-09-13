#include <iostream>
#include <iomanip>
#include <cmath>

#define SIZE 2

struct Point {
    double coordinate_X = 0;
    double coordinate_Y = 0;
};

double calculate_distance(Point point_A, Point point_B)
{
    double difference_X = pow((point_A.coordinate_X - point_B.coordinate_X), 2);
    double difference_Y = pow((point_A.coordinate_Y - point_B.coordinate_Y), 2);

    return sqrt(difference_X + difference_Y);
}

int main()
{
    Point points[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        std::cin >> points[i].coordinate_X >> points[i].coordinate_Y;
    }

    std::cout << std::fixed << std::setprecision(4)
              << calculate_distance(points[0], points[1])
    << std::endl;

    return 0;
}
