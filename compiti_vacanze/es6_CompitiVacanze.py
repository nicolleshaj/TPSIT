# Il file annual.csv (allegato) contiene la anomalia della temperatura 
# globale del pianeta Terra dal 1880 ad oggi, proveniente da varie fonti (colonna “Source”).
#  Scrivere un programma che generi un dizionario che abbia come chiave l’anno (“Year”) e
#  valore la media aritmetica delle anomalie registrate dalle varie fonti durante quell’anno.
# Inoltre scrivere una funzione che dati in input due anni diversi (anno_1 e anno_2) 
# trovi la anomalia massima e minima nel periodo compreso tra anno_1 e anno_2.

dizionario = {}
file = open("annual.csv", "r")
for riga in file:
    if riga
file.close()