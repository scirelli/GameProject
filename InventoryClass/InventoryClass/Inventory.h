//This class stores what is in the heros inventory

#ifndef Inventory_h
#define Inventory_h

class Inventory
{
private:
	bool iBombs;
	bool iArrow;
	bool iBow;
	bool iSword1;

public:
	Inventory(bool,bool,bool,bool);
	Inventory();

	void Set_BombStat(bool);
	void Set_ArrowStat(bool);
	void Set_BowStat(bool);
	void Set_SwordStat(bool);

	bool Get_BombStat();
	bool Get_ArrowStat();
	bool Get_BowStat();
	bool Get_SwordStat();
};

//-------------------- Inventory class Implementation ---------------------------

Inventory::Inventory(bool iBom, bool iArr, bool iBo, bool iSwor)
{
	iBombs = iBom;
	iArrow = iArr; 
	iBow = iBo;
	iSword1 = iSwor;
}

Inventory::Inventory()
{
	iBombs = false;
	iArrow = false; 
	iBow = false;
	iSword1 = false;
}

bool Inventory::Get_ArrowStat()
{
	return iArrow;
}

bool Inventory::Get_BombStat()
{
	return iBombs;
}

bool Inventory::Get_BowStat()
{
	return iBow;
}

bool Inventory::Get_SwordStat()
{
	return iSword1;
}

void Inventory::Set_ArrowStat(bool status)
{
	iArrow= status;
	return;
}

void Inventory::Set_BombStat(bool status)
{
	iBombs= status;
	return;
}

void Inventory::Set_BowStat(bool status)
{
	iBow= status;
	return;
}

void Inventory::Set_SwordStat(bool status)
{
	iSword1= status;
	return;
}

#endif