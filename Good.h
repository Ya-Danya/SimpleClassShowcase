

#include <iostream>

using std::cout;

class Good {
private:
    int id;
    int cost;
    int amount;
    static inline int counter{};
public:
    Good();
    Good(int id, int cost, int amount);
    Good(Good const &good);

    int getId();
    void setId(int id);
    int getCost();
    void setCost(int cost);
    int getAmount();
    void setAmount(int amount);

    void print();

    ~Good();
};


