#include "turkish.h"

boşluk
	dizgi_yaz(karakter	*dizgi)
{
	kayıtlı tamsayı	konum;

	konum = 0;
	döngü(dizgi[konum])
	{
		yaz(1, &dizgi[konum], 1);
		konum++;
	}
}