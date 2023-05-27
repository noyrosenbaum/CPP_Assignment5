#include "MagicalContainer.h"

void MagicalContainer::addElement(int element)
{
    container.push_back(element);
}

void MagicalContainer::removeElement(int element)
{
}

MagicalContainer::MagicalContainer() {}

MagicalContainer::~MagicalContainer() {}

int MagicalContainer::size() const
{
    return container.size();
}

// AscendingIterator
AscendingIterator::AscendingIterator(MagicalContainer &container) : container(container)
{
}

AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container)
{
}

AscendingIterator::~AscendingIterator() = default;

AscendingIterator &AscendingIterator::operator=(const AscendingIterator &other)
{

    return *this;
}

bool AscendingIterator::AscendingIterator::operator>(const AscendingIterator &other) const
{

    return false;
}

bool AscendingIterator::AscendingIterator::operator<(const AscendingIterator &other) const
{

    return false;
}

bool AscendingIterator::AscendingIterator::operator==(const AscendingIterator &other) const
{

    return false;
}

AscendingIterator &AscendingIterator::operator++()
{

    return *this;
}

bool AscendingIterator::AscendingIterator::operator!=(const AscendingIterator &other) const
{

    return false;
}

int AscendingIterator::AscendingIterator::operator*()
{

    return 0;
}

AscendingIterator &AscendingIterator::begin()
{

    return *this;
}

AscendingIterator &AscendingIterator::end()
{

    return *this;
}

// SideCrossIterator
SideCrossIterator::SideCrossIterator(MagicalContainer &container) : AscendingIterator(container)
{
}

// SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : AscendingIterator(other.container)
// {
// }

// SideCrossIterator::~SideCrossIterator() = default;

// PrimeIterator
PrimeIterator::PrimeIterator(MagicalContainer &container) : AscendingIterator(container)
{
}

// PrimeIterator::PrimeIterator(const PrimeIterator &other) : container(container)
// {
// }

// PrimeIterator::~PrimeIterator() = default;
