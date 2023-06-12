#include "MagicalContainer.hpp"
using namespace std;

// check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// MagicalContainer
MagicalContainer::~MagicalContainer() {}

void MagicalContainer::addElement(int element)
{
    for (auto elem : container)
    {
        if (elem == element)
            return;
    }
    auto it = lower_bound(container.begin(), container.end(), element);
    container.insert(it, element);
}

void MagicalContainer::removeElement(int element)
{
    bool exist = false;
    for (auto it : container)
    {
        if (it == element)
            exist = true;
    }
    if (!exist)
        throw runtime_error("Wanted element is not in the container");
    auto elem = lower_bound(container.begin(), container.end(), element);
    container.erase(elem);
}

int MagicalContainer::size()
{
    return container.size();
}

// AscendingIterator
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : ascContainer(&container), index(0) {}

MagicalContainer::AscendingIterator::~AscendingIterator() {}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
{
    if (this != &other)
    {
        ascContainer = other.ascContainer;
        index = other.index;
    }
    return *this;
}

bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
{
    return !(*this == other) && !(*this < other);
}

bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
{
    return index < other.index;
}
bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
{
    if ((this->ascContainer == other.ascContainer) && (this->index == other.index))
        return true;
    return false;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
{
    if (this->index == this->end().index)
        throw runtime_error("Iterator is at the end position");
    ++index;
    return *this;
}

bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
{
    return !(*this == other);
}

int MagicalContainer::AscendingIterator::operator*()
{
    return ascContainer->container[index];
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{
    return AscendingIterator(*ascContainer);
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{
    AscendingIterator it(*ascContainer);
    it.index = ascContainer->container.size();
    return it;
}

// SideCrossIterator
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : sideContainer(&container), index(0) {}

MagicalContainer::SideCrossIterator::~SideCrossIterator() {}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
{
    if (this != &other)
    {
        sideContainer = other.sideContainer;
        index = other.index;
    }
    return *this;
}

bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
{
    return !(*this == other) && !(*this < other);
}

bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
{
    return index < other.index;
}

bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
{
    if ((this->sideContainer == other.sideContainer) && (this->index == other.index))
        return true;
    return false;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
{
    if (this->index == this->end().index)
        throw runtime_error("Iterator is at the end position");
    ++index;
    return *this;
}

bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
{
    return !(*this == other);
}

int MagicalContainer::SideCrossIterator::operator*()
{
    return sideContainer->container[index];
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return SideCrossIterator(*sideContainer);
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    SideCrossIterator it(*sideContainer);
    it.index = sideContainer->container.size();
    return it;
}

// PrimeIterator

MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : primeContainer(&container), index(0) {}

MagicalContainer::PrimeIterator::~PrimeIterator() {}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
{
    if (this != &other)
    {
        primeContainer = other.primeContainer;
        index = other.index;
    }
    return *this;
}

bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
{
    return !(*this == other) && !(*this < other);
}

bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
{
    return index < other.index;
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
{
    if ((this->primeContainer == other.primeContainer) && (this->index == other.index))
        return true;
    return false;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
{
    if (this->index == this->end().index)
        throw runtime_error("Iterator is at the end position");
    ++index;
    return *this;
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
{
    return !(*this == other);
}

int MagicalContainer::PrimeIterator::operator*()
{
    return primeContainer->container[index];
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{
    return PrimeIterator(*primeContainer);
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    PrimeIterator it(*primeContainer);
    it.index = primeContainer->container.size();
    return it;
}
