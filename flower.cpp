#include "gol.hpp"

Flower::Flower()
{

}
void Flower:: SetCount(int cnt)
{
    Count = cnt;
}
void Flower:: SetPriceSaleFlower(int price)
{
    PriceSaleFlower = price;
}
void Flower:: SetPriceSaleSeed(int price)
{
    PriceSaleSeed = price;
}
void Flower:: SetPriceBuy(int price)
{
    PriceBuy = price;
}
void Flower:: SetWater(int wtr)
{
    Water = wtr;
}
void Flower:: SetSoil(int sil)
{
    Soil = sil;
}
int Flower:: GetCount()
{
    return Count;
}
int Flower:: GetPriceSaleFlower()
{
    return PriceSaleFlower;
}
int Flower:: GetPriceSaleSeed()
{
    return PriceSaleSeed;
}
int Flower:: GettPriceBuy()
{
    return PriceBuy;
}
int Flower:: GetWater()
{
    return Water;
}
int Flower:: GetSoil()
{
    return Soil;
}
