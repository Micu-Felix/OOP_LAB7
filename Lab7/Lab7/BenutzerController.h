
#pragma once

#include <utility>

#include "FilmRepository.h"
#include "Film.h"
#include "FilmInMemoryRepository.cpp"
#include "FilmFileRepository.cpp"
#include <QDesktopServices>
#include <QUrl>

class BenutzerController {
    vector<Film> watchlist;
    FilmRepository *repo;
    string format = "resources/watchlist";



    string ExePath();

public:
    BenutzerController();

    void formatsetter(string value) { format = std::move(value); }

    string formatgetter() { return format; }

    int size() { return watchlist.size(); };

    vector<Film> view_genre(const string &genre);

    bool watch(const string &titel, int jahr);

    void addToWatchlist(const Film &film);
    vector<Film> get_all_watch();

    void set_all_watch(vector<Film> film){watchlist=film;};

    void update_html();

    void view();
};
