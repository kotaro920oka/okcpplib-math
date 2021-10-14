/*
MIT License

Copyright (c) 2021 OKA Kotaro (岡 虎太朗)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include "Vector2.hpp"
#include <cmath>
#include <string>
#include <sstream>
#include <iostream>
namespace OK{ namespace Math{
  Vector2::Vector2()
  {
    x_val = 0;
    y_val = 0;
  }
  Vector2::Vector2(double _x, double _y)
  {
    x_val = _x;
    y_val = _y;
  }
  double Vector2::get_x()
  {
    return x_val;
  }
  void Vector2::set_x(double val)
  {
    x_val = val;
  }
  double Vector2::get_y()
  {
    return y_val;
  }
  void Vector2::set_y(double val)
  {
    y_val = val;
  }
  std::string Vector2::to_str()
  {
    //return "(" + std::to_string(this->get_x()) + "," + std::to_string(this->get_y()) + ")";
    std::stringstream ss;
    ss << "(" << this->get_x() << "," << this->get_y() << ")";
    return ss.str();
  }
  Vector2 Vector2::add(Vector2 vec1, Vector2 vec2)
  {
    return Vector2(vec1.get_x() + vec2.get_x(), vec1.get_y() + vec2.get_y());
  }
  Vector2 Vector2::sub(Vector2 vec1, Vector2 vec2)
  {
    return Vector2(vec1.get_x() - vec2.get_x(), vec1.get_y() - vec2.get_y());
  }
  Vector2 Vector2::mul(Vector2 vec, double sca)
  {
    return Vector2(vec.get_x() * sca, vec.get_y() * sca);
  }
  Vector2 Vector2::mul(double sca, Vector2 vec)
  {
    return Vector2(sca * vec.get_x(), sca * vec.get_y());
  }
  Vector2 Vector2::div(Vector2 vec, double sca)
  {
    return Vector2(vec.get_x() / sca, vec.get_y() / sca);
  }
  double Vector2::dot(Vector2 vec1, Vector2 vec2)
  {
    return vec1.get_x() * vec2.get_x() + vec1.get_y() * vec2.get_y();
  }
  double Vector2::cross(Vector2 vec1, Vector2 vec2)
  {
    return vec1.get_x() * vec2.get_y() - vec1.get_y() * vec2.get_x();
  }
  double Vector2::mag(Vector2 vec)
  {
    return std::sqrt(vec.get_x() * vec.get_x() + vec.get_y() * vec.get_y());
  }
  Vector2 operator+(Vector2 vec1, Vector2 vec2)
  {
    return Vector2::add(vec1, vec2);
  }
  Vector2 operator-(Vector2 vec1, Vector2 vec2)
  {
    return Vector2::sub(vec1, vec2);
  }
  Vector2 operator*(Vector2 vec, double sca)
  {
    return Vector2::mul(vec, sca);
  }
  Vector2 operator*(double sca, Vector2 vec)
  {
    return Vector2::mul(sca, vec);
  }
  Vector2 operator/(Vector2 vec, double sca)
  {
    return Vector2::div(vec, sca);
  }
  std::ostream& operator<<(std::ostream& stream, Vector2 value)
  {
    const std::string strval = value.to_str();
    stream << strval;
    return stream;
  }
}}