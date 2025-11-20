binario=input("Ingresa un numero binario: ")

indice=len(binario)-1
decimal=0
potencia=0

while indice>=0:
    if binario[indice]=='1':
        decimal+=2**potencia
        indice-=1
        potencia+=1
    print("Decimal: ", decimal)