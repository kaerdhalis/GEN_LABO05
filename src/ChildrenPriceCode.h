//
// Created by benjamin on 16/06/19.
//

#ifndef GEN_LAB05_CHILDRENPRICECODE_H
#define GEN_LAB05_CHILDRENPRICECODE_H

#include "MoviePriceCode.h"

class ChildrenPriceCode : public MoviePriceCode{

private:
    static const int CHILDRENS   = 2;

public:

    int getPriceCode() const override ;

    virtual ChildrenPriceCode *clonePriceCode() const override;
};

inline int ChildrenPriceCode::getPriceCode() const {

    return CHILDRENS;
}

inline ChildrenPriceCode *ChildrenPriceCode::clonePriceCode() const {

    return new ChildrenPriceCode();
}


#endif //GEN_LAB05_CHILDRENPRICECODE_H
