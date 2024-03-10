#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

// Базовый класс "Фигура"
class Shape {
public:
    virtual double getArea() const = 0;
    virtual double getVolume() const = 0;
    virtual void showInfo() const = 0;
};

// Класс "Треугольник"
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {}

    double getArea() const override {
        return 0.5 * base * height;
    }

    double getVolume() const override {
        return 0.0;
    }

    void showInfo() const override {
        cout << "Треугольник: " << endl;
        cout << "Основание: " << base << endl;
        cout << "Высота: " << height << endl;
        cout << "Площадь: " << getArea() << endl;
        cout << "Объем: " << getVolume() << endl;
    }
};

// Класс "Квадрат"
class Square : public Shape {
private:
    double side;

public:
    Square(double side) : side(side) {}

    double getArea() const override {
        return side * side;
    }

    double getVolume() const override {
        return 0.0;
    }

    void showInfo() const override {
        cout << "Квадрат: " << endl;
        cout << "Сторона: " << side << endl;
        cout << "Площадь: " << getArea() << endl;
        cout << "Объем: " << getVolume() << endl;
    }
};

// Класс "Круг"
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double getArea() const override {
        return 3.14159 * radius * radius;
    }

    double getVolume() const override {
        return 0.0;
    }

    void showInfo() const override {
        cout << "Круг: " << endl;
        cout << "Радиус: " << radius << endl;
        cout << "Площадь: " << getArea() << endl;
        cout << "Объем: " << getVolume() << endl;
    }
};

// Класс "Пирамида"
class Pyramid : public Shape {
private:
    double baseArea;
    double height;

public:
    Pyramid(double baseArea, double height) : baseArea(baseArea), height(height) {}

    double getArea() const override {
        return baseArea + 4 * (0.5 * baseArea);
    }

    double getVolume() const override {
        return (1.0 / 3) * baseArea * height;
    }

    void showInfo() const override {
        cout << "Пирамида: " << endl;
        cout << "Площадь основания: " << baseArea << endl;
        cout << "Высота: " << height << endl;
        cout << "Площадь поверхности: " << getArea() << endl;
        cout << "Объем: " << getVolume() << endl;
    }
};

// Класс "Цилиндр"
class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double radius, double height) : radius(radius), height(height) {}

    double getArea() const override {
        return 2 * 3.14159 * radius * (radius + height);
    }

    double getVolume() const override {
        return 3.14159 * radius * radius * height;
    }

    void showInfo() const override {
        cout << "Цилиндр: " << endl;
        cout << "Радиус: " << radius << endl;
        cout << "Высота: " << height << endl;
        cout << "Площадь поверхности: " << getArea() << endl;
        cout << "Объем: " << getVolume() << endl;
    }
};

// Класс "Сфера"
class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double radius) : radius(radius) {}

    double getArea() const override {
        return 4 * 3.14159 * radius * radius;
    }

    double getVolume() const override {
        return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    }

    void showInfo() const override {
        cout << "Сфера: " << endl;
        cout << "Радиус: " << radius << endl;
        cout << "Площадь поверхности: " << getArea() << endl;
        cout << "Объем: " << getVolume() << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Triangle triangle(3, 4);
    Square square(5);
    Circle circle(2);
    Pyramid pyramid(6, 8);
    Cylinder сylinder(2, 5);
    Sphere sphere(5);

    triangle.showInfo();
    square.showInfo();
    circle.showInfo();
    pyramid.showInfo();
    сylinder.showInfo();
    sphere.showInfo();
    return 0;
}