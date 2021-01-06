# Il ROT-15 è un semplice cifrario monoalfabetico, in cui ogni lettera del messaggio da cifrare 
# viene sostituita con quella posta 15 posizioni più avanti nell'alfabeto.
# Scrivi una semplice funzione in grado di criptare una stringa passata, o decriptarla se la stringa è 
# già stata precedentemente codificata.

def CodDec(cifrario, stringa):
    stringaSucc = ""
    for carattere in stringa:
        if carattere in cifrario:
            stringaSucc += cifrario[carattere]
        else:
            stringaSucc += carattere
    print("ROT-15")
    print(stringaSucc)


def main():
    cifrario = {'a': 'p', 'b': 'q', 'c': 'r', 'd': 's', 'e': 't', 'f': 'u',
                 'g': 'v', 'h': 'w','i': 'x', 'j': 'y', 'k': 'z', 
                'l': 'a', 'm': 'b', 'n': 'c', 'o': 'd', 'p': 'e','q': 'f', 
                'r': 'g', 's': 'h', 't': 'i', 'u': 'j', 'v': 'k',
                 'w': 'l','x': 'm','y': 'n', 'z': 'o'}
    stringa = input("Inserire una stringa: ")
    CodDec(cifrario, stringa)

if __name__ == "__main__":
    main()