#include "GoodsCategory.h"


class Print {
public:
    static void printBasicMenu();

    static void printInnerMenu();

    static void printGood(Good good);

    static void printCategory(GoodsCategory category);

    static void printStorage(std::vector <GoodsCategory> storage);

    static void printStorageNames(std::vector <GoodsCategory> storage);

};