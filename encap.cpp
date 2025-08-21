#include <iostream>

using namespace std;

class Shop {
	private:
		string prod_name;
		float prod_price;
		int prod_quan;
	public:
		Shop() {
			setName("Custom Product");
			setPrice(0.0);
			setQuan(0);
		}

		Shop(string prod_name, float prod_price, int prod_quan) {
			setName(prod_name);
			setPrice(prod_price);
			setQuan(prod_quan);
		}
		void prettyPrint() {
			cout << prod_name << " - " << prod_price << "/pc - " << (prod_price * prod_quan) << " for " << prod_quan << "pc/s\n";
		}

		void setName(string name) {
			prod_name = name;
		}
		void setPrice(float price) {
			prod_price = price;
		}
		void setQuan(int quan) {
			prod_quan = quan;
		}
		string getName() {
			return prod_name;
		}
		float getPrice() {
			return prod_price;
		}
		int getQuan() {
			return prod_quan;
		}
};

int main() {
	Shop s;
	s.setName("Koko Krunch");
	s.setPrice(45.50);
	s.setQuan(3);
	s.prettyPrint();

	Shop s2("Palmolive Shampoo", 7.50, 5);
	s2.prettyPrint();
}