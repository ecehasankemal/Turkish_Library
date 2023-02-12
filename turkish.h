#ifndef	TURKISH_H
# define TURKISH_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define __liste va_list
# define __başla va_start
# define __son va_end
# define __argüman va_arg

# define yaz write
# define başla main
# define yer_ayır malloc
# define boşalt free

# define işaretli signed
# define işaretsiz unsigned
# define tamsayı int
# define kısasayı short
# define uzunsayı long
# define kayıtlı register
# define hizalı inline
# define statik static
# define değişmez const
# define karakter char
# define boşluk void
# define byte_boyu sizeof
# define döngü while
# define yinele for
# define döndür return
# define eğer if
# define değilse else

kısasayı	unicode_bulucu(karakter *dizgi, tamsayı sayaç);
kısasayı	unicode_hesaplayıcı(karakter *dizgi, tamsayı uzunluk, tamsayı sonuç);
kısasayı	unicode_uzunluk(karakter *dizgi, kayıtlı tamsayı uzunluk);

tamsayı	türkçe_dizgi_uzunluk(karakter *dizgi);

boşluk	karakter_yaz(karakter c);
boşluk	dizgi_yaz(karakter	*dizgi);
tamsayı	bastır(değişmez karakter *dizgi, ...);

#endif
