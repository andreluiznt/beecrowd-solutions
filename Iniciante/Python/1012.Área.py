pi = 3.14159

A, B, C = input().split()

A = float(A)
B = float(B)
C = float(C)

areaTriangulo = (A*C)/2
areaCirculo = pi * pow(C, 2)
areaTrapezio = ((A+B)*C)/2
areaQuadrado = B*B
areaRetangulo = A*B

print('TRIANGULO: {:.3f}'.format(areaTriangulo))
print('CIRCULO: {:.3f}'.format(areaCirculo))
print('TRAPEZIO: {:.3f}'.format(areaTrapezio))
print('QUADRADO: {:.3f}'.format(areaQuadrado))
print('RETANGULO: {:.3f}'.format(areaRetangulo))