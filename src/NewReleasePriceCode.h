//
// Created by benjamin on 16/06/19.
//

#ifndef GEN_LAB05_NEWRELEASEPRICECODE_H
#define GEN_LAB05_NEWRELEASEPRICECODE_H

#include "MoviePriceCode.h"



class NewReleasePriceCode : public MoviePriceCode{
private:

    static const int  NEW_RELEASE  = 1;
    static constexpr double BASE_AMOUNT_NEW_RELEASE = 0;
    static const int MAX_DAY_NEW_RELEASE = 0;
    static constexpr double FEE_NEW_RELEASE = 3;


public:

    int getPriceCode() const override ;

    double getBaseAmount() const override;

    int getMaxDay() const override;

    double getFeePerExpendDay() const override;

    bool hasBonus() const override;

    virtual NewReleasePriceCode *clonePriceCode() const override;

    virtual ~NewReleasePriceCode();
};

inline int NewReleasePriceCode::getPriceCode() const {

    return NEW_RELEASE;
}

inline NewReleasePriceCode *NewReleasePriceCode::clonePriceCode() const {
    return new NewReleasePriceCode();
}

inline double NewReleasePriceCode::getBaseAmount() const {
    return BASE_AMOUNT_NEW_RELEASE;
}

inline int NewReleasePriceCode::getMaxDay() const {
    return MAX_DAY_NEW_RELEASE;
}

inline double NewReleasePriceCode::getFeePerExpendDay() const {
    return FEE_NEW_RELEASE;
}

inline bool NewReleasePriceCode::hasBonus() const {
    return true;
}

inline NewReleasePriceCode::~NewReleasePriceCode() {

}

#endif //GEN_LAB05_NEWRELEASEPRICECODE_H
