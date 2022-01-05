# Saknes meklēšana
Šīs algoritms ir visvienkāršākais saknes meklēšanas algoritms. Tas ir vājš ar to, ka tas labi strādā tikai gadījumam, ja sākotnēji izvēlētajā intervālā (a un b vērtības ir galapunkti) atrodas sakne, funkcija ir nepātraukta un maina zīmi tikai vienu reizi. Ja viss minētais izpildās, tad algoritms tuvojas saknes vērtībai dalot intervālu uz pusēm. Attiecīgi tiek paņemts skaitlis intervāla vidū (galapunktu vidējais) un noteikta funkcijas zīme pie šī punkta. Ja zīme ir negatīva, tad punkts ir jaunā a vertība, ja pozitīva, tad b vērtība. Veicot vairākas interācijas intervāls sāk samazināties un konverģēt uz saknes punktu. Algoritms beidzas, kad noteikta precizitāte (intervāla garums) ir sasniegts.
Metode var arī risināt f(x) = c. Vienkārši apskata funkciju g(x) = f(x) - c.

Piemēra bilde - https://github.com/niks-nadzins/RTR-105/blob/main/darbi/ld2_roots/ld2photo.png

Funkcijas attēls - https://github.com/niks-nadzins/RTR-105/blob/main/darbi/1ld_series/sinh.png
