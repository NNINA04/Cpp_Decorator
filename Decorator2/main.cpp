#include "Common.h"

#include "IBeverage.h"
#include "BeveragePart.h"

#include "DarkRoast.h"
#include "Espresso.h"

#include "Chocolate.h"
#include "Whip.h"

void PrintBeverage(const IBeverage* beverage)
{
    cout << beverage->GetDescription() << 
        "\nPrice = " << beverage->GetPrice() << endl;
}

/*
    This code is from book written by me
*/
int main()
{
    IBeverage* beverage = new DarkRoast;
    beverage = new Chocolate(beverage);
    beverage = new Whip(beverage);
    PrintBeverage(beverage);

    beverage = new Espresso;
    beverage = new Whip(beverage);
    PrintBeverage(beverage);
}