'''
Find the character made by adding all the characters of the given string

Given a string str consisting of lowercase English alphabets. 
The task is to add all the character values 
i.e. 'a' = 1, 'b' = 2, 'c' = 3, ..., 'z' = 26 
and output the character corresponding to the sum value. 
If it exceeds 26 then take sum % 26.
'''

s = input().strip()

ans = 0

for i in s:
    ans += ord(i) - 96

print(chr((ans % 26) + 96))