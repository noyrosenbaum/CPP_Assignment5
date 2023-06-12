#pragma once
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <math.h>
using namespace std;
namespace ariel
{
}
class MagicalContainer
{
private:
    vector<int> container;
    vector<int *> primeContainer;

public:
    MagicalContainer() = default;
    ~MagicalContainer();
    void addElement(int element);
    void removeElement(int element);
    int size();

    class AscendingIterator
    {
    private:
        MagicalContainer *ascContainer;
        size_t index;

    public:
        AscendingIterator() = default;
        AscendingIterator(MagicalContainer &container);
        AscendingIterator(const AscendingIterator &other);
        ~AscendingIterator();
        AscendingIterator &operator=(const AscendingIterator &other);
        bool operator>(const AscendingIterator &other) const;
        bool operator<(const AscendingIterator &other) const;
        bool operator==(const AscendingIterator &other) const;
        bool operator!=(const AscendingIterator &other) const;
        AscendingIterator &operator++();
        int operator*();
        AscendingIterator begin();
        AscendingIterator end();
    };

    class SideCrossIterator
    {
    private:
        MagicalContainer *sideContainer;
        size_t index;

    public:
        SideCrossIterator() = default;
        SideCrossIterator(MagicalContainer &container);
        SideCrossIterator(const SideCrossIterator &other) = default;
        ~SideCrossIterator();
        SideCrossIterator &operator=(const SideCrossIterator &other);
        bool operator>(const SideCrossIterator &other) const;
        bool operator<(const SideCrossIterator &other) const;
        bool operator==(const SideCrossIterator &other) const;
        bool operator!=(const SideCrossIterator &other) const;
        SideCrossIterator &operator++();
        int operator*();
        SideCrossIterator begin();
        SideCrossIterator end();
    };

    class PrimeIterator
    {
    private:
        MagicalContainer *primeContainer;
        size_t index;

    public:
        PrimeIterator() = default;
        PrimeIterator(MagicalContainer &container);
        PrimeIterator(const PrimeIterator &other) = default;
        ~PrimeIterator();
        PrimeIterator &operator=(const PrimeIterator &other);
        bool operator>(const PrimeIterator &other) const;
        bool operator<(const PrimeIterator &other) const;
        bool operator==(const PrimeIterator &other) const;
        bool operator!=(const PrimeIterator &other) const;
        PrimeIterator &operator++();
        int operator*();
        PrimeIterator begin();
        PrimeIterator end();
    };
};