#pragma once

#include "Common.h"
#include "IBeverage.h"

class BeveragePart : public IBeverage
{
protected:
    const IBeverage* Part;

    BeveragePart(const IBeverage* other) : Part(other) {}

    virtual string GetDescription() const = 0;

    virtual float GetPrice() const = 0;
};