//
// Created by benjamin on 16/06/19.
//

#ifndef GEN_LAB05_REGULARPRICECODE_H
#define GEN_LAB05_REGULARPRICECODE_H

#include "MoviePriceCode.h"

class RegularPriceCode : public MoviePriceCode {
private:

    static const int REGULAR     = 0;
public:

    int getPriceCode() const override ;

    virtual RegularPriceCode *clonePriceCode() const override;
};

inline int RegularPriceCode::getPriceCode() const {

    return REGULAR;
}

inline RegularPriceCode* RegularPriceCode::clonePriceCode() const {
    return new RegularPriceCode();
}

#endif //GEN_LAB05_REGULARPRICECODE_H
