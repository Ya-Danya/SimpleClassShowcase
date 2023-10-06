#include "Good.h"

Good::Good() {
    id = 0;
    cost = 0;
    amount = 0;
    counter++;
}
Good::Good(int id, int cost, int amount) {
    this->id = id;
    this->cost = cost;
    this->amount = amount;
    counter++;
}
Good::Good(Good const &good) {
this->id = good.id;
this->cost = good.cost;
this->amount = good.amount;
counter++;
}

int Good::getId() {
    return this->id;
}

void Good::setId(int id) {
    this->id = id;
}

int Good::getCost() {
    return this->cost;
}

void Good::setCost(int cost) {
    this->cost = cost;
}

int Good::getAmount() {
    return this->amount;
}

void Good::setAmount(int amount) {
    this->amount = amount;
};

void Good::print(){
    cout << "Id:" << id << "| Cost: " << cost << "|Amount: " << amount << "\n";
}

Good::~Good(){
    cout << "Good with id" << id << "Was deleted\n";
}
