#pragma once

/*
 *    Vector types.
 *    YES, I know, should've used templates but I'm not feeling like learning new things today.
 */

struct vec2 { //C++ structs get types without typedef
    float x;
    float y;
    vec2();
    vec2(float a);
    vec2(float a, float b);
    vec2(const vec2& a);
    vec2& operator=(vec2 a);
    vec2& operator+=(vec2 a);
    vec2& operator-=(vec2 a);
    vec2& operator*=(float a);
    vec2& operator*=(vec2 a);
    vec2& operator/=(float a);
    vec2& operator/=(vec2 a);
    vec2 operator+(const vec2& b);
    vec2 operator-(const vec2& b);
    vec2 operator*(const float& b);
    vec2 operator*(const vec2& b);
    vec2 operator/(const float& b);
    vec2 operator/(const vec2& b);
};

struct vec3 {
    float x;
    float y;
    float z;
    vec3();
    vec3(float a);
    vec3(float a, float b, float c);
    vec3(const vec3& a);
    vec3& operator=(vec3 a);
    vec3& operator+=(vec3 a);
    vec3& operator-=(vec3 a);
    vec3& operator*=(float a);
    vec3& operator*=(vec3 a);
    vec3& operator/=(float a);
    vec3& operator/=(vec3 a);
    vec3 operator+(const vec3& b);
    vec3 operator-(const vec3& b);
    vec3 operator*(const float& b);
    vec3 operator*(const vec3& b);
    vec3 operator/(const float& b);
    vec3 operator/(const vec3& b);
};

struct vec4 {
    float x;
    float y;
    float z;
    float w;
    vec4();
    vec4(float a);
    vec4(float a, float b, float c, float d);
    vec4(const vec4& a);
    vec4& operator=(vec4 a);
    vec4& operator+=(vec4 a);
    vec4& operator-=(vec4 a);
    vec4& operator*=(float a);
    vec4& operator*=(vec4 a);
    vec4& operator/=(float a);
    vec4& operator/=(vec4 a);
    vec4 operator+(const vec4& b);
    vec4 operator-(const vec4& b);
    vec4 operator*(const float& b);
    vec4 operator*(const vec4& b);
    vec4 operator/(const float& b);
    vec4 operator/(const vec4& b);
};

float vdot(vec2 a, vec2 b);
float vdot(vec3 a, vec3 b);
float vdot(vec4 a, vec4 b);
float vlen(vec2 a);
float vlen(vec3 a);
float vlen(vec4 a);
vec2  vnml(vec2 a);
vec3  vnml(vec3 a);
vec4  vnml(vec4 a);
