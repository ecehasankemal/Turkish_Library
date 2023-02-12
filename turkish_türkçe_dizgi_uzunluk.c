#include "turkish.h"

tamsayı
	türkçe_dizgi_uzunluk(karakter *dizgi)
{
	kayıtlı kısasayı	sayaç;
	kayıtlı kısasayı	sayaç2;

	sayaç = 0;
	sayaç2 = 0;
	döngü(dizgi[sayaç])
		sayaç++;
	sayaç2 = unicode_hesaplayıcı(dizgi, sayaç, sayaç2);
	döndür (sayaç - sayaç2);
}