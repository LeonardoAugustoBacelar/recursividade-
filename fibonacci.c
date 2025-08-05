def fibonacci(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        seq = [0, 1]
        for i in range(2, n):
            seq.append(seq[-1] + seq[-2])
        return seq

# Solicita ao usuário um número inteiro positivo
n = int(input("Digite um número inteiro positivo: "))

# Verifica se o número é válido
if n <= 0:
    print("Número inválido! Por favor, digite um número **maior que zero**.")
else:
    termos = fibonacci(n)
    print(f"Os {n} primeiros termos da sequência de Fibonacci são:")
    print(termos)
