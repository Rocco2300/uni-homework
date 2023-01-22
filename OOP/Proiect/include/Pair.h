#pragma once

template <typename First, typename Second>
class Pair
{
public:
    First first{};
    Second second{};

public:
    Pair() = default;
    Pair(First first, Second second) : first{first}, second{second} { }
};