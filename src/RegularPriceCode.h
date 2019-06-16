//
// Created by benjamin on 16/06/19.
//

#ifndef GEN_LAB05_REGULARPRICECODE_H
#define GEN_LAB05_REGULARPRICECODE_H

#include "MoviePriceCode.h"



class RegularPriceCode : public MoviePriceCode {
private:

    static const int  REGULAR  = 0;
    static constexpr double BASE_AMOUNT_REGULAR = 2;
    static const int MAX_DAY_REGULAR = 2;
    static constexpr double FEE_REGULAR = 1.5;

public:

    int getPriceCode() const override ;

    double getBaseAmount() const override;

    int getMaxDay() const override;

    double getFeePerExpendDay() const override;

    bool hasBonus() const override;

    virtual RegularPriceCode *clonePriceCode() const override;

    virtual ~RegularPriceCode();
};

inline int RegularPriceCode::getPriceCode() const {

    return REGULAR;
}

inline RegularPriceCode* RegularPriceCode::clonePriceCode() const {
    return new RegularPriceCode();
}

inline double RegularPriceCode::getBaseAmount() const {
    return BASE_AMOUNT_REGULAR;
}

inline int RegularPriceCode::getMaxDay() const {
    return MAX_DAY_REGULAR;
}

inline double RegularPriceCode::getFeePerExpendDay() const {
    return FEE_REGULAR;
}

inline bool RegularPriceCode::hasBonus() const {
    return false;
}

inline RegularPriceCode::~RegularPriceCode() {

}

#endif //GEN_LAB05_REGULARPRICECODE_H
