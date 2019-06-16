#include <iostream>

#include "Customer.h"
#include "NewReleasePriceCode.h"
#include "ChildrenPriceCode.h"

int main() {


    Movie karatekid ("Karate Kid",new RegularPriceCode());
    karatekid.changePriceCode( new ChildrenPriceCode());


    Customer customer("Olivier");
    customer.addRental( Rental( Movie("Karate Kid",new RegularPriceCode()), 7));
    customer.addRental( Rental( Movie( "Avengers: Endgame",new NewReleasePriceCode() ), 5));
    customer.addRental( Rental( Movie("Snow White",new ChildrenPriceCode()), 3 ));

    std::cout << customer.statement() << std::endl;

    return 0;
}