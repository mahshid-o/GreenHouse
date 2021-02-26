#ifndef INFORMATION_H
#define INFORMATION_H

#include "warehouse.h"
#include "narges.h"
#include "kokab.h"
#include "laleh.h"
#include "lilium.h"
#include "magnolia.h"
#include "maryam.h"
#include "orkideh.h"
#include "sonbol.h"
#include <vector>

class Information
{
public:
    Information();
    WareHouse WareHouse;
    int GetNormalFlowerNumber();
    int GetRareFlowerNumber();
    int GetDecorativeFlowerNumber();
    void SetNumbers(std::vector<Flower *>&);
    int GenRan();

    std::vector<Flower*>Flowers;

private:
    int NormalFlowerNumber = 0;
    int RareFlowerNumber = 0;
    int DecorativeFlowerNumber = 0;
};

#endif // INFORMATION_H
