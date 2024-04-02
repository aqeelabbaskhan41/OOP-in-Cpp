#include <iostream>

using namespace std;


class Shape
{
public:
    virtual float calculateArea()
    {

    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius=r;
    }


    float calculateArea()
    {
        float area=3.14 * (radius * radius);
        return area;
    }
};

class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    Rectangle(float l, float w)
    {
        length=l;
        width=w;
    }

    float calculateArea()
    {
        float area=length * width;
        return area;
    }
};

int main()
{
    int numShapes = 2;

    Shape *shapes[numShapes];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);



    for (int i = 0; i < numShapes; i++)
    {
        cout << "Area of shape " << i + 1 << ": " << shapes[i]->calculateArea() << endl;
    }

    return 0;
}
