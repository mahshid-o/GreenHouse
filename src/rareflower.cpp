#include "../include/rareflower.h"

RareFlower::RareFlower()
{
}
void RareFlower::SetWater(bool wtr)
{
    Water = wtr;
}
void RareFlower::SetSoil(bool sil)
{
    Soil = sil;
}
void RareFlower::SetPoison(bool psn)
{
    Poison = psn;
}
bool RareFlower::GetWater()
{
    return Water;
}
bool RareFlower::GetSoil()
{
    return Soil;
}
bool RareFlower::GetPoison()
{
    return Poison;
}
