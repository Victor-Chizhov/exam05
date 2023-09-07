#pragma once

#include <iostream>
#include <map>

#include "SpellBook.hpp"

#include "ATarget.hpp"
#include "ASpell.hpp"

class Warlock {
	
	private:

		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock const &copy);
		Warlock& operator=(Warlock const &copy);

		SpellBook book;
	
	public:

		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		const std::string& getName() const;
		const std::string& getTitle() const;

		void setTitle(std::string const &title);

		void introduce() const;

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spell, ATarget const &target);
};

