//
// Created by hugo on 06/04/2019.
//
#include <iostream>
#include <string>
#ifndef PG208_PRJ1_LIVRE_H
#define PG208_PRJ1_LIVRE_H

using namespace std;

class Livre : public Ressources {
public :
    void set_auteur(string _auteur);
    string get_auteur();
    void set_publication(int _publication);
    int get_publication();
    void set_pages(int _pages);
    int get_pages();
    void set_collection(string _collection);
    string get_collection();
    void set_titre(string _titre);
    string get_titres();
    void set_resume(string _resume);
    string get_resume();
private:
    string auteur;
    int publication;
    int pages;
    string collection;
    string titre;
    string resume;
};


#endif //PG208_PRJ1_LIVRE_H
