#pragma once
#include "ptrarray.h"
#include "monster.h"
#include "view.h"
#include "gamecontext.h"

class CombatView : public View
{
private:
	const char* digits[21] = { "0", "1", "2", "3", "4", "5", "6", "7" , "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20"};
	PtrArray<Monster, 32>* monsters;
	int Rand(size_t min, size_t max);
	std::default_random_engine generator;
	bool checkMonstersHealth();
	bool fight();
	bool run();
	bool drink_potion();
	bool equip_item();
	bool handle_input_equip_item(Player* player);
public:
	CombatView(GameContext* context, PtrArray<Monster, 32>* monsters);
	std::ostream& display() override;
	bool handle_input() override;
};