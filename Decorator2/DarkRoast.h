#pragma once

#include "IBeverage.h"

class DarkRoast : public IBeverage
{
public:
    virtual string GetDescription() const
    {
        return "DarkRoast";
    }
    
    virtual float GetPrice() const
    {
        return 1.2f;
    }
};