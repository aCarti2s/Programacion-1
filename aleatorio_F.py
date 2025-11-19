adivinar_numero=17

for _ in range(1,100):
    numero_usuario=int(input("Ingresa un numero entero entre 1 y 100: "))
    if numero_usuario<adivinar_numero:
        print("El numero a adivinar es mayor")
    elif numero_usuario>adivinar_numero:
        print("El numero a adivinar es menor")
    else: 
        print("Felicidades, adivinaste el numero")
        break
