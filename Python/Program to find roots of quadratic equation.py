import cmath

a = 1
b = 5
c = 6

deter = (b**2) - (4*a*c)

sol1 = (-b-cmath.sqrt(deter))/(2*a)
sol2 = (-b+cmath.sqrt(deter))/(2*a)

print('The solution are {0} and {1}'.format(sol1,sol2))
