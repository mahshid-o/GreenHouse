#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QString>
#include <iostream>
#include <fstream>
#include <vase.hpp>

class WareHouse
{
    friend std::ostream &operator<<(std::ostream &output, const WareHouse w);
    friend std::ostream &operator<<(std::ostream &output, Vase v);

public:
    WareHouse();
    QString UserName = "نام کاربری";
    int OsMagnolia = 0;
    int OsLilium = 0;
    int OsOrkide = 0;
    int Water = 0;
    int Soil = 0;
    int Money = 1000000;
    int Poison = 0;
    int LalehCount = 0;
    int KokabCount = 0;
    int LiliumCount = 0;
    int MagnloiaCount = 0;
    int MaryamCount = 0;
    int NargesCount = 0;
    int OrkidehCount = 0;
    int SonbolCount = 0;
    int NormalFlowerCount = 0;
    int RareFlowerCount = 0;
    int DecorativeFlowerCount = 0;
    int SeedNormalFlowerCount = 0;
    int SeedRareFlowerCount = 0;
    int SeedDecorativeFlowerCount = 0;
    int DeletedFlowers = 0;
    int PlantedFlowers = 0;
};

#endif // WAREHOUSE_H
