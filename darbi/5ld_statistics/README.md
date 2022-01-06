# Statistikas parametri un kārtošana
## Bubble Sort
Programmā lietotājs ievada simbolu virkni, kuru pēc tam sakārto augošā secībā attiecīgi pēc ASCII skaitļiem. Bubble Sort pielieto nested loops. Attiecīgi, ja masīva garums ir n, tad kārtošanas gājieni tiks veikti n reizes. Kārtošanas gājienā masīva elements tiek salīdzināts ar nākamo elementu. Ja nākamais elements ir mazāks, tad abi elementi tiek samainīti ar vietām. Pirmais kārtošanas gājiens nodrošina to, ka lielākais masīva elements nonāk pēdējā pozīcījā. Tā kā nav jēgas šo elementu otrajā gājienā salīdzināt vēlreiz, otrajā kārtošanas gājienā tiek apskatīts apakšmasīvs ar garumu n-1. Induktīvi katrā gājienā kārtojamais masīvs paliek par vienu elementu īsāks. n-tajā gājienā masīvs ir pilnīgi sakārtots.
## Average
Teksta rindai nevajag pat būt sakārtotai, lai noteiktu vidējo. Funkcijā vienkārši sasummē visas masīva vērtības uz izdala ar skaitu.
## Median
Tā kā mums ir sakārtots masīvs, var noteikt mediānas vērtību. Ir divi gadījumi. Ja masīvā ir nepāra skaita elementu, tad vienkārši izvada msīva vidējo elementu. Ja masīvā ir pāra elementu skaits, tad paņem divas vidējās vērtības un aprēķina to aritmētiski vidējo vērtību.
## Histogram
Funkcija izveido divus masīvus. Vienā masīvā tiek saglabāti unikālie simboli un otrā katra simbola biežums. Tiek saglabāt refrences vērtība un mainīgais, kas seko skaitam. Ja elements sakrīt ar refrences vērtību, tad tiek palielināts skaits. Ja elements nesakrīt ar refrences vērtību, tad skaits tiek restartēts uz nulli un refrences vērtība tiek nomainīta uz attiecīgo elementu. Skaits restartēšanas brīdi tiek saglabāts biežuma masīva un refrence tiek saglabāta unikālo simbolu masīvā maiņas brīdī. Vēl funkcija izvada informāciju tā, ka katram unikālajam elementam pretī ir biežums.
## Moda
Moda tiek noteikta iekšpus histogram funkcijas. Pirmajā ciklā tiek sameklēta biežuma masīva maksimālā vērtība to salīdzinot ar masīva elementiem un nomainot, ja atrodas lielāka.
Otrā ciklā tiek noteikts, kuriem simboliem biežums sakrīt ar maksimālo vērtību. Ja tie sakrīt, tie tiek izvadīti.

Histogramma - 

