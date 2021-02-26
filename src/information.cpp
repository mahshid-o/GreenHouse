#include "../include/information.h"
#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

Information::Information()
{

}
void Information::SetNumbers(vector<Flower *> &Flower)
{
    for(size_t i = 0; i < Flower.size(); i++)
    {
        NormalFlower * ptrl = nullptr;
        ptrl = dynamic_cast<NormalFlower*>(Flower[i]);
        if(ptrl != nullptr)
        {
            NormalFlowerNumber++;
        }
    }
    for(size_t i = 0; i < Flower.size(); i++)
    {
        RareFlower * ptr = nullptr;
        ptr = dynamic_cast<RareFlower*>(Flower[i]);
        if(ptr != nullptr)
        {
            RareFlowerNumber++;
        }
    }
    for(size_t i = 0; i < Flower.size(); i++)
    {
        DecorativeFlower * ptr = nullptr;
        ptr = dynamic_cast<DecorativeFlower*>(Flower[i]);
        if(ptr != nullptr)
        {
            DecorativeFlowerNumber++;
        }
    }
}
int Information::GetNormalFlowerNumber()
{
    return NormalFlowerNumber;
}
int Information::GetRareFlowerNumber()
{
    return RareFlowerNumber;
}
int Information::GetDecorativeFlowerNumber()
{
    return DecorativeFlowerNumber;
}
int Information::GenRan()
{
    int x;
    default_random_engine eng(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int>myran(0,2);
    x=myran(eng);
    return x;
}

