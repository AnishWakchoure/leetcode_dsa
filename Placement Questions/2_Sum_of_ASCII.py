'''
Find summation of each character in string and return it.
'''

s = "programming"

ans = 0
for i in s:
    ans += ord(i)

print(ans)
