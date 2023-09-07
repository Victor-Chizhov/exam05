#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"
class ASpell;

class SpellBook {
	

	private:
		
		std::map<std::string, ASpell*> book;

		SpellBook(SpellBook const &copy);
		SpellBook& operator=(SpellBook const &copy);

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const &spell);
		ASpell* createSpell(std::string const &spell);
};
