// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "MoviePriceCode.h"
#include "RegularPriceCode.h"

class Movie {

public:

    explicit Movie(const std::string& title,MoviePriceCode* priceCode);

    Movie(const Movie &m);

    std::string getTitle() const;

    void changePriceCode(MoviePriceCode* priceCode);

    int getPrice() const;

    double getBaseAmount() const ;
    int getMaxDay() const ;
    double getFeePerExpendDay() const ;
    bool hasBonus() const ;

    virtual ~Movie();

private:

    std::string _title;

    MoviePriceCode* priceCode;
};
inline Movie::Movie(const std::string& title,MoviePriceCode* priceCode): _title( title ), priceCode(priceCode){

}

inline Movie::Movie(const Movie &m) :_title(m._title) {

    priceCode = m.priceCode->clonePriceCode();

}

inline std::string Movie::getTitle() const {
    return _title;
}

inline void Movie::changePriceCode(MoviePriceCode* priceCode) {

    delete this->priceCode;
    this->priceCode = priceCode;

}

inline int Movie::getPrice() const{

    return priceCode->getPriceCode();
}

inline double Movie::getBaseAmount() const {
    return priceCode->getBaseAmount();
}

inline int Movie::getMaxDay() const {
    return priceCode->getMaxDay();
}

inline double Movie::getFeePerExpendDay() const {
    return priceCode->getFeePerExpendDay();
}

inline bool Movie::hasBonus() const {
    return priceCode->hasBonus();
}

inline Movie::~Movie() {
    delete priceCode;
}


#endif // MOVIE_H