// Make a class named Fruit  with a data member to calculate the mamber of fruits in a basket. Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. Print the number of fruits of each type and the total number of fruits in the basket.
#include <iostream>
using namespace std;

class Fruit {
protected:
    int totalFruits;

public:
    Fruit(int total) : totalFruits(total) {}

    int getTotalFruits() {
        return totalFruits;
    }
};

class Apples : public Fruit {
private:
    int apples;

public:
    Apples(int total, int numApples) : Fruit(total), apples(numApples) {}

    int getApples() {
        return apples;
    }
};

class Mangoes : public Fruit {
private:
    int mangoes;

public:
    Mangoes(int total, int numMangoes) : Fruit(total), mangoes(numMangoes) {}

    int getMangoes() {
        return mangoes;
    }
};

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    int totalFruits = 20;

    int numApples = 10;
    int numMangoes = 6;

    Apples appleBasket(totalFruits, numApples);
    Mangoes mangoBasket(totalFruits, numMangoes);

    cout << "Number of Apples: " << appleBasket.getApples() << endl;
    cout << "Number of Mangoes: " << mangoBasket.getMangoes() << endl;
    cout << "Total number of fruits in the basket: " << totalFruits << endl;

    return 0;
}
