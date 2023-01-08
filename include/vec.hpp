#pragma once

struct vec
{

    float x;
    float y;
    vec();
    ~vec();

    vec(float xC, float y);
    vec(const vec& v);
};