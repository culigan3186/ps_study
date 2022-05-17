w,n = map(int, input().split())
jewels = [list(map(int, input().split())) for _ in range(n)]
jewels.sort(key=lambda x: x[1], reverse=True)
print(jewels)