//
// Created by hugo on 06/04/2019.
//
#include "Livre.h"

void Livre::set_auteur(string _auteur) {
    auteur = _auteur;
};
string Livre::get_auteur() {
    return auteur;
};
void Livre::set_publication(int _publication) {
    publication = _publication;
};
int Livre::get_publication() {
    return publication;
};
void Livre::set_pages(int _pages) {
    pages = _pages;
};
int Livre::get_pages() {
    return pages;
};
void Livre::set_collection(string _collection) {
    collection = _collection;
};
string Livre::get_collection() {
    return collection;
};
void Livre::set_titre(string _titre) {
    titre = _titre;
};
string Livre::get_titres() {
    return titre;
};
void Livre::set_resume(string _resume) {
    resume = _resume;
};
string Livre::get_resume() {
    return resume;
};