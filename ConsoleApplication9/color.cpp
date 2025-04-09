#include "color.h"
#include <iomanip>
#include <sstream>
Color::Color(int r, int g, int b) : r(r), g(g), b(b), a(255) {}
Color::Color(int r, int g, int b, int a) : r(r), g(g), b(b), a(a) {}
Color::Color(const std::string& name) {
    if (name == "red") {
        r = 255; g = 0; b = 0; a = 255;
    }
    else if (name == "green") {
        r = 0; g = 255; b = 0; a = 255;
    }
    else if (name == "blue") {
        r = 0; g = 0; b = 255; a = 255;
    }
    else {
        r = 0; g = 0; b = 0; a = 255; 
    }
}

int Color::getR() const { return r; }
int Color::getG() const { return g; }
int Color::getB() const { return b; }
int Color::getA() const { return a; }
void Color::setR(int r) { this->r = r; }
void Color::setG(int g) { this->g = g; }
void Color::setB(int b) { this->b = b; }
void Color::setA(int a) { this->a = a; }
Color Color::operator+(const Color& other) const {
    return Color((r + other.r) / 2, (g + other.g) / 2, (b + other.b) / 2, (a + other.a) / 2);
}

std::ostream& operator<<(std::ostream& os, const Color& color) {
    os << "RGB(" << color.r << ", " << color.g << ", " << color.b << ")";
    return os;
}

std::string Color::toRGB() const {
    std::ostringstream oss;
    oss << "RGB(" << r << ", " << g << ", " << b << ")";
    return oss.str();
}

std::string Color::toRGBA() const {
    std::ostringstream oss;
    oss << "RGBA(" << r << ", " << g << ", " << b << ", " << a << ")";
    return oss.str();
}

std::string Color::toHEX() const {
    std::ostringstream oss;
    oss << "#" << std::hex << std::setw(2) << std::setfill('0') << r
        << std::setw(2) << std::setfill('0') << g
        << std::setw(2) << std::setfill('0') << b;
    return oss.str();
}
void Color::display() const {
    std::cout << toRGB() << std::endl;
}
Color mixColor(const Color& c1, const Color& c2) {
    return c1 + c2;
}
