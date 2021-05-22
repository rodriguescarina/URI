t = int(input())

hs = 3600

h= t//hs

m = (t -(hs*h)) // 60

s = (t-(hs*h)-(m*60))

print('{}:{}:{}'.format(h,m,s))