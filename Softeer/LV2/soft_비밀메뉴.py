m,n,k = map(int,input().split())
m = input().split()
n = input().split()

secret = False
for i in range(n-m+1):
    if m == n[i:i+m]:
        secret = True
        break

if secret == True:
    print('secret')
else:
    print('normal')