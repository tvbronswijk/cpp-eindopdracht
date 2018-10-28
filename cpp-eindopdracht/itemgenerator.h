#pragma once
#include <iostream>
#include <random>
#include <ctime>
#include "item.h"
#include "consumable.h"
#include "weapon.h"
#include "ptrarray.h"

class ItemGenerator {

private:
	std::default_random_engine generator;
	int Rand(size_t min, size_t max);
	PtrArray<const char, 10> items;
public:
	ItemGenerator();
	~ItemGenerator();
	Item* create_item();
};