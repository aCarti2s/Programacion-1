n=int(input("Ingresa un numero: "))

print(f"Numeros primos entre 2 y {n}: ")
num=2
while num<=n:
    es_primo=True
    i=2

    while i*i<=num:
        if num%i==0:
            es_primo=False 
            break
        i+=1

    if es_primo:
      print(num,end="\n")
    num+=1