# Un indirizzo MAC (Media Access Control address) è un indirizzo univoco associato dal produttore, a una NIC, composto da 6 coppie di cifre esadecimali separate da due punti.
# Un esempio di MAC è 02:FF:A5:F2:55:12.
# Scrivi una funzione genera_mac che generi degli indirizzi MAC pseudo casuali.

import random

def genera_mac():
    lettnum = "0123456789ABCDEF"
    MAC = ""
    due_punti = 0
    for i in range (6):
        for i in range (2):
            MAC +=random.choice(lettnum)
        if due_punti < 5:
            MAC += ":"
            due_punti += 1
    print(MAC)

def main():
    genera_mac()

if __name__ == "__main__":
    main()