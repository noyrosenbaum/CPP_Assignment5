#pragma once
#include <vector>
#include <algorithm>
#include <stdexcept>
using namespace std;
namespace ariel
{
}
class MagicalContainer
{
private:
    vector<int> container;

public:
    MagicalContainer();
    ~MagicalContainer();
    void addElement(int element);
    void removeElement(int element);
    int size();

    class AscendingIterator
    {
    private:
        MagicalContainer *container;

    public:
        AscendingIterator();

        AscendingIterator(MagicalContainer &container);

        AscendingIterator(const AscendingIterator &other);

        ~AscendingIterator();

        AscendingIterator &operator=(const AscendingIterator &other);

        bool operator>(const AscendingIterator &other);

        bool operator<(const AscendingIterator &other);

        bool operator==(const AscendingIterator &other) const;

        AscendingIterator &operator++();

        bool operator!=(const AscendingIterator &other) const;

        int operator*() const;

        AscendingIterator begin();

        AscendingIterator end();
    };

    class SideCrossIterator
    {
    private:
        MagicalContainer *container;

    public:
        SideCrossIterator();
        SideCrossIterator(MagicalContainer &container);
        SideCrossIterator(const SideCrossIterator &other);
        ~SideCrossIterator();
        SideCrossIterator &operator=(const SideCrossIterator &other);

        bool operator>(const SideCrossIterator &other);

        bool operator<(const SideCrossIterator &other);

        bool operator==(const SideCrossIterator &other) const;

        SideCrossIterator &operator++();

        bool operator!=(const SideCrossIterator &other) const;

        int operator*() const;

        SideCrossIterator begin();

        SideCrossIterator end();
    };

    class PrimeIterator
    {
    private:
        MagicalContainer *container;
        size_t index;

    public:
        PrimeIterator();
        PrimeIterator(MagicalContainer &container);
        PrimeIterator(const PrimeIterator &other);
        ~PrimeIterator();
        PrimeIterator &operator=(const PrimeIterator &other);

        bool operator>(const PrimeIterator &other);

        bool operator<(const PrimeIterator &other);

        bool operator==(const PrimeIterator &other) const;

        PrimeIterator &operator++();

        bool operator!=(const PrimeIterator &other) const;

        int operator*() const;

        PrimeIterator begin();

        PrimeIterator end();
    };
};
