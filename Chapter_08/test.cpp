// // Inheritance
// // PArent class
// // Child classes

import std;
using namespace std;

// // Geometric Object
// class GeometricObject
// {
// private:
//     string color = "green";
//     bool filled = true;

// public:
//     GeometricObject(
//         string color,
//         bool filled)
//         : color(color), filled(filled)
//     {
//     }

//     string getColor() const
//     {
//         return color;
//     }

//     void setColor(const string& color)
//     {
//         this->color = color;

//     }

//     bool isFilled() const
//     {
//         return filled;
//     }

//     void setFilled(bool filled)
//     {
//         this->filled = filled;
//     }

//     string toString() const
//     {
//         return "color: " + color +
//                " and filled: " +
//                (filled ? "true" : "false");
//     }
// };

// class Circle : public GeometricObject
// {
// private:
//     double radius;

// public:
//     Circle(double radius)
//         : GeometricObject(), radius(radius)
//     {
//     }

//     double getRadius() const
//     {
//         return radius;
//     }

//     void setRadius(double radius)
//     {
//         radius = radius;
//     }

//     double getArea() const
//     {
//         return radius * radius * numbers::pi;
//     }

//     double getDiameter() const
//     {
//         return 2 * radius;
//     }

//     double getPerimeter() const
//     {
//         return 2 * radius * numbers::pi;
//     }

//     void printCircle() const
//     {
//         cout << toString()
//              << " radius: " << radius
//              << '\n';
//     }
// };

// int main()
// {
//     Circle circle(5.0); // Create a circle with radius 5.0

//     circle.printCircle(); // Access member function

//     // std::cout << "Area: "
//     //           << circle.getArea() << '\n';

//     // std::cout << "Diameter: "
//     //           << circle.getDiameter() << '\n';

//     // std::cout << "Perimeter: "
//     //           << circle.getPerimeter() << '\n';

//     return 0;
// }

int main()
{
    char t = 't';
    cout << ++t << "\n";
}