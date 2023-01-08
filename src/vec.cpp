#include "vec.hpp"

vec::vec(): x(0), y(0){}
vec::vec(float xC, float yC): x(xC), y(yC){}
vec::vec(const vec& v): x(v.x), y(v.x){}

vec::~vec(){}
