//
// Created by benjamin on 16/06/19.
//

#ifndef GEN_LAB05_MOCK_MOVIEPRICE_H
#define GEN_LAB05_MOCK_MOVIEPRICE_H

#include <MoviePriceCode.h>
#include "gmock/gmock.h"  // Brings in Google Mock.
class Mock_MoviePrice : public MoviePriceCode {
public:

    MOCK_CONST_METHOD0(getPriceCode, int());
    MOCK_CONST_METHOD0(getBaseAmount, double());
    MOCK_CONST_METHOD0(getMaxDay, int());
    MOCK_CONST_METHOD0(getFeePerExpendDay, double());
    MOCK_CONST_METHOD0(hasBonus, bool());

};
#endif //GEN_LAB05_MOCK_MOVIEPRICE_H
