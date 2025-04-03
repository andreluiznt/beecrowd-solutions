a, b, c = input().split()

a = int(a)
b = int(b)
c = int(c)

maiorAB = (a+b+abs(a-b))/2

maiorAC = (maiorAB+c+abs(maiorAB-c))/2
maiorAC = int(maiorAC)

print(maiorAC,'eh o maior')