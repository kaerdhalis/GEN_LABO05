// Customer.cpp
#include <sstream>
#include <vector>
#include "Customer.h"

using std::ostringstream;
using std::vector;

using namespace std;

string Customer::statement()
{
    double totalAmount = 0;
    int frequentRenterPoints = 0;
    ostringstream result;
    result << "Rental Record for " << getName() << "\n";
    for (auto rental : _rentals) {

        double thisAmount = 0;

        thisAmount += determineAmountsForEachRental(rental);


        frequentRenterPoints++;

        if (rental.getMovie().hasBonus()&& rental.getDaysRented() >1)
            frequentRenterPoints++;

        showFiguresForThisRental(result,rental, thisAmount);
        totalAmount += thisAmount;
    }

    addFooterLines(result, totalAmount, frequentRenterPoints);

    return result.str();
}

double Customer::determineAmountsForEachRental(const Rental& rental){
    double result = rental.getMovie().getBaseAmount();
    if(rental.getDaysRented() > rental.getMovie().getMaxDay()){
        result += (rental.getDaysRented() - rental.getMovie().getMaxDay()) * rental.getMovie().getFeePerExpendDay();
    }
    return result;
}

 void Customer::showFiguresForThisRental(std::ostringstream &result, const Rental&rental, double amount) const {
    result << "\t" + rental.getMovie().getTitle() << "\t" << amount << "\n";
}

void Customer::addFooterLines(std::ostringstream& result, double amount, int frequentRenterPoints){
    result << "Amount owed is " << amount << "\n"
           << "You earned " << frequentRenterPoints
           << " frequent renter points";
}

Customer::~Customer() {

}
