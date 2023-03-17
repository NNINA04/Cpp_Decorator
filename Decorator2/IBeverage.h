#pragma once

#include "Common.h"

class IBeverage
{
public:
    virtual string GetDescription() const = 0;
    virtual float GetPrice() const = 0;
};