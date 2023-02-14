.text
ld nombreADiviser
st compteur

loop1: 
ld nombreADiviser
sub nombreDiviseur
st nombreADiviser
brz estMult
ld compteur
brz estNonMult
ld compteur
sub incrementer
st compteur
br loop1

estNonMult:
stop

estMult:
ld incrementer
st resultat
stop

.data
nombreADiviser: 16
nombreDiviseur: 4
compteur: 0
incrementer:1
resultat: 0
