#ifndef DECORATIVEFLOWER_H
#define DECORATIVEFLOWER_H

#include "flower.hpp"

class DecorativeFlower : public Flower
{
public:
    DecorativeFlower();
    void SetWater(bool);
    void SetSoil(bool);
    void SetSoilExtract(bool);

    bool GetWater();
    bool GetSoil();
    bool GetSoilExtract();

protected:
    bool Water;
    bool Soil;
    bool SoilExtract;
    int number;
};

#endif // DECORATIVEFLOWER_H
