# Teilora rindas algoritms
Algoritms strādā balstoties uz Teilora rindām. Dotajai funkcijai sinh(x) Teilora teorēma nodrošina polinomu eksistenci, kuru pakāpe, tiecoties uz bezgalību, līdzinās labāk funkcijai. Unikālo polinomu nosaka tās koeficienti. Koeficienti veido virkni. Algoritms nākamo virknes locekli iegūst piereizinot īpašo reizinātāju tagadējam koeficientam (virknes loceklim). Virknes loceklis tiek sareizināts ar attiecīgās ievades pakāpi un pieskaitīts summai, kas limitā tiecas uz sinh(x) vērtības izvēlētajā punktā. Jo vairāk locekļi ir, jo tuvāk patiesajai vērtībai tiekam.

**Funkcijas bilde** - https://github.com/niks-nadzins/RTR-105/blob/main/darbi/1ld_series/sinh.png

**Programmas izvade** - 

**Piezīme.** Es saprotu, ka vērtības varēja iegūt ar long double datu tipu, bet manā programmēšanas vidē tas nestrādāja mistisku iemeslu dēļ.
