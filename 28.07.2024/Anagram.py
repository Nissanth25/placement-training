def is_anagram(a1, a2):
    return sorted(a1) == sorted(a2)

str1 = "listen"
str2 = "silent"
print(is_anagram(str1, str2))
