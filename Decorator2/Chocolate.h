#pragma once

#include "IBeverage.h"
#include "BeveragePart.h"

class Chocolate : public BeveragePart
{
public:
    Chocolate(const IBeverage* other) : BeveragePart(other) {}

    virtual string GetDescription() const
    {
        return Part->GetDescription() + " + Chocolate";
    }

    virtual float GetPrice() const
    {
        return Part->GetPrice() + 0.8f;
    }
};