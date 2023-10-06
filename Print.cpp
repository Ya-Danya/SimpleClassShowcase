#include "Print.h"
void Print::printBasicMenu() {
    cout << "Select menu point.\n"
            "1. Create new category.\n"
            "2. Work with category.\n"
            "3. Delete category.\n"
            "4. Print existing categories names.\n"
            "10. Finish program work.\n";
}

void Print::printInnerMenu() {
    cout << "Select menu point.\n"
            "1. Create new good.\n"
            "2. Edit the good.\n"
            "3. Write good's info.\n"
            "10. Go back to the category menu\n";
}

void Print::printGood(Good good) {
    cout << "Id: " << good.getId() << "|Cost: " << good.getCost() << "|Amount: " << good.getAmount() << "\n";
}

void Print::printCategory(GoodsCategory category) {
    for (Good item: category.getGoods()) {
        printGood(item);
    }
}

void Print::printStorage(std::vector<GoodsCategory> storage) {
    for (GoodsCategory item: storage) {
        item.printCategory();
    }
}

void Print::printStorageNames(std::vector<GoodsCategory> storage) {
    cout << "Here's all categories\n";
    for (GoodsCategory item: storage) {
        cout << item.getName() << "\n";
    }
}