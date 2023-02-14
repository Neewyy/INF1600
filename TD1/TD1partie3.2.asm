.text 
ld terme 
sub decrementer 
st terme 
 
boucle: 
brz fin 
ld n0 
shl  
add n1 
st valeurProchaine 
ld n1 
st n0 
ld valeurProchaine 
st n1 
ld terme 
sub decrementer 
st terme 
br boucle 
 
fin: 
ld valeurProchaine  
st valeurProchaine  
stop 
  
.data 
terme: 9 
n0: 0 
n1: 1  
valeurProchaine: 0  
decrementer: 1





