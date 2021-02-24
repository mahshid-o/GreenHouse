#ifndef GOL_HPP
#define GOL_HPP
#include <QString>

class Flower
{
public:
    Flower();
    void SetName(QString);
    void SetCount(int);
    void SetSeedPurchasPrice(int);
    void GetSeedSalesPrice(int);
    void SetReturnPrice(int);
    void SetFlowerPurchasePrice(int);
    void SetNum(int);

    QString GetName();
    int GetCount();
    int GetSeedPurchasPrice();
    int GetSeedSalesPrice();
    int GetReturnPrice();
    int GetFlowerPurchasPrice();
    int GetNum();

protected:
    QString Name;
    int Count;
    int number;
    int SeedPurchasPrice;
    int SeedSalesPrice;
    int ReturnPrice;
    int FlowerPurchasPrice;
};

#endif // GOL_HPP
