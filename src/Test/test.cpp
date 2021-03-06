#include "NewReleasePriceCode.h"
#include "ChildrenPriceCode.h"
#include "Movie.h"
#include "gtest/gtest.h"
#include "Customer.h"

static const int CHILDRENS   = 2;
static const int REGULAR     = 0;
static const int NEW_RELEASE = 1;


TEST(CustomerTest,StatementTest){

    Customer customer("Olivier");
    customer.addRental( Rental( Movie("Karate Kid",new RegularPriceCode()), 7));
    customer.addRental( Rental( Movie( "Avengers: Endgame",new NewReleasePriceCode() ), 5));
    customer.addRental( Rental( Movie("Snow White",new ChildrenPriceCode()), 3 ));
    std::string expected ="Rental Record for Olivier\n\tKarate Kid\t9.5\n\tAvengers: Endgame\t15\n\tSnow White\t1.5\n"
                          "Amount owed is 26\nYou earned 4 frequent renter points";
    ASSERT_EQ(customer.statement(), expected);

}

TEST(MovieTest,MovieTest){

    Movie m ("John Wick",new NewReleasePriceCode());
    ASSERT_EQ(m.getTitle(),"John Wick");
    ASSERT_EQ(m.getPrice(),NEW_RELEASE);
}

TEST(MovieTest,ChangePriceTest){

    Movie karatekid ("Karate Kid",new RegularPriceCode());
    ASSERT_EQ(karatekid.getPrice(),REGULAR);
    karatekid.changePriceCode( new ChildrenPriceCode());
    ASSERT_NE(karatekid.getPrice(),REGULAR);
    ASSERT_EQ(karatekid.getPrice(),CHILDRENS);

}

TEST(MoviePriceCodeTest,regularPriceTest){

    MoviePriceCode* test = new RegularPriceCode();
    ASSERT_EQ(test->getPriceCode(),REGULAR);

    MoviePriceCode* testclone = test->clonePriceCode();

    ASSERT_EQ(test->getPriceCode(),testclone->getPriceCode());
    ASSERT_EQ(test->getFeePerExpendDay(),testclone->getFeePerExpendDay());
    ASSERT_EQ(test->getMaxDay(),testclone->getMaxDay());
    ASSERT_EQ(test->getBaseAmount(),testclone->getBaseAmount());

    delete test, testclone;

}

TEST(MoviePriceCodeTest,ChildrenPriceTest){

    MoviePriceCode* test = new ChildrenPriceCode();
    ASSERT_EQ(test->getPriceCode(),CHILDRENS);

    MoviePriceCode* testclone = test->clonePriceCode();

    ASSERT_EQ(test->getPriceCode(),testclone->getPriceCode());
    ASSERT_EQ(test->getFeePerExpendDay(),testclone->getFeePerExpendDay());
    ASSERT_EQ(test->getMaxDay(),testclone->getMaxDay());
    ASSERT_EQ(test->getBaseAmount(),testclone->getBaseAmount());

    delete test, testclone;

}

TEST(MoviePriceCodeTest,newReleasePriceTest){

    MoviePriceCode* test = new NewReleasePriceCode();
    ASSERT_EQ(test->getPriceCode(),NEW_RELEASE);

    MoviePriceCode* testclone = test->clonePriceCode();

    ASSERT_EQ(test->getPriceCode(),testclone->getPriceCode());
    ASSERT_EQ(test->getFeePerExpendDay(),testclone->getFeePerExpendDay());
    ASSERT_EQ(test->getMaxDay(),testclone->getMaxDay());
    ASSERT_EQ(test->getBaseAmount(),testclone->getBaseAmount());

    delete test, testclone;

}