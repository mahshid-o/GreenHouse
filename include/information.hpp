#ifndef INFORMATION_H
#define INFORMATION_H

#include "warehouse.hpp"
#include "narges.hpp"
#include "kokab.hpp"
#include "laleh.hpp"
#include "lilium.hpp"
#include "magnolia.hpp"
#include "maryam.hpp"
#include "orkideh.hpp"
#include "sonbol.hpp"
#include "vase.hpp"
#include <vector>

class Information
{
public:
    Information();
    WareHouse WareHouse;
    Vase VaseL[5];
    void SetNumbers(std::vector<Flower *>&);
    int GenRan1();
    int GenRan2();

    std::vector<Flower*>Flowers;
};

#endif // INFORMATION_H
