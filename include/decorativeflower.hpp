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
    void SetName(QString);

    bool GetWater();
    bool GetSoil();
    bool GetSoilExtract();

protected:
    bool Water;
    bool Soil;
    bool SoilExtract;
};

#endif // DECORATIVEFLOWER_H
