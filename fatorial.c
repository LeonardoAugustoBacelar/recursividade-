def fatorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * fatorial(n - 1)

# Solicita ao usuário um número inteiro positivo
numero = int(input("Digite um número inteiro positivo: "))

# Verifica se o número é válido
if numero < 0:
    print("Número inválido! Por favor, digite um número inteiro **positivo**.")
else:
    resultado = fatorial(numero)
    print(f"O fatorial de {numero} é {resultado}.")
