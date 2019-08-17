ubrxA = -1.938
EXRA = -1.846
ubrxB = -1.387  
EXRB = -0.842
N1 =  0.9268
N2 =  0.4627
F = (1-N1)/N2
print('F = ', F)

newN1 = EXRA/ubrxA
newN2 = EXRB/ubrxB
newF = (1-newN1)/newN2
print('newF = ', newF)


original = 1.0/ubrxA + 1.0/ubrxB
b13 = N1/EXRA + N2/EXRB
new1 = N1/EXRA + N1/EXRB

new2 = newN1/EXRA + newN1/EXRB



print('original = ', original)
print('b13 = ', b13)
print('new1 = ', new1)
