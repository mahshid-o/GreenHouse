#ifndef VASE_H
#define VASE_H


class Vase
{
public:
    Vase();

    bool IsEmpty = true;
    bool IsOpen = false;
    int FlowerNum;
    int Kind;
    bool IsGrown = false;
    bool IsDamaged = false;
    bool IsWaterd  = false;
    bool IsPoisoned = false;
    bool HasSoil = false;
    bool OsMagnolia = false;
    bool OsLilium = false;
    bool OsOrkideh = false;
};

#endif // VASE_H
