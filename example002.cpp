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
#include <iostream>
#include <string>
#include <cmath>
#include "Vector3.hpp"
namespace okm = OK::Math;
using std::cout;
using std::endl;
int main(int argc, char **argv)
{
  okm::Vector3 vec1 = okm::Vector3(2, 3, 5);
  okm::Vector3 vec2 = okm::Vector3(7, 11, 13);
  cout << "vec1: " << vec1 << endl;
  cout << "vec2: " << vec2 << endl;
  cout << "vec1 + vec2: " << (vec1 + vec2) << endl;
  cout << "vec1 - vec2: " << (vec1 - vec2) << endl;
  cout << "vec2 - vec1: " << (vec2 - vec1) << endl;
  cout << "vec1 * 2: " << (vec1 * 2) << endl;
  cout << "vec2 * 2: " << (vec2 * 2) << endl;
  cout << "vec1 / 2: " << (vec1 / 2) << endl;
  cout << "vec2 / 2: " << (vec2 / 2) << endl;
  cout << "vec1 [dot] vec2: " << (okm::Vector3::dot(vec1, vec2)) << endl;
  cout << "vec1 [cross] vec2: " << (okm::Vector3::cross(vec1, vec2)) << endl;
  cout << "[mag] vec1: " << (okm::Vector3::mag(vec1)) << endl;
  cout << "[mag] vec2: " << (okm::Vector3::mag(vec2)) << endl;
  //cout << "vec1 + vec2" << (okm::Vector3::add(vec1, vec2)).to_str() << endl;
}