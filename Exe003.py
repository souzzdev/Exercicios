valor = input('Digite um valor: ')

print(f'É decimal: {valor.isdecimal()}')
print(f'É minúsculo: {valor.islower()}')
print(f'É maiúsculo: {valor.isupper()}')
print(f'É imprimível: {valor.isprintable()}')
print(f'É título (capitalizado): {valor.istitle()}')
print(f'É numérico: {valor.isnumeric()}')
print(f'É dígito: {valor.isdigit()}')
