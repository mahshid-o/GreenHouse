#ifndef GOL_HPP
#define GOL_HPP
//#define <QString>
class Flower
{
    Flower();
    void SetCount(int);
    void SetPriceSaleFlower(int);
    void SetPriceSaleSeed(int);
    void SetPriceBuy(int);
    void SetWater(int);
    void SetSoil(int);

    int GetCount();
    int GetPriceSaleFlower();
    int GetPriceSaleSeed();
    int GettPriceBuy();
    int GetWater();
    int GetSoil();

private:
//    QString Name;
    int Count;
    int Number;
    int PriceSaleFlower;
    int PriceSaleSeed;
    int PriceBuy;
    int Water;
    int Soil;
};

#endif // GOL_HPP
