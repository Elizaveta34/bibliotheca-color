#ifndef COLOR_H
#define COLOR_H
#include <string>
#include <iostream>
class Color {
private:
    int r, g, b, a;
    std::string name;
public:
    Color(int r, int g, int b);
    Color(int r, int g, int b, int a);
    Color(const std::string& name);
    int getR() const;
    int getG() const;
    int getB() const;
    int getA() const;
    void setR(int r);
    void setG(int g);
    void setB(int b);
    void setA(int a);
    Color operator+(const Color& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Color& color);
    std::string toRGB() const;
    std::string toRGBA() const;
    std::string toHEX() const;
    void display() const;
};
Color mixColor(const Color& c1, const Color& c2);
#endif 
