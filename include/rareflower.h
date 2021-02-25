#ifndef RAREFLOWER_H
#define RAREFLOWER_H

#include "flower.hpp"

class RareFlower : public Flower
{
public:
    RareFlower();
    void SetWater(bool);
    void SetSoil(bool);
    void SetPoison(bool);

    bool GetWater();
    bool GetSoil();
    bool GetPoison();

protected:
    bool Water;
    bool Soil;
    bool Poison;
};

#endif // RAREFLOWER_H