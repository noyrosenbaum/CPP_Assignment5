#include "MagicalContainer.hpp"

// MagicalContainer
MagicalContainer::MagicalContainer() {}

MagicalContainer::~MagicalContainer() {}

void MagicalContainer::addElement(int element) {}

void MagicalContainer::removeElement(int element) {}

int MagicalContainer::size() {
    return container.size();
}

// AscendingIterator
MagicalContainer::AscendingIterator::AscendingIterator() {}

MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &other) {}

MagicalContainer::AscendingIterator::~AscendingIterator() {}

bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const {
    return false;
}

bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const {
    return false;
}

bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const {
    return false;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++() {
    return *this;
}

bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const {
    return false;
}

int MagicalContainer::AscendingIterator::operator*() const {
    return 0;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() {
    return AscendingIterator();
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() {
    return AscendingIterator();
}

// SideCrossIterator
MagicalContainer::SideCrossIterator::SideCrossIterator() {}

MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &other) {}

MagicalContainer::SideCrossIterator::~SideCrossIterator() {}

bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const {
    return false;
}

bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const {
    return false;
}

bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const {
    return false;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++() {
    return *this;
}

bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const {
    return false;
}

int MagicalContainer::SideCrossIterator::operator*() const {
    return 0;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() {
    return SideCrossIterator();
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() {
    return SideCrossIterator();
}

// PrimeIterator
MagicalContainer::PrimeIterator::PrimeIterator() {}

MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &other) {}

MagicalContainer::PrimeIterator::~PrimeIterator() {}

bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const {
    return false;
}

bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const {
    return false;
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const {
    return false;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++() {
    return *this;
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const {
    return false;
}

int MagicalContainer::PrimeIterator::operator*() const {
    return 0;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() {
    return PrimeIterator();
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() {
    return PrimeIterator();
}
