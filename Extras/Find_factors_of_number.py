import math
print("Insert number to find factors: ")
x = abs(int(input()))
ans = []
for i in range(1, int(math.sqrt(x))+1):
    if x%i == 0:
        ans.extend([i, int(x/i)])
print(sorted(ans))


# Here, the catch is that 
1. factors are only in range from 1 to sqrt(n)
2. if number % i == 0 is one factor, then number/i is also a factor