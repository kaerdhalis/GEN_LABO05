// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "MoviePriceCode.h"
#include "RegularPriceCode.h"

class Movie {

public:

    static const int CHILDRENS   = 2;
    static const int REGULAR     = 0;
    static const int NEW_RELEASE = 1;

    explicit Movie(const std::string& title,MoviePriceCode* priceCode);

    Movie(const Movie &m);

    std::string getTitle() const;

    void changePriceCode(MoviePriceCode* priceCode);

    int getPrice() const;

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

inline Movie::~Movie() {
    delete priceCode;
}


#endif // MOVIE_H