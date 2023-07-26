#include "Card.h"

using namespace std;

Card::Card(const string& no, const string& nm, int lim, double bal) {
	number = no;
	name = nm;
	balance = bal;
	limit = lim;
}

bool Card::chargeIt(double price) {
	if (price + balance > double(limit)) {
		return false;
	}
	balance += price;
	return true;
}

void Card::makePayment(double payment) {
	balance -= payment;
}

ostream& operator<<(ostream& out, const Card& c) {
	out << "Number= " << c.getNumber() << "\n"
		<< "Name=" << c.getName() << "\n"
		<< "Balance=" << c.getBalance() << "\n"
		<< "Limit=" << c.getLimit() << "\n";
		return out;
}
