#include "flower.hpp"

Flower::Flower()
{
}
void Flower::SetName(QString nm)
{
    Name = nm;
}
//void Flower::Flower::SetCount(int cnt)
//{
//    Count = cnt;
//}
void Flower::SetNum(int n)
{
    number=n;
}
void Flower::SetSeedPurchasPrice(int prc)
{
    SeedPurchasPrice = prc;
}
void Flower::GetSeedSalesPrice(int prc)
{
    SeedSalesPrice = prc;
}
void Flower::SetReturnPrice(int prc)
{
    ReturnPrice = prc;
}
void Flower::SetFlowerPurchasePrice(int prc)
{
    FlowerPurchasPrice = prc;
}

QString Flower::GetName()
{
    return Name;
}
int Flower::GetNum()
{
    return number;
}
int Flower::GetCount()
{
    return Count;
}
int Flower::GetSeedPurchasPrice()
{
    return SeedPurchasPrice;
}
int Flower::GetSeedSalesPrice()
{
    return SeedSalesPrice;
}
int Flower::GetReturnPrice()
{
    return ReturnPrice;
}
int Flower::GetFlowerPurchasPrice()
{
    return FlowerPurchasPrice;
}
