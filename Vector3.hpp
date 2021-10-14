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
#ifndef OK_MATH_VECTOR3_20210425_HPP
#define OK_MATH_VECTOR3_20210425_HPP
#include <string>
namespace OK{ namespace Math{
  class Vector3
  {
    private:
    double x_val;
    double y_val;
    double z_val;
    public:
    Vector3();
    Vector3(double _x, double _y, double _z);
    double get_x();
    void set_x(double val);
    double get_y();
    void set_y(double val);
    double get_z();
    void set_z(double val);
    std::string to_str();
    static Vector3 add(Vector3 vec1, Vector3 vec2);//和
    static Vector3 sub(Vector3 vec1, Vector3 vec2);//差
    static Vector3 mul(Vector3 vec, double sca);//定数倍
    static Vector3 mul(double sca, Vector3 vec);
    static Vector3 div(Vector3 vec, double sca);//定数の逆数倍
    static double dot(Vector3 vec1, Vector3 vec2);//内積
    static Vector3 cross(Vector3 vec1, Vector3 vec2);//外積
    static double mag(Vector3 vec); //大きさ
  };
  Vector3 operator+(Vector3 vec1, Vector3 vec2);
  Vector3 operator-(Vector3 vec1, Vector3 vec2);
  Vector3 operator*(Vector3 vec, double sca);
  Vector3 operator*(double sca, Vector3 vec);
  Vector3 operator/(Vector3 vec, double sca);
  std::ostream& operator<<(std::ostream& stream, Vector3 value);
}}
#endif //OK_MATH_VECTOR3_20210425_HPP