n = int(input())

a = n // 365

m = (n%365) // 30

d = (n%365) %30

print('{} ano(s)'.format(a))
print('{} mes(es)'.format(m))
print('{} dia(s)'.format(d))