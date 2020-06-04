//
// Created by holom on 19.05.2020.
//

#include "BenutzerController.h"
#include <algorithm>
#include <windows.h>
#include <shellapi.h>
#include <iostream>
#include <QDir>

vector<Film> BenutzerController::view_genre(const string &genre) {
    vector<Film> aux = {};
    for (auto &iter : repo->get_all()) {
        if (iter.getgenre() == genre) {
            aux.push_back(iter);
        }
    }
    return aux;
}

static Film split(const string &line, char delimiter) {
    string buffer;
    string result[5];
    int size = 0;
    for (char c : line) {
        if (c != delimiter) {
            buffer += c;
        } else if (!buffer.empty()) {
            result[size++] = buffer;
            buffer = "";
        }
    }
    if (!buffer.empty()) {
        result[size++] = buffer;
    }
    stringstream jahrString(result[2]);
    int jahr = 0;
    jahrString >> jahr;
    stringstream likesString(result[3]);
    int likes = 0;
    likesString >> likes;
    return Film(result[0], result[1], jahr, likes, result[4]);
}

bool BenutzerController::watch(const string &titel, int jahr) {
    watchlist = get_all_watch();
    auto it = find_if(watchlist.begin(), watchlist.end(), [=](const Film &obj) {
        return (obj.gettitel() == titel && obj.getjahr() == jahr);
    });
    if (it != watchlist.end()) {
        watchlist.erase(it);
        QDir dir;
        QString fileName = dir.currentPath()+"/watchlist.csv";
        ifstream file(fileName.toStdString());
        vector<Film> filme = {};
        string line;
        if (!file.is_open()) {
            return false;
        }
        while (getline(file, line)) {
            Film film = split(line, ',');
            if (film.gettitel() != titel || film.getjahr() != jahr) {
                filme.push_back(film);
            }
        }
        file.close();
        ofstream file2(fileName.toStdString());
        file2 << "";
        file2.close();
        ofstream file3(fileName.toStdString(), ios_base::app);
        for (auto &film:filme) {
            file3 << film.gettitel() << ',' << film.getgenre() << ',' << film.getjahr() << ',' << film.getlikes()
                  << ',' << film.gettrailer() << '\n';
        }
        file3.close();
        update_html();
        return true;
        // }
    } else {
        return false;
    }
    return true;
}

BenutzerController::BenutzerController() {
    QDir dir;
    QString qs =dir.currentPath()+ "/filme.csv";
     QString qs1 =dir.currentPath()+ "/watchlist.html";
      QString qs2 =dir.currentPath()+ "/watchlist.csv";

    this->repo = new FilmFileRepository{qs.toStdString()};
    ofstream file(qs1.toStdString(), ios_base::app);
    file.close();
    ofstream file1(qs2.toStdString(), ios_base::app);
    file1.close();

}

void BenutzerController::addToWatchlist(const Film &film) {
    watchlist.push_back(film);
    QDir dir;
    QString path=dir.currentPath()+"/watchlist.csv";
    ofstream file(path.toStdString(), ios_base::app);
    file << film.gettitel() << ',' << film.getgenre() << ',' << film.getjahr() << ',' << film.getlikes()
         << ',' << film.gettrailer() << '\n';
    file.close();
    update_html();
}

vector<Film> BenutzerController::get_all_watch() {

     QDir dir;
      QString qs2 =dir.currentPath()+ "/watchlist.csv";
    ifstream file(qs2.toStdString());
    vector<Film> filme = {};
    string line;
    if (!file.is_open()) {
        return filme;
    }
    while (getline(file, line)) {
        Film film = split(line, ',');
        filme.push_back(film);
    }
    file.close();
    return filme;

}

void BenutzerController::view() {
    update_html();
    // std::cout << "Current path is " << ExePath() << '\n';
    QDir dir;
    QString path ;

    if (format == "watchlist.csv") {
       path= dir.currentPath()+ "/watchlist.csv";

       QDesktopServices::openUrl(QUrl(path));
    } else {
       path= dir.currentPath()+ "/watchlist.html";
      QDesktopServices::openUrl(QUrl(path));
    }
}

void BenutzerController::update_html() {
    watchlist = get_all_watch();
    QDir dir;
    QString path= dir.currentPath()+ "/watchlist.html";
    ofstream htmlFile(path.toStdString());
    htmlFile << "<!DOCTYPE html>\n" << "<head>\n";
    htmlFile << "<title>Watchliste</title>\n</head>\n<body>\n";
    htmlFile << "<div class=\"table\">\n<table>\n<thead>\n<tr>\n";
    htmlFile << "<th>Titel</th>\n";
    htmlFile << "<th>Genre</th>\n";
    htmlFile << "<th>Jahr</th>\n";
    htmlFile << "<th>Likes</th>\n";
    htmlFile << "<th>Trailer</th>\n</tr>\n</thead>\n<tbody>\n";
    for (const auto &iter : watchlist) {
        htmlFile << "<tr>\n";
        htmlFile << "<td>" << iter.gettitel() << "</td>\n";
        htmlFile << "<td>" << iter.getgenre() << "</td>\n";
        htmlFile << "<td>" << iter.getjahr() << "</td>\n";
        htmlFile << "<td>" << iter.getlikes() << "</td>\n";
        htmlFile << "<td><a href=\"" << iter.gettrailer() << "\" target=\"_blank\">" << iter.gettrailer()
                 << "</a></td>\n\t\t\t\t</tr>\n";
    }
    htmlFile << "</tbody>\n</table>\n</div>\n</body>\n</html>";
    htmlFile.close();
}
