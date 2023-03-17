#pragma once

#include "IBeverage.h"

class Espresso : public IBeverage
{
public:
    virtual string GetDescription() const
    {
        return "Espresso";
    }

    virtual float GetPrice() const
    {
        return 2.4f;
    }
};