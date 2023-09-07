#include "Warlock.hpp"


Warlock::Warlock(std::string const &name, std::string const &title) {
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName() const {
	return _name;
}

const std::string& Warlock::getTitle() const {
	return _title;
}

void Warlock::setTitle(std::string const &title) {
	_title = title;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!\n";
}

void Warlock::learnSpell(ASpell *spell) {
	book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell) {
	book.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, ATarget const &target) {
	if (book.createSpell(spell) != NULL)
		book.createSpell(spell)->launch(target);
}
