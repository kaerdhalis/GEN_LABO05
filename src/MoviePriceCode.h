//
// Created by benjamin on 16/06/19.
//

#ifndef GEN_LAB05_MOVIEPRICECODE_H
#define GEN_LAB05_MOVIEPRICECODE_H
class Movie;
class MoviePriceCode {

public:

    virtual  int getPriceCode() const =0 ;
    virtual double getBaseAmount() const = 0;
    virtual int getMaxDay() const = 0;
    virtual double getFeePerExpendDay() const = 0;
    virtual bool hasBonus() const = 0;
    virtual MoviePriceCode* clonePriceCode () const = 0;

};





#endif //GEN_LAB05_MOVIEPRICECODE_H
