#pragma once

#include "BeveragePart.h"

class Whip : public BeveragePart
{
public:
    Whip(const IBeverage* other) : BeveragePart(other) {}

    virtual string GetDescription() const
    {
        return Part->GetDescription() + " + Whip";
    }

    virtual float GetPrice() const
    {
        return Part->GetPrice() + 0.3f;
    }
};