#ifndef VASE_H
#define VASE_H

class Vase
{
public:
    Vase();

    bool IsEmpty = true;
    bool IsOpen = false;
    int FlowerNum = 0;
    int Kind = 0;
    bool IsGrown = false;
    bool IsDamaged = false;
    bool IsWaterd = false;
    bool IsPoisoned = false;
    bool HasSoil = false;
    bool Osare = false;
};

#endif // VASE_H
