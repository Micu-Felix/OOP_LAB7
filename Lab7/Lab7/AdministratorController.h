#pragma once

#include "FilmRepository.h"
#include "Film.h"
#include "FilmInMemoryRepository.cpp"
#include "FilmFileRepository.cpp"
#include <QDir>
#include <QString>

class AdministratorController {
private:
    FilmRepository *repo;
public:
    AdministratorController();

    int size() { return repo->size(); };

    /**
     * RETURN THE FILM LIST
     */
    vector<Film> view_filme();

    bool add_film(const Film &film);

    bool delete_film(const string &titel, int jahr);

    bool edit_film(const string &titel, int jahr, int anzLikes);

};

