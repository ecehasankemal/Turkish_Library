/*****************************************************************************\
 ⠄⠄⠄⢰⣧⣼⣯⠄⣸⣠⣶⣶⣦⣾⠄⠄⠄⠄⡀⠄⢀⣿⣿⠄⠄⠄⢸⡇⠄⠄
 ⠄⠄⠄⣾⣿⠿⠿⠶⠿⢿⣿⣿⣿⣿⣦⣤⣄⢀⡅⢠⣾⣛⡉⠄⠄⠄⠸⢀⣿⠄  
 ⠄⠄⢀⡋⣡⣴⣶⣶⡀⠄⠄⠙⢿⣿⣿⣿⣿⣿⣴⣿⣿⣿⢃⣤⣄⣀⣥⣿⣿⠄ LİSANS = GPLv03 && Mechanical Turko
 ⠄⠄⢸⣇⠻⣿⣿⣿⣧⣀⢀⣠⡌⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⣿⣿⣿⠄ 
 ⠄⢀⢸⣿⣷⣤⣤⣤⣬⣙⣛⢿⣿⣿⣿⣿⣿⣿⡿⣿⣿⡍⠄⠄⢀⣤⣄⠉⠋⣰ turkish_bastır.c
 ⠄⣼⣖⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⢇⣿⣿⡷⠶⠶⢿⣿⣿⠇⢀⣤
 ⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣷⣶⣥⣴⣿⡗ 
 ⢀⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠄ Yapımcı: hece
 ⢸⣿⣦⣌⣛⣻⣿⣿⣧⠙⠛⠛⡭⠅⠒⠦⠭⣭⡻⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠄ Email: ecehasankemal@gmail.com
 ⠘⣿⣿⣿⣿⣿⣿⣿⣿⡆⠄⠄⠄⠄⠄⠄⠄⠄⠹⠈⢋⣽⣿⣿⣿⣿⣵⣾⠃⠄
 ⠄⠘⣿⣿⣿⣿⣿⣿⣿⣿⠄⣴⣿⣶⣄⠄⣴⣶⠄⢀⣾⣿⣿⣿⣿⣿⣿⠃⠄⠄
 ⠄⠄⠈⠻⣿⣿⣿⣿⣿⣿⡄⢻⣿⣿⣿⠄⣿⣿⡀⣾⣿⣿⣿⣿⣛⠛⠁⠄⠄⠄ 
 ⠄⠄⠄⠄⠈⠛⢿⣿⣿⣿⠁⠞⢿⣿⣿⡄⢿⣿⡇⣸⣿⣿⠿⠛⠁⠄⠄⠄⠄⠄ Oluşturuldu: 2023/02/12 by hece
 ⠄⠄⠄⠄⠄⠄⠄⠉⠻⣿⣿⣾⣦⡙⠻⣷⣾⣿⠃⠿⠋⠁⠄⠄⠄⠄⠄⢀⣠⣴ Güncellendi: 2023/02/13 by hece
 ⣿⣿⣿⣶⣶⣮⣥⣒⠲⢮⣝⡿⣿⣿⡆⣿⡿⠃⠄⠄⠄⠄⠄⠄⠄⣠⣴⣿⣿⣿
\******************************************************************************/

#include "turkish.h"

/*
# define __liste va_list
# define __başla va_start
# define __son va_end
# define __argüman va_arg
*/

statik hizalı tamsayı
	bastır_karakter_yaz(karakter *c)
{
	eğer (amerikan_dizgi_uzunluk(c) == 1)
		yaz(1, c, 1);
	değilse eğer (c[0] > 0)
		yaz(1, c, 1);
	değilse
		yaz(1, c, 2);
	döndür(1);
}

statik hizalı tamsayı
	bastır_karakter_yaz_bruh(karakter c)
{
	döndür (yaz(1, &c, 1));
}

statik hizalı tamsayı
	bastır_dizgi_yaz(karakter *dizgi)
{
	kayıtlı tamsayı	uzunluk;
	kayıtlı	tamsayı	konum;

	konum = 0;
	uzunluk = 0;
	eğer (!dizgi)
		döndür (bastır_dizgi_yaz("(null)"));
	döngü (dizgi[konum] != '\0')
	{
		yaz(1, &dizgi[konum], 1);
		konum++;
	}
	uzunluk = türkçe_dizgi_uzunluk(dizgi);
	döndür (uzunluk);
}

statik hizalı tamsayı
	bastır_sayıdan_dizgiye(işaretsiz uzunsayı sayı, tamsayı taban,
		karakter *dizgi, tamsayı durum)
{
	kayıtlı tamsayı	konum;
	kayıtlı tamsayı uzunluk;
	tamsayı			sayı_listesi[100];

	konum = 0;
	uzunluk = 0;
	eğer (durum == 1 && (tamsayı)sayı < 0)
	{
		sayı *= -1;
		uzunluk += bastır_karakter_yaz("-");
	}
	eğer (durum == 2)
		uzunluk += bastır_dizgi_yaz("0x");
	eğer (sayı == 0)
		uzunluk += bastır_karakter_yaz("0");
	döngü (sayı)
	{
		sayı_listesi[konum++] = sayı % taban;
		sayı = sayı / taban;
	}
	döngü (konum--)
		uzunluk += bastır_karakter_yaz(&dizgi[sayı_listesi[konum]]);
	döndür (uzunluk);
}

statik hizalı tamsayı
	format_bulucu(__liste argüman, karakter format)
{
	kayıtlı tamsayı	uzunluk;

	uzunluk = 0;
	eğer (format == 'c')
		uzunluk += bastır_karakter_yaz(__argüman(argüman, karakter *));
	değilse eğer (format == 's')
		uzunluk += bastır_dizgi_yaz(__argüman(argüman, karakter *));
	değilse eğer (format == 'u')
		uzunluk += bastır_sayıdan_dizgiye(__argüman(argüman, işaretsiz tamsayı)
			, 10, "0123456789", 0);
	değilse eğer (format == 'd' || format == 'i')
		uzunluk += bastır_sayıdan_dizgiye(__argüman(argüman, tamsayı)
			, 10, "0123456789", 1);
	değilse eğer (format == 'p')
		uzunluk += bastır_sayıdan_dizgiye(__argüman(argüman, işaretsiz uzunsayı)
			, 16, "0123456789abcdef", 2);
	değilse eğer (format == 'x')
		uzunluk += bastır_sayıdan_dizgiye(__argüman(argüman, işaretsiz tamsayı)
			, 16, "0123456789abcdef", 0);
	değilse eğer (format == 'X')
		uzunluk += bastır_sayıdan_dizgiye(__argüman(argüman, işaretsiz tamsayı)
			, 16, "0123456789ABCDEF", 0);
	değilse eğer (format == '%')
		uzunluk += bastır_karakter_yaz("%");
	döndür (uzunluk);
}

tamsayı
	bastır(karakter *dizgi, ...)
{
	kayıtlı tamsayı	konum;
	kayıtlı tamsayı	uzunluk;
	kayıtlı tamsayı	kayıt;
	__liste	argüman;

	konum = 0;
	uzunluk = 0;
	kayıt = 0;
	__başla(argüman, dizgi);
	döngü (dizgi[konum] != '\0')
	{
		eğer (dizgi[konum] == '%')
		{
			konum++;
			uzunluk += format_bulucu(argüman, dizgi[konum]);
		}
		değilse
				uzunluk += bastır_karakter_yaz_bruh(dizgi[konum]);
		konum++;
	}
	__son(argüman);
	kayıt = uzunluk - türkçe_dizgi_uzunluk(dizgi);
	uzunluk = uzunluk - kayıt;
	döndür (uzunluk);
}
