# Nella serie di Fibonacci, ciascun numero della serie è la somma dei due numeri nella serie che lo precedono, ad esempio:
# 1, 1, 2, 3, 5, 8, 13 (...)
# Scrivi una funzione ricorsiva che restituisce in output i numeri della sequenza di Fibonacci, entro una soglia specifica impostata dall'utente.

def Fibonacci(n):
    if n <= 1:
        return n
    else:
        return Fibonacci(n-1) + Fibonacci(n-2)
limite = int(input("inserire il numero dei numeri della sequenza di Fibonacci che verranno dati in output: "))
for num in range (1, limite + 1):
    print(Fibonacci(num))

def main():
    n = 1
    Fibonacci(n)

if __name__ == "__main__":
    main()