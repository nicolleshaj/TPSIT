#Scrivi una funzione generatrice di password. La funzione deve generare una stringa alfanumerica di 8 caratteri qualora l'utente voglia una password semplice,
#o di 20 caratteri ascii qualora desideri una password più complicata.

from string import ascii_letters, ascii_lowercase, digits
import random

def genera(iutente):
    password = ""
    if iutente == 1:
        simboli = "abcdefghijklmnopqrstuvwxyz0123456789"
        for i in range(8):
            password += random.choice(simboli)
        print(password) 
    elif iutente == 2:
        simboli = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
        for i in range(20):
            password += random.choice(simboli)
        print(password)
    else:
        print("errore nell'inserimento del numero...")

def main():
    iutente = (int(input("inserire il numero 1 se si vuole una password semplice, 2 se si vuole una password complicata: ")))
    genera(iutente)

if __name__ == "__main__":
    main()