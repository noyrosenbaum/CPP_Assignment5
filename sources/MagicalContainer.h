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
    void addElement(int element);
    void removeElement(int element);
    int size() const;
    MagicalContainer();
    ~MagicalContainer();
};
class AscendingIterator
{
protected:
    MagicalContainer &container;

public:
    AscendingIterator(MagicalContainer &container);

    AscendingIterator(const AscendingIterator &other);

    virtual ~AscendingIterator();

    AscendingIterator &operator=(const AscendingIterator &other);

    virtual bool operator>(const AscendingIterator &other) const;

    virtual bool operator<(const AscendingIterator &other) const;

    virtual bool operator==(const AscendingIterator &other) const;

    virtual AscendingIterator &operator++();

    bool operator!=(const AscendingIterator &other) const;

    int operator*();

    virtual AscendingIterator &begin();

    virtual AscendingIterator &end();
};

class SideCrossIterator : public AscendingIterator
{

public:
    SideCrossIterator(MagicalContainer &container);
};

class PrimeIterator : public AscendingIterator
{

public:
    PrimeIterator(MagicalContainer &container);
};
