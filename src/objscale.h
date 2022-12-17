/*
GOMove By Rochet2
Original idea by Mordred
http://rochet2.github.io/
*/

#ifndef OBJSCALE_H
#define OBJSCALE_H

#include "DataMap.h"

class Objscale : public DataMap::Base
{
public:
    Objscale() {}
    Objscale(float scale) : scale(scale) {}
    float scale = -1.0f;
};

#endif
