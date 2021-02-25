#ifndef GOL_HPP
#define GOL_HPP
#include <QString>

class Flower
{
public:
    Flower();
    virtual void SetName(QString) = 0;
    void SetSeedPurchasPrice(int);
    void GetSeedSalesPrice(int);
    void SetReturnPrice(int);
    void SetFlowerPurchasePrice(int);
    void SetNum(int);

    QString GetName();
    int GetSeedPurchasPrice();
    int GetSeedSalesPrice();
    int GetReturnPrice();
    int GetFlowerPurchasPrice();
    int GetNum();

protected:
    QString Name;
    int Number;
    int SeedPurchasPrice;
    int SeedSalesPrice;
    int ReturnPrice;
    int FlowerPurchasPrice;
};

#endif // GOL_HPP
