#include "turkish.h"

tamsayı başla(tamsayı ac, karakter *av[])
{
	karakter	*dizgi;
	tamsayı		uzunluk;
	tamsayı		konum;

	konum = 0;
	uzunluk = unicode_uzunluk(av[1], dizgiden_sayıya(av[2]));
	bastır ("[%d]\n", uzunluk);
	dizgi = (karakter *)yer_ayır(byte_boyu(karakter) * uzunluk);
	döngü (konum < uzunluk && av[1][konum] != '\0')
	{
		dizgi[konum] = av[1][konum];
		konum++;
	}
	bastır("%s\n", dizgi);
	boşalt (dizgi);
	döndür (0);
	/*karakter	dizgi[] = "ı";

	bastır("bu stringin byte boyu = %d\n", unicode_uzunluk(dizgi, türkçe_dizgi_uzunluk(dizgi)));
	döndür (0);*/
}
