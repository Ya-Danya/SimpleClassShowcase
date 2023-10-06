#include "header.h"

void goodsMenu(GoodsCategory &goodsCategory) {
    string switcher;
    int id, amount, cost;
    while (true) {
        Print::printInnerMenu();
        cin >> switcher;
        if (switcher == "1") {
            cout << "Input id, cost and amount\n";
            cin >> id >> cost >> amount;
            goodsCategory.addNewGood(Good(id,cost,amount));
        } else if (switcher == "2") {
            cout << "Input id of the good you want to edit.\n";
            cin >> id;
            for (int i = 0; i < goodsCategory.getGoods().size(); ++i) {
                cout << "Input new cost and amount\n";
                if (goodsCategory.getGoods()[i].getId() == id) {
                    cin >> cost >> amount;
                    goodsCategory.getGoods()[i].setCost(cost);
                    goodsCategory.getGoods()[i].setCost(amount);
                }
            }
        } else if (switcher == "3") {
            Print::printCategory(goodsCategory);
        } else if (switcher == "10") {
            return;
        } else {
            std::cout << "Incorrect input.\n";
        }
    }
}



int main() {
//    setlocale(LC_ALL, "Russian_Russia.1251");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    Good good_number_one(1,1,1);
    void (Good::*ptr)() = &Good::print;

    //(good_number_one.*ptr)();
    //Good* good_ptr = &good_number_one;
    vector<GoodsCategory> storage;
    int id, cost, amount;
    while (true) {
        string switcher;
        Print::printBasicMenu();
        cin >> switcher;
        string str;
        if (switcher == "1") {
            cout << "Input new category name.\n";
            cin >> str;
            storage.emplace_back(str);
        } else if (switcher == "2"){
            cout << "Input name of the directory you want to work with.\n";
            cin >> str;
            for (int i = 0; i < storage.size(); ++i) {
                if (storage[i].getName() == str) {
                    goodsMenu(storage[i]);
                    break;
                }
            }
        } else if(switcher == "3") {
            cout << "Input name of the directory you want to delete.\n";
            cin >> str;
            for (int i = 0; i < storage.size(); ++i) {
                if (storage[i].getName() == str) {
                    storage.erase(storage.cbegin() + i);
                    break;
                }
            }
        } else if(switcher == "4") {
            Print::printStorageNames(storage);
        } else if(switcher == "10") {
            return 0;
        } else {
            std::cout << "Incorrect input.\n";
        }
    }

    return 0;
}