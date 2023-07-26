#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

class Card {
	public:
		Card(const std::string& no, const std::string& nm, int lim, double bal = 0);
		std::string getNumber() const { return number; }
		std::string getName() const { return name; }
		double getBalance()  const { return balance;  }
		int getLimit() const { return limit;   }

		bool chargeIt(double price);
		void makePayment(double payment);
	private:
		std::string number;
		std::string name;
		int limit;
		double balance;
};

std::ostream& operator<<(std::ostream& out, const Card& c);
#endif