//
// Created by benjamin on 16/06/19.
//

#ifndef GEN_LAB05_NEWRELEASEPRICECODE_H
#define GEN_LAB05_NEWRELEASEPRICECODE_H

#include "MoviePriceCode.h"

class NewReleasePriceCode : public MoviePriceCode{
private:

    static const int NEW_RELEASE = 1;

public:

    int getPriceCode() const override ;

    virtual NewReleasePriceCode *clonePriceCode() const override;
};

inline int NewReleasePriceCode::getPriceCode() const {

    return NEW_RELEASE;
}

inline NewReleasePriceCode *NewReleasePriceCode::clonePriceCode() const {
    return new NewReleasePriceCode();
}

#endif //GEN_LAB05_NEWRELEASEPRICECODE_H
