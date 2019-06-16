//
// Created by benjamin on 16/06/19.
//

#ifndef GEN_LAB05_CHILDRENPRICECODE_H
#define GEN_LAB05_CHILDRENPRICECODE_H

#include "MoviePriceCode.h"

class ChildrenPriceCode : public MoviePriceCode{
private:

    static const int  CHILDRENS  = 2;
    static constexpr double BASE_AMOUNT_CHILDRENS = 1.5;
    static const int MAX_DAY_CHILDRENS = 3;
    static constexpr double FEE_CHILDRENS = 1.5;

public:

    int getPriceCode() const override ;

    double getBaseAmount() const override;

    int getMaxDay() const override;

    double getFeePerExpendDay() const override;

    bool hasBonus() const override;

    virtual ChildrenPriceCode *clonePriceCode() const override;
};

inline int ChildrenPriceCode::getPriceCode() const {

    return CHILDRENS;
}

inline ChildrenPriceCode *ChildrenPriceCode::clonePriceCode() const {

    return new ChildrenPriceCode();
}

inline double ChildrenPriceCode::getBaseAmount() const {
    return BASE_AMOUNT_CHILDRENS;
}

inline int ChildrenPriceCode::getMaxDay() const {
    return MAX_DAY_CHILDRENS;
}

inline double ChildrenPriceCode::getFeePerExpendDay() const {
    return FEE_CHILDRENS;
}

inline bool ChildrenPriceCode::hasBonus() const {
    return false;
}


#endif //GEN_LAB05_CHILDRENPRICECODE_H
