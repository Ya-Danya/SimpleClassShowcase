#include "GoodsCategory.h"


GoodsCategory::GoodsCategory(std::string name) {
    this->name = name;
}

void GoodsCategory::addNewGood (Good good) {
    goods.push_back(good);
}

void GoodsCategory::setName(std::string name) {
    this->name = name;
}

std::string GoodsCategory::getName() {
    return this->name;
}

std::vector<Good>& GoodsCategory::getGoods() {
    return goods;
}