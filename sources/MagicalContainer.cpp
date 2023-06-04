#include "MagicalContainer.hpp"

MagicalContainer::MagicalContainer() {}

MagicalContainer::~MagicalContainer() {}

void MagicalContainer::addElement(int element)
{
}

void MagicalContainer::removeElement(int element)
{
}

int MagicalContainer::size()
{
    return container.size();
}

// AscendingIterator
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : container(&container)
{
}

MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container)
{
}

MagicalContainer::AscendingIterator::~AscendingIterator() {}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
{
    return *this;
}

bool MagicalContainer::AscendingIterator::AscendingIterator::operator>(const AscendingIterator &other)
{

    return false;
}

bool MagicalContainer::AscendingIterator::AscendingIterator::operator<(const AscendingIterator &other)
{

    return false;
}

bool MagicalContainer::AscendingIterator::AscendingIterator::operator==(const AscendingIterator &other) const
{

    return false;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
{

    return *this;
}

bool MagicalContainer::AscendingIterator::AscendingIterator::operator!=(const AscendingIterator &other) const
{

    return !(*this == other);
}

int MagicalContainer::AscendingIterator::operator*() const
{

    return 0;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{

    return *this;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{

    return *this;
}

// SideCrossIterator
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : container(&container)
{
}

MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : container(other.container)
{
}

MagicalContainer::SideCrossIterator::~SideCrossIterator() {}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
{
    return *this;
}

bool MagicalContainer::SideCrossIterator::SideCrossIterator::operator>(const SideCrossIterator &other)
{

    return false;
}

bool MagicalContainer::SideCrossIterator::SideCrossIterator::operator<(const SideCrossIterator &other)
{

    return false;
}

bool MagicalContainer::SideCrossIterator::SideCrossIterator::operator==(const SideCrossIterator &other) const
{

    return false;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
{

    return *this;
}

bool MagicalContainer::SideCrossIterator::SideCrossIterator::operator!=(const SideCrossIterator &other) const
{

    return !(*this == other);
}

int MagicalContainer::SideCrossIterator::operator*() const
{

    return 0;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{

    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{

    return *this;
}

// PrimeIterator
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : container(&container)
{
}

MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : container(other.container)
{
}

MagicalContainer::PrimeIterator::~PrimeIterator() {}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
{
    return *this;
}

bool MagicalContainer::PrimeIterator::PrimeIterator::operator>(const PrimeIterator &other)
{

    return false;
}

bool MagicalContainer::PrimeIterator::PrimeIterator::operator<(const PrimeIterator &other)
{

    return false;
}

bool MagicalContainer::PrimeIterator::PrimeIterator::operator==(const PrimeIterator &other) const
{

    return false;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
{

    return *this;
}

bool MagicalContainer::PrimeIterator::PrimeIterator::operator!=(const PrimeIterator &other) const
{

    return !(*this == other);
}

int MagicalContainer::PrimeIterator::operator*() const
{

    return 0;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{

    return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{

    return *this;
}
