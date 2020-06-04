#include "AdministratorController.h"

vector<Film> AdministratorController::view_filme() {

    return repo->get_all();
    /*for (auto &iter : repository.get_all()) {
        cout << iter.anschreiben();
        */
}

bool AdministratorController::add_film(const Film &film) {
    return repo->add_film(film);
}

bool AdministratorController::delete_film(const string &titel, int jahr) {
    return repo->delete_film(titel, jahr);
}

bool AdministratorController::edit_film(const string &titel, int jahr, int anzLikes) {
    return repo->edit_film(titel, jahr, anzLikes);
}

AdministratorController::AdministratorController() {
    QDir dir;
    QString qs =dir.currentPath()+ "/filme.csv";
    this->repo = new FilmFileRepository{qs.toStdString()};

}
