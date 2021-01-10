Nuorodos į įvairias mano projekto dalis:<br/>
 <br/>
 [v1.1](https://github.com/MatasSepikas/Project2/tree/v1.1)<br/>
 [v1.2](https://github.com/MatasSepikas/Project2/tree/v1.2)<br/>
 [v1.5](https://github.com/MatasSepikas/Project2/tree/v1.5)<br/>
 [v2.0](https://github.com/MatasSepikas/Project2/tree/v2.0-atsiskaitymui)
[]()

Pristatymas:<br/>
v1.1: versija 1.1<br>
Rezultatas papastai:<br>
100000 struct skirstymas uztruko: 1.98218 s<br>
100000 class skirstymas uztruko: 1.9849 s<br>
1000000 struct skirstymas uztruko: 19.6293 s<br>
1000000 class skirstymas uztruko: 19.4958 s<br>
O1:<br>
100000 struct skirstymas uztruko: 0.0702196 s<br>
100000 class skirstymas uztruko: 0.0605366 s<br>
1000000 struct skirstymas uztruko: 0.574075 s<br>
1000000 class skirstymas uztruko: 0.580992 s<br>
O2:<br>
100000 struct skirstymas uztruko: 0.0457546 s<br>
100000 class skirstymas uztruko: 0.0517234 s<br>
1000000 struct skirstymas uztruko: 0.492131 s<br>
1000000 class skirstymas uztruko: 0.498312 s<br>
v1.2: v1.2 buvo atlikti atitinkami pakeitimas pagal "Rule of three". Realizuotas destruktorius. Pridėtas kopijavimo konstruktorius ir kopijavimo priskyrimo operatorius.<br>
v1.5 Sukurta bazinė abstrakčioji klasė Asmuo ir iš jos išvesta Studentas klasė. Paruoštas cmake CMakeLists.txt (tą reikėjo atlikti v1.0).<br>
v2.0 Sudokumentuota su doxygen
