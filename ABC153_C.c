n,k = list(map(int,input().split()))
h = list(map(int,input().split()))
sum1=0
ans = sorted(h,reverse = True)

for i in range(k,n):
	sum+=ans[i]

print(sum)

