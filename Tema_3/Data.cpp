#include "Data.h"

bool operator<(const CData& date1, const CData& date2) 
{
	
	if (date1.an < date2.an)
	{
		return true;
	}
	else {
		if (date1.an > date2.an)
		{
			return false;
		}
		else {
			if (date1.luna < date2.luna)
			{
				return true;
			}
			else {
				if (date1.luna > date2.luna)
				{
					return false;
				}
				else
				{
					if (date1.zi < date2.zi)
					{
						return true;
					}
					else {
						return false;

					}
				}
			}
		}
	}
}

void CData::read()
{
	cout << " Data (zi luna an):  ";
	cin >> zi >> luna >> an;
}
