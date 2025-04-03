nome = input()
salFixo = float(input())
totalVendas = float(input())

salBonus = salFixo + (totalVendas*0.15)

print('TOTAL = R$ {:.2f}'.format(salBonus))