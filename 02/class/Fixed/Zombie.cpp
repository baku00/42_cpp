#include "Contact.hpp"

Contact::Contact(
	std::string prenom,
	std::string nom_de_famille,
	std::string surnom,
	std::string numero_de_telephone,
	std::string secret,
	int index
) {
	this->prenom = prenom;
	this->nom_de_famille = nom_de_famille;
	this->surnom = surnom;
	this->numero_de_telephone = numero_de_telephone;
	this->secret = secret;
	this->index = index;
}

Contact::Contact() {}

void Contact::enregistrer_prenom(std::string prenom)
{
	this->prenom = prenom;
}

void Contact::enregistrer_nom(std::string nom)
{
	this->nom_de_famille = nom;
}

void Contact::enregistrer_surnom(std::string surnom)
{
	this->surnom = surnom;
}

void Contact::enregistrer_secret(std::string secret)
{
	this->secret = secret;
}

void Contact::enregistrer_tel(std::string tel)
{
	this->numero_de_telephone = tel;
}

void Contact::enregistrer_index(int index)
{
	this->index = index;
}

std::string Contact::formater_pour_colonne(std::string valeur) {
	if (valeur.length() > 10) {
		return valeur.substr(0, 9) + ".";
	}
	return valeur + std::string(10 - valeur.length(), ' ');
}

void Contact::afficher_colonne(std::string valeur) {
	std::cout << " | " << formater_pour_colonne(valeur);
}

void Contact::afficher() {
	std::cout << formater_pour_colonne(prenom) << std::flush;
	afficher_colonne(nom_de_famille);
	afficher_colonne(surnom);
	afficher_colonne(numero_de_telephone);
	afficher_colonne(secret);
	std::cout << std::endl;
}

void Contact::afficher_contact() {
	std::cout << "Prenom:\t\t\t" << prenom << std::endl;
	std::cout << "Nom de famille:\t\t" << nom_de_famille << std::endl;
	std::cout << "Surnom:\t\t\t" << surnom << std::endl;
	std::cout << "Numero de telephone:\t" << numero_de_telephone << std::endl;
}

bool Contact::index_valide(int index) {
	return index >= 0 && index <= 7;
}
