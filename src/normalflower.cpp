#include "normalflower.hpp"

NormalFlower::NormalFlower()
{
}
void NormalFlower::SetWater(bool wtr)
{
    Water = wtr;
}
void NormalFlower::SetSoil(bool sil)
{
    Soil = sil;
}

bool NormalFlower::GetWater()
{
    return Water;
}
bool NormalFlower::GetSoil()
{
    return Soil;
}
void NormalFlower::SetName(QString nm)
{
    Name = nm;
}
