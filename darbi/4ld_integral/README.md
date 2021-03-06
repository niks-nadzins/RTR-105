# Trīs integrēšanas metodes

## Taisnstūra metode
Šī ir visvienkāršākā un vissliktākā no visām metodēm. Matemātikā integrāļi burtiski tiek definēti kā taisnstūru summas limits, bet skaitlisku aprēķinu ziņā šī definīcija nav pārāk laba. Algoritma sākumā tiek izvēlēts cik daudz vienādās daļās tiek sadalīts intervāls, kurā meklē funkcijas integrāli. Nosaka funkcijas vērtību katra intervāla galapunktā un sareizina ar intervāla garumu. Programmā tiek aprēķināts taisnstūra laukums un pieskaitīts summai. Jo vairāk ir šie intervāli, jo prezīcāks ir skaitliskais atvasinājums. Problēma ir, ka intervālu skaitam ir jābūt ļoti lielam līdz ar to iterāciju skaitam ir jābūt lielam.
## Trapeces metode
Šī metode ir precīzāka, jo lieto linēaras aproksimācijas pašai funkcijai. Protams, šīs aproksimācijas nav diez ko precīzas, bet ir precīzākas nekā vienkārši konstante. Protams, šai metodei ir nepieciešamas mazāk interācijas nekā taisnstūra metodei, lai panāktu līdzīgu precizitāti. Metode ir diezgan līdziga iepriekšējai. Atšķirība ir, ka katrā solī tiek noteika arī intervāla galapunkta funkcijas vērtība un tiek aprēķināts izveidotās taisnleņķa trapeces laukums nevis taisnstūra laukums. Līdzīgi trapaces laukumi tiek progrsīvi summēti. Trapeces metodei intervālu skaits ir mazāks, kas nozīmē, ka iterāciju skaits ir mazāks, bet aproksimācija labāka.
## Simpsona metode
Simpsona metode ir nākamais loģiskais solis. Linēaru funkciju vietā tiek lietotas parabolas (otrās pakāpes polinomi), lai labāk aproksimētu funkciju līdz ar to laukumu. Trends turpinās. Intervāls tiek sadalīts vienādās daļās. Tagad katrā intervāla tiek noteiktas funkcijas vērtības trīs punktiem, lai varētu interpolēt otrās pakāpes polinomu. Algoritmā tiek ņemti abi galapunkti un viduspunkts. Attiecīgi parabolai nosaka laukumu noteiktajā intervālā un tiek progrsīvi saskaitīti laukumi. Laukumu formula katrā iterācijas solī balstās uz to, ka ir zināma vispārīgā formula otrās pakāpes polinoma integrālim. Protams, Simpsona metode ir labāka nekā iepriekšējās. Testos konstatēju, ka nepieciešamais iterāciju skaits, lai iegūtu līdzīgu precizitāti bija pat 100 reizes mazāks, ja ne vēl vairāk.
## Piezīme
Vēl prezīcākus rezultātus var iegūt, ja interpolē vēl augstākas pakāpes polinomus. Polinomi ir visvienkāršākās funkcijas, kuras var analītiski itegrēt. Iegūt vispārīgās itegrāļu formulas jebkuras pakāpes polinomam ir vienkārši. Pastāv funkcijas, kurām analītiski noteikt integrāli ir neiespējami vai ļoti grūti. Piemēram, normālsadalījuma līknei analītiski noteikt integrāli ir matemātiski neiespējami, tāpēc skaitliskās metodes ir vienīgais veids kā to izdarīt. Lietojot augstākas pakāpes polinomus ir iespējams ievērojami samazināt iterāciju skaitu un tāpat panākt precīzākus rezultātus.

**Piemēra bilde** - https://github.com/niks-nadzins/RTR-105/blob/main/darbi/4ld_integral/ld4photo.png

**Programmas izvade** - https://github.com/niks-nadzins/RTR-105/blob/main/darbi/4ld_integral/4ld_exit.png

**Funkcijas attēls** - https://github.com/niks-nadzins/RTR-105/blob/main/darbi/1ld_series/sinh.png
