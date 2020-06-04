#pragma once

#include "Film.h"
#include <vector>

/**
 * RepositoryInMemory
 */
class FilmRepository {

public:

    virtual bool add_film(const Film &film) = 0;

    /**
     * DELETE A FILM
     * @param titel
     * @param jahr
     */
    virtual bool delete_film(const string &titel, int jahr) = 0;

    /**
     * EDIT THE LINK OF A MOVIE
     * @param titel
     * @param jahr
     * @param new_link
     */
    virtual bool edit_film(const string &titel, int jahr, int anzLikes) = 0;

    virtual vector<Film> get_all() = 0;

    virtual int size()=0;
};



