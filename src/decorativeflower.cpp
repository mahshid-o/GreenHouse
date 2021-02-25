#include "../include/decorativeflower.h"

DecorativeFlower::DecorativeFlower()
{
    Number = 3;
}
void DecorativeFlower::SetWater(bool wtr)
{
    Water = wtr;
}
void DecorativeFlower::SetSoil(bool sil)
{
    Soil = sil;
}
void DecorativeFlower::SetSoilExtract(bool s)
{
    SoilExtract = s;
}
bool DecorativeFlower::GetWater()
{
    return Water;
}
bool DecorativeFlower::GetSoil()
{
    return Soil;
}
bool DecorativeFlower::GetSoilExtract()
{
    return SoilExtract;
}
