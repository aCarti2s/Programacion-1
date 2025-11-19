suma=0.0

for _i in range(100):
    numero=float(input("Ingresa un numero(0.0 para terminar): "))

    if numero==0.0:
        break
    suma+=numero
print("La suma total es: ", suma)
