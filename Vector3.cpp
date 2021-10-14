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
#include "Vector3.hpp"
#include <cmath>
#include <string>
#include <sstream>
#include <iostream>
namespace OK{ namespace Math{
  Vector3::Vector3()
  {
    x_val = 0;
    y_val = 0;
    z_val = 0;
  }
  Vector3::Vector3(double _x, double _y, double _z)
  {
    x_val = _x;
    y_val = _y;
    z_val = _z;
  }
  double Vector3::get_x()
  {
    return x_val;
  }
  void Vector3::set_x(double val)
  {
    x_val = val;
  }
  double Vector3::get_y()
  {
    return y_val;
  }
  void Vector3::set_y(double val)
  {
    y_val = val;
  }
  double Vector3::get_z()
  {
    return z_val;
  }
  void Vector3::set_z(double val)
  {
    z_val = val;
  }
  std::string Vector3::to_str()
  {
    //return "(" + std::to_string(this->get_x()) + "," + std::to_string(this->get_y()) + "," + std::to_string(this->get_z()) + ")";
    std::stringstream ss;
    ss << "(" << this->get_x() << "," << this->get_y() << "," << this->get_z() << ")";
    return ss.str();
  }
  Vector3 Vector3::add(Vector3 vec1, Vector3 vec2)
  {
    return Vector3(vec1.get_x() + vec2.get_x(), vec1.get_y() + vec2.get_y(), vec1.get_z() + vec2.get_z());
  }
  Vector3 Vector3::sub(Vector3 vec1, Vector3 vec2)
  {
    return Vector3(vec1.get_x() - vec2.get_x(), vec1.get_y() - vec2.get_y(), vec1.get_z() - vec2.get_z());
  }
  Vector3 Vector3::mul(Vector3 vec, double sca)
  {
    return Vector3(vec.get_x() * sca, vec.get_y() * sca, vec.get_z() * sca);
  }
  Vector3 Vector3::mul(double sca, Vector3 vec)
  {
    return Vector3(sca * vec.get_x(), sca * vec.get_y(), sca * vec.get_z());
  }
  Vector3 Vector3::div(Vector3 vec, double sca)
  {
    return Vector3(vec.get_x() / sca, vec.get_y() / sca, vec.get_z() / sca);
  }
  double Vector3::dot(Vector3 vec1, Vector3 vec2)
  {
    return vec1.get_x() * vec2.get_x() + vec1.get_y() * vec2.get_y() + vec1.get_z() * vec2.get_z();
  }
  Vector3 Vector3::cross(Vector3 vec1, Vector3 vec2)
  {
    return Vector3(vec1.get_y() * vec2.get_z() - vec1.get_z() * vec2.get_y(), vec1.get_z() * vec2.get_x() - vec1.get_x() * vec2.get_z(), vec1.get_x() * vec2.get_y() - vec1.get_y() * vec2.get_x());
  }
  double Vector3::mag(Vector3 vec)
  {
    return std::sqrt(vec.get_x() * vec.get_x() + vec.get_y() * vec.get_y() + vec.get_z() * vec.get_z());
  }
  Vector3 operator+(Vector3 vec1, Vector3 vec2)
  {
    return Vector3::add(vec1, vec2);
  }
  Vector3 operator-(Vector3 vec1, Vector3 vec2)
  {
    return Vector3::sub(vec1, vec2);
  }
  Vector3 operator*(Vector3 vec, double sca)
  {
    return Vector3::mul(vec, sca);
  }
  Vector3 operator*(double sca, Vector3 vec)
  {
    return Vector3::mul(sca, vec);
  }
  Vector3 operator/(Vector3 vec, double sca)
  {
    return Vector3::div(vec, sca);
  }
  std::ostream& operator<<(std::ostream& stream, Vector3 value)
  {
    const std::string strval = value.to_str();
    stream << strval;
    return stream;
  }
}}