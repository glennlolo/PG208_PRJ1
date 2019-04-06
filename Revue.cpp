//
// Created by hugo on 01/04/2019.
//

#include "Revue.h"

void Revue::set_editeur(string _editeur){
    editeur = _editeur;
};

string Revue::get_editeur() {
    return editeur;
};

void Revue::set_n_articles(int _n_articles) {
    n_articles = _n_articles;
};

int Revue::get_n_articles() {
    return n_articles;
};

void Revue::set_articles(string _articles) {
    articles.push_back(_articles);
};

vector<string> Revue::get_articles() {
    return articles;
};