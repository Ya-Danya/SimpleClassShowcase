#include <string>
#include <vector>
#include "Good.h"


class GoodsCategory {
private:
    std::string name;
    std::vector<Good> goods;
public:
    GoodsCategory(std::string name);

    void addNewGood (Good good);

    void setName(std::string name);

    std::string getName();

    std::vector<Good>& getGoods();

    void printCategory() {
        cout << name << "\n";
        for (Good item: goods) {
            item.print();
        }
    }
};

