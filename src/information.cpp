#include "information.hpp"
#include <iostream>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

Information::Information()
{

}
void Information::SetIsGrown() // sets IsGrown variable for vases
{
    for(size_t i = 0; i < 5; i++)
    {
        if(VaseL[i].IsWaterd & VaseL[i].IsPoisoned & VaseL[i].HasSoil & VaseL[i].IsDamaged == false)
            VaseL[i].IsGrown = true;
    }
}
void Information::SetNumbers(vector<Flower *> &Flower)
{
    for(size_t i = 0; i < Flower.size(); i++)
    {
        NormalFlower * PtrN = nullptr;
        PtrN = dynamic_cast<NormalFlower*>(Flower[i]);
        if(PtrN != nullptr)
        {
            WareHouse.NormalFlowerCount++;

            Kokab * PtrK = nullptr;
            PtrK = dynamic_cast<Kokab*>(Flower[i]);
            if(PtrK != nullptr)
            {
                WareHouse.KokabCount++;
            }
            else
            {
                WareHouse.NargesCount++;
            }
        }
    }
    for(size_t i = 0; i < Flower.size(); i++)
    {
        RareFlower * ptr = nullptr;
        ptr = dynamic_cast<RareFlower*>(Flower[i]);
        if(ptr != nullptr)
        {
            WareHouse.RareFlowerCount++;
        }
    }
    for(size_t i = 0; i < Flower.size(); i++)
    {
        DecorativeFlower * ptr = nullptr;
        ptr = dynamic_cast<DecorativeFlower*>(Flower[i]);
        if(ptr != nullptr)
        {
            WareHouse.DecorativeFlowerCount++;
        }
    }
}
//int Information::GetNormalFlowerNumber()
//{
//    return NormalFlowerNumber;
//}
//int Information::GetRareFlowerNumber()
//{
//    return RareFlowerNumber;
//}
//int Information::GetDecorativeFlowerNumber()
//{
//    return DecorativeFlowerNumber;
//}
int Information::GenRan1()
{
    srand(static_cast<unsigned int>(time(0)));
    return (rand() % 2);
}
int Information::GenRan2()
{
    srand(static_cast<unsigned int>(time(0)));
    return (rand() % 3);
}
int Information::GenRan3()
{
    srand(static_cast<unsigned int>(time(0)));
    return (rand() % 5);
}

