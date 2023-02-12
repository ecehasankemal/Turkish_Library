#include "turkish.h"

kısasayı
	unicode_bulucu(karakter *dizgi, tamsayı sayaç)
{
	eğer (dizgi[sayaç] < 0)
		döndür (1);
	return (0);
}

kısasayı
	unicode_hesaplayıcı(karakter *dizgi, tamsayı uzunluk, tamsayı sonuç)
{
	kısasayı	sayaç;

	sayaç = -1;
	döngü(sayaç++, dizgi[sayaç] != '\0' && sayaç < uzunluk + sonuç)
	{
		eğer (unicode_bulucu(dizgi, sayaç))
		{
			sonuç++;
			sayaç++;
		}
	}
	döndür (sonuç);
}

kısasayı
	unicode_uzunluk(karakter *dizgi, kayıtlı tamsayı uzunluk)
{
	kayıtlı kısasayı	sonuç;

	sonuç = 0;
	sonuç = unicode_hesaplayıcı(dizgi, uzunluk, sonuç);
	döndür (sonuç + uzunluk);
}