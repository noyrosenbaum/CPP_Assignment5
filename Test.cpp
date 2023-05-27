#include "doctest.h"
#include "sources/MagicalContainer.h"

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
        AscendingIterator ascIt(container);
        PrimeIterator primeIt(container);
        SideCrossIterator sideIt(container);
        AscendingIterator it = ascIt.begin();
        CHECK(*it == 1);
        ++it;
        CHECK(*it == 2);
    }

    // SUBCASE("Testing SideCrossIterator")
    // {
    //     MagicalContainer container;
    //     container.addElement(1);
    //     container.addElement(2);
    //     SideCrossIterator sideIt(container);
    //     SideCrossIterator it = sideIt.begin();
    //     CHECK(*it == 1);
    //     ++it;
    //     CHECK(*it == 2);
    // }

    // SUBCASE("Testing PrimeIterator")
    // {
    //     MagicalContainer container;
    //     container.addElement(1);
    //     container.addElement(2);
    //     PrimeIterator primeIt(container);
    //     PrimeIterator it = primeIt.begin();
    //     CHECK(*it == 1);
    //     ++it;
    //     CHECK(*it == 2);
    // }
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
        AscendingIterator ascIt(container);
        PrimeIterator primeIt(container);
        SideCrossIterator sideIt(container);
        for (int i = 0; i < 100; ++i)
        {
            container.addElement(i);
        }
        AscendingIterator it = ascIt.begin();
        for (int i = 0; i < 100; ++i)
        {
            CHECK(*it == i);
            ++it;
        }
    }

    // SUBCASE("Testing SideCrossIterator with multiple elements")
    // {
    //     MagicalContainer container;
    //     AscendingIterator ascIt(container);
    //     PrimeIterator primeIt(container);
    //     SideCrossIterator sideIt(container);
    //     for (int i = 0; i < 100; ++i)
    //     {
    //         container.addElement(i);
    //     }
    //     SideCrossIterator it = sideIt.begin();
    //     for (int i = 0; i < 100; ++i)
    //     {
    //         CHECK(*it == i);
    //         ++it;
    //     }
    // }

    // SUBCASE("Testing PrimeIterator with multiple elements")
    // {
    //     MagicalContainer container;
    //     AscendingIterator ascIt(container);
    //     PrimeIterator primeIt(container);
    //     SideCrossIterator sideIt(container);
    //     for (int i = 0; i < 100; ++i)
    //     {
    //         container.addElement(i);
    //     }
    //     PrimeIterator it = primeIt.begin();
    //     for (int i = 0; i < 100; ++i)
    //     {
    //         CHECK(*it == i);
    //         ++it;
    //     }
    // }

    SUBCASE("Testing iterator comparison")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        AscendingIterator ascIt(container);
        PrimeIterator primeIt(container);
        SideCrossIterator sideIt(container);
        AscendingIterator it1 = ascIt.begin();
        AscendingIterator it2 = ascIt.begin();
        CHECK((it1 == it2) == true);
        ++it1;
        CHECK((it1 == it2) == false);
        ++it2;
        CHECK((it1 == it2) == true);
    }
}
TEST_CASE("MagicalContainer and Iterators extended tests")
{
    // SUBCASE("Testing iterator comparison with different iterators")
    // {
    //     MagicalContainer container;
    //     container.addElement(1);
    //     container.addElement(2);
    //     AscendingIterator ascIt(container);
    //     PrimeIterator primeIt(container);
    //     SideCrossIterator sideIt(container);
    //     AscendingIterator it1 = ascIt.begin();
    //     PrimeIterator it2 = primeIt.begin();
    //     SideCrossIterator it3 = sideIt.begin();
    //     CHECK((it1 == it2) == true);
    //     CHECK((it1 == it3) == true);
    //     ++it1;
    //     ++it2;
    //     ++it3;
    //     CHECK((it1 == it2) == true);
    //     CHECK((it1 == it3) == true);
    // }

    SUBCASE("Testing empty container")
    {
        MagicalContainer container;
        AscendingIterator ascIt(container);
        PrimeIterator primeIt(container);
        SideCrossIterator sideIt(container);
        CHECK(ascIt.begin() == ascIt.end());
        CHECK(primeIt.begin() == primeIt.end());
        CHECK(sideIt.begin() == sideIt.end());
    }

    SUBCASE("Testing non-modifiable container through iterator")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        AscendingIterator ascIt(container);
        AscendingIterator it = ascIt.begin();
        // Uncomment the next line if your operator*() returns a non-const reference
        // *it = 10; // This should fail if your iterator doesn't support write access
        CHECK(*it == 1); // Make sure it's still 1
    }
}