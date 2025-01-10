#pragma once
#include "Item.h"
#include <memory>
using namespace std;
class ItemFactory {
private:

public:
	static ItemFactory& getInstance() {
		static ItemFactory itemFactory;
		return itemFactory;
	}

	unique_ptr<Item>	createItem() const {
		return make_unique<Item>();
	}
};