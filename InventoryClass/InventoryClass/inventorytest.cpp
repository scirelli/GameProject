#include <iostream.h>
#include "Inventory.h"

void main()
{
	Inventory inv(true,true,true,true);
	
	if(inv.Get_ArrowStat() == true)
		cout<< "true";
	
	return;
}