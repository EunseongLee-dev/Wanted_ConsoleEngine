#pragma once

#include "Level\Level.h"
#include "ICanPlayerMove.h"

bool ICanPlayerMove::CanMove(const Wanted::Vector2& playerPosition, const Wanted::Vector2& nextPosition)
{
    return false;
}
