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
    void SetFlowerNumbers(int, int);
    void SetNumbers(std::vector<Flower *> &);
    void SetDefault(int);
    void SetIsGrown(); // sets IsGrown variable for vases
    int GenRan1();
    int GenRan2();
    int GenRan3();
    bool IsLoadPressed = false;

    std::vector<Flower *> Flowers;
};

#endif // INFORMATION_H
