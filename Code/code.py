n = (int)(input())
ans = 1000000000
for i in range(n):
	x = int(input())
	ans = min(ans, x)
print(ans)