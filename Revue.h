//
// Created by hugo on 01/04/2019.
//
#include "Livre.h"
#include <iostream>
#include <string>
#include <vector>
#ifndef PG208_PRJ1_REVUE_H
#define PG208_PRJ1_REVUE_H

using namespace std;

class Revue : public Livre{
public:
    Revue();
    Revue(string _auteur, int _publication, int _pages, string _collection, string _titre, string _resume, string _editeur, int _n_articles, vector<string> _articles);
    ~Revue();

    void set_editeur(string _editeur);
    string get_editeur();
    void set_n_articles(int _n_articles);
    int get_n_articles();
    void set_articles(string _articles);
    vector<string> get_articles();
private:
    string editeur;
    int n_articles;
    vector<string> articles;
};

#endif //PG208_PRJ1_REVUE_H
