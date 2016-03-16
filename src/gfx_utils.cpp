#include "gfx_utils.hpp"

float max(float n, float m) {
    return (n>m) ? n : m;
}

float min(float n, float m) {
    return (n>m) ? m : n;
}

float clamp(float n, float a, float b) {
    return ((n<a) ? a : ((n>b) ? b : n));
}

float smoothstep(float edge0, float edge1, float x) { //Stolen from Wikipedia :^)
    // Scale, bias and saturate x to 0..1 range
    x = clamp((x - edge0)/(edge1 - edge0), 0.0, 1.0); 
    // Evaluate polynomial
    return x*x*(3 - 2*x);
}

//Templates, again... Well, this works too.
float mix(float a, float b, float n) {
    return a*(1-n)+b*n;
}

vec2 mix(vec2 a, vec2 b, float n) {
    return a*(1-n)+b*n;
}

vec3 mix(vec3 a, vec3 b, float n) {
    return a*(1-n)+b*n;
}

vec4 mix(vec4 a, vec4 b, float n) {
    return a*(1-n)+b*n;
}

vec3 triangleNormal(vec3 a, vec3 b, vec3 c) {
    vec3 v, w;
    v = b - a;
    w = c - a;
    return vnml(vec3((v.y*w.z - v.z*w.y), (v.z*w.x - v.x*w.z), (v.x*w.y - v.y*w.x)));
}