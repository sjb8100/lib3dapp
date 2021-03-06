// Copyright 2016 Lauri Gustafsson
/*  This file is part of lib3dapp.

    lib3dapp is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    lib3dapp is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with lib3dapp.  If not, see <http://www.gnu.org/licenses/>.*/

#include "3dapp_vectors.hpp"
#include <cmath>

using namespace Lib3dapp;

vec2::vec2() {
    x=0.0f;
    y=0.0f;
}

vec2::vec2(float a) {
    x=a;
    y=a;
}

vec2::vec2(float a, float b) {
    x=a;
    y=b;
}

vec2::vec2(const vec2& a) {
    x=a.x;
    y=a.y;
}

vec2& vec2::operator=(vec2 a) {
    x=a.x;
    y=a.y;
    return *this;
}

vec2& vec2::operator+=(const vec2 a) {
    x+=a.x;
    y+=a.y;
    return *this;
}

vec2& vec2::operator-=(const vec2 a) {
    x-=a.x;
    y-=a.y;
    return *this;
}

vec2& vec2::operator*=(const float a) {
    x*=a;
    y*=a;
    return *this;
}

vec2& vec2::operator*=(const vec2 a) {
    x*=a.x;
    y*=a.y;
    return *this;
}

vec2& vec2::operator/=(const float a) {
    x/=a;
    y/=a;
    return *this;
}

vec2& vec2::operator/=(const vec2 a) {
    x/=a.x;
    y/=a.y;
    return *this;
}

vec2 vec2::operator+(const vec2& b) {
    vec2 a= *this;
    a+=b;
    return a;
}

vec2 vec2::operator-(const vec2& b) {
    vec2 a= *this;
    a-=b;
    return a;
}

vec2 vec2::operator*(const float& b) {
    vec2 a= *this;
    a*=b;
    return a;
}

vec2 vec2::operator*(const vec2& b) {
    vec2 a= *this;
    a*=b;
    return a;
}

vec2 vec2::operator/(const float& b) {
    vec2 a= *this;
    a/=b;
    return a;
}

vec2 vec2::operator/(const vec2& b) {
    vec2 a= *this;
    a/=b;
    return a;
}

vec3::vec3() {
    x=0.0f;
    y=0.0f;
    z=0.0f;
}

vec3::vec3(float a) {
    x=a;
    y=a;
    z=a;
}

vec3::vec3(float a, float b, float c) {
    x=a;
    y=b;
    z=c;
}

vec3::vec3(const vec3& a) {
    x=a.x;
    y=a.y;
    z=a.z;
}

vec3& vec3::operator=(vec3 a) {
    x=a.x;
    y=a.y;
    z=a.z;
    return *this;
}

vec3& vec3::operator+=(const vec3 a) {
    x+=a.x;
    y+=a.y;
    z+=a.z;
    return *this;
}

vec3& vec3::operator-=(const vec3 a) {
    x-=a.x;
    y-=a.y;
    z-=a.z;
    return *this;
}

vec3& vec3::operator*=(const float a) {
    x*=a;
    y*=a;
    z*=a;
    return *this;
}

vec3& vec3::operator*=(const vec3 a) {
    x*=a.x;
    y*=a.y;
    z*=a.z;
    return *this;
}

vec3& vec3::operator/=(const float a) {
    x/=a;
    y/=a;
    z/=a;
    return *this;
}

vec3& vec3::operator/=(const vec3 a) {
    x/=a.x;
    y/=a.y;
    z/=a.z;
    return *this;
}

vec3 vec3::operator+(const vec3& b) {
    vec3 a= *this;
    a+=b;
    return a;
}

vec3 vec3::operator-(const vec3& b) {
    vec3 a= *this;
    a-=b;
    return a;
}

vec3 vec3::operator*(const float& b) {
    vec3 a= *this;
    a*=b;
    return a;
}

vec3 vec3::operator*(const vec3& b) {
    vec3 a= *this;
    a*=b;
    return a;
}

vec3 vec3::operator/(const float& b) {
    vec3 a= *this;
    a/=b;
    return a;
}

vec3 vec3::operator/(const vec3& b) {
    vec3 a= *this;
    a/=b;
    return a;
}

vec4::vec4() {
    x=0.0f;
    y=0.0f;
    z=0.0f;
    w=0.0f;
}

vec4::vec4(float a) {
    x=a;
    y=a;
    z=a;
    w=a;
}

vec4::vec4(float a, float b, float c, float d) {
    x=a;
    y=b;
    z=c;
    w=d;
}

vec4::vec4(const vec4& a) {
    x=a.x;
    y=a.y;
    z=a.z;
    w=a.w;
}

vec4::vec4(vec3 a, float d) {
    x=a.x;
    y=a.y;
    z=a.z;
    w=d;
}

vec4& vec4::operator=(vec4 a) {
    x=a.x;
    y=a.y;
    z=a.z;
    w=a.w;
    return *this;
}

vec4& vec4::operator+=(const vec4 a) {
    x+=a.x;
    y+=a.y;
    z+=a.z;
    w+=a.w;
    return *this;
}

vec4& vec4::operator-=(const vec4 a) {
    x-=a.x;
    y-=a.y;
    z-=a.z;
    w-=a.w;
    return *this;
}

vec4& vec4::operator*=(const float a) {
    x*=a;
    y*=a;
    z*=a;
    w*=a;
    return *this;
}

vec4& vec4::operator*=(const vec4 a) {
    x*=a.x;
    y*=a.y;
    z*=a.z;
    w*=a.w;
    return *this;
}

vec4& vec4::operator/=(const float a) {
    x/=a;
    y/=a;
    z/=a;
    w/=a;
    return *this;
}

vec4& vec4::operator/=(const vec4 a) {
    x/=a.x;
    y/=a.y;
    z/=a.z;
    w/=a.w;
    return *this;
}

vec4 vec4::operator+(const vec4& b) {
    vec4 a= *this;
    a+=b;
    return a;
}

vec4 vec4::operator-(const vec4& b) {
    vec4 a= *this;
    a-=b;
    return a;
}

vec4 vec4::operator*(const float& b) {
    vec4 a= *this;
    a*=b;
    return a;
}

vec4 vec4::operator*(const vec4& b) {
    vec4 a= *this;
    a*=b;
    return a;
}

vec4 vec4::operator/(const float& b) {
    vec4 a= *this;
    a/=b;
    return a;
}

vec4 vec4::operator/(const vec4& b) {
    vec4 a= *this;
    a/=b;
    return a;
}

float Lib3dapp::vdot(vec2 a, vec2 b) {
    return (a.x*b.x + a.y*b.y);
}

float Lib3dapp::vdot(vec3 a, vec3 b) {
    return (a.x*b.x + a.y*b.y + a.z*b.z);
}

float Lib3dapp::vdot(vec4 a, vec4 b) {
    return (a.x*b.x + a.y*b.y + a.z*b.z + a.w*b.w);
}

float Lib3dapp::vlen(vec2 a) {
    return sqrt(a.x*a.x + a.y*a.y);
}

float Lib3dapp::vlen(vec3 a) {
    return sqrt(a.x*a.x + a.y*a.y + a.z*a.z);
}

float Lib3dapp::vlen(vec4 a) {
    return sqrt(a.x*a.x + a.y*a.y + a.z*a.z + a.w*a.w);
}

vec2  Lib3dapp::vnml(vec2 a) {
    return a/vlen(a);
}

vec3  Lib3dapp::vnml(vec3 a) {
    return a/vlen(a);
}

vec4  Lib3dapp::vnml(vec4 a) {
    return a/vlen(a);
}
