#ifndef NORMALFLOWER_H
#define NORMALFLOWER_H

#include "flower.hpp"

class NormalFlower : public Flower
{
public:
    NormalFlower();
    void SetWater(bool);
    void SetSoil(bool);

    bool GetWater();
    bool GetSoil();

protected:
    bool Water;
    bool Soil;
};

#endif // NORMALFLOWER_H
