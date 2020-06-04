
#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "exceptions.cpp"
#include "Film.h"
/**
 * class used for data validation :-)
 */
class Valid {
public:

    static void checkTrailer(const std::string &s) {
        if (!(s.find("https://") == 0 || s.find("http://") == 0))

            throw InvalidURL();
    }

    static void checkFilmExists(const std::vector<Film> &filme, const std::string &s, const int &jahr) {
        for (auto &iter:filme)
            if (iter.gettitel() == s && iter.getjahr() == jahr)
                return;
        throw FilmNotFoundException(s);

    }

    static void checkFilmLikes(long long int likes) {
        if (likes < 0)
            throw std::out_of_range("Vai vai");
    }

    static void checkJahr(int year) {

        if (year < 1813 || year > 2020)

            throw std::out_of_range("Minti");

    }

};
