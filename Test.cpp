#include "doctest.h"
#include "sources/MagicalContainer.hpp"

using namespace ariel;

TEST_CASE("MagicalContainer and Iterators tests")
{
    SUBCASE("Testing addElement and size")
    {
        MagicalContainer container;
        CHECK(container.size() == 0);
        container.addElement(1);
        CHECK(container.size() == 1);
        container.addElement(2);
        CHECK(container.size() == 2);
    }

    SUBCASE("Testing AscendingIterator")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        MagicalContainer::AscendingIterator ascIt(container);
        MagicalContainer::AscendingIterator it = ascIt.begin();
        CHECK(*it == 1);
        ++it;
        CHECK(*it == 2);
    }

    SUBCASE("Testing SideCrossIterator")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        MagicalContainer::SideCrossIterator sideIt(container);
        MagicalContainer::SideCrossIterator it = sideIt.begin();
        CHECK(*it == 1);
        ++it;
        CHECK(*it == 2);
    }

    SUBCASE("Testing PrimeIterator")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        MagicalContainer::PrimeIterator primeIt(container);
        MagicalContainer::PrimeIterator it = primeIt.begin();
        CHECK(*it == 1);
        ++it;
        CHECK(*it == 2);
    }
}
TEST_CASE("MagicalContainer and Iterators extended tests")
{
    SUBCASE("Testing multiple addElement and size")
    {
        MagicalContainer container;
        for (int i = 0; i < 100; ++i)
        {
            container.addElement(i);
        }
        CHECK(container.size() == 100);
    }

    SUBCASE("Testing AscendingIterator with multiple elements")
    {
        MagicalContainer container;
        MagicalContainer::AscendingIterator ascIt(container);
        MagicalContainer::PrimeIterator primeIt(container);
        MagicalContainer::SideCrossIterator sideIt(container);
        for (int i = 0; i < 100; ++i)
        {
            container.addElement(i);
        }
        MagicalContainer::AscendingIterator it = ascIt.begin();
        for (int i = 0; i < 100; ++i)
        {
            CHECK(*it == i);
            ++it;
        }
    }

    SUBCASE("Testing SideCrossIterator with multiple elements")
    {
        MagicalContainer container;
        MagicalContainer::AscendingIterator ascIt(container);
        MagicalContainer::PrimeIterator primeIt(container);
        MagicalContainer::SideCrossIterator sideIt(container);
        for (int i = 0; i < 100; ++i)
        {
            container.addElement(i);
        }
        MagicalContainer::SideCrossIterator it = sideIt.begin();
        for (int i = 0; i < 100; ++i)
        {
            CHECK(*it == i);
            ++it;
        }
    }

    SUBCASE("Testing PrimeIterator with multiple elements")
    {
        MagicalContainer container;
        MagicalContainer::AscendingIterator ascIt(container);
        MagicalContainer::PrimeIterator primeIt(container);
        MagicalContainer::SideCrossIterator sideIt(container);
        for (int i = 0; i < 100; ++i)
        {
            container.addElement(i);
        }
        MagicalContainer::PrimeIterator it = primeIt.begin();
        for (int i = 0; i < 100; ++i)
        {
            CHECK(*it == i);
            ++it;
        }
    }

    SUBCASE("Testing iterator comparison")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        MagicalContainer::AscendingIterator ascIt(container);
        MagicalContainer::PrimeIterator primeIt(container);
        MagicalContainer::SideCrossIterator sideIt(container);
        MagicalContainer::AscendingIterator it1 = ascIt.begin();
        MagicalContainer::AscendingIterator it2 = ascIt.begin();
        CHECK((it1 == it2) == true);
        ++it1;
        CHECK((it1 == it2) == false);
        ++it2;
        CHECK((it1 == it2) == true);
    }
}
TEST_CASE("MagicalContainer and Iterators extended tests")
{

    SUBCASE("Testing empty container")
    {
        MagicalContainer container;
        MagicalContainer::AscendingIterator ascIt(container);
        MagicalContainer::PrimeIterator primeIt(container);
        MagicalContainer::SideCrossIterator sideIt(container);
        CHECK(ascIt.begin() == ascIt.end());
        CHECK(primeIt.begin() == primeIt.end());
        CHECK(sideIt.begin() == sideIt.end());
    }

    SUBCASE("Testing non-modifiable container through iterator")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        MagicalContainer::AscendingIterator ascIt(container);
        MagicalContainer::AscendingIterator it = ascIt.begin();
        CHECK(*it == 1); 
    }
}