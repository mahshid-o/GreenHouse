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
void Information::SetDefault(int i)
{
    VaseL[i].IsEmpty = true;
    VaseL[i].IsOpen = false;
    VaseL[i].FlowerNum = 0;
    VaseL[i].Kind = 0;
    VaseL[i].IsGrown = false;
    VaseL[i].IsDamaged = false;
    VaseL[i].IsWaterd  = false;
    VaseL[i].IsPoisoned = false;
    VaseL[i].HasSoil = false;
    VaseL[i].Osare = false;
}
void Information::SetFlowerNumbers(int item, int kind)
{
    switch (kind) {
    case 1:
        if(item == 1)
        {
            WareHouse.KokabCount++;
        }
        else if(item == 2)
        {
            WareHouse.NargesCount++;
        }
        break;
    case 2:
        if(item == 1)
        {
            WareHouse.LalehCount++;
        }
        else if(item == 2)
        {
            WareHouse.MaryamCount++;
        }
        else
        {
            WareHouse.SonbolCount++;
        }
        break;
    case 3:
        if(item == 1)
        {
            WareHouse.MagnloiaCount++;
        }
        else if(item == 2)
        {
            WareHouse.LiliumCount++;
        }
        else
        {
            WareHouse.OrkidehCount++;
        }
    }
}
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

