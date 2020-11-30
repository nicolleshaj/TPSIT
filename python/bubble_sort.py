array = []

n = int(input("inserisci il numero dgli elementi: "))
c = 0
c2 = 0
for c in range(n):
    inputvalore = int(input("inserisci il valore: "))
    array.append(inputvalore)
    

for c in range(n-1):
    for c2 in range(n-c-1):
        if(array[c2]>array[c2+1]):
            swap = array[c2]
            array[c2] = array[c2+1]
            array[c2+1] = swap
    
        
    
print("operazione riuscita: ")
print(array)    
